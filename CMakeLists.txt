#Set minimum required version to 3.14
cmake_minimum_required(VERSION 3.14)
project(Mathic
        VERSION 1.0.0
        LANGUAGES CXX
)

#Submodule the dependencies
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    message(STATUS "Updating submodules")
    execute_process(
        COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
        RESULT_VARIABLE GIT_SUBMOD_RESULT
    )
    
    if(NOT ${GIT_SUBMOD_RESULT} EQUAL "0")
        message(FATAL_ERROR "Unable to update submodules")
    else()
        message(STATUS "Updated submodules: OK")
    endif()
endif()

#check for submodule existance
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/extern/Catch2")
    message(FATAL_ERROR "Catch2 has not been downloaded, aborting")
endif()

#Add the dependency
add_subdirectory(extern/Catch2)

#Add the library
add_subdirectory(src)

#Add apps
set(MATHIC_BUILD_APPS ON CACHE BOOL "")
if(${MATHIC_BUILD_APPS})
    add_subdirectory(apps)
endif()

#Add tests
enable_testing()
add_subdirectory(tests)

#Add documentations if needed
set(MATHIC_BUILD_DOCS ON CACHE BOOL "")
if(${MATHIC_BUILD_DOCS})
    add_subdirectory(docs)
endif()

#Install
include(GNUInstallDirs)
set(INSTALL_CONFIG_DIR ${CMAKE_INSTALL_LIBDIR}/cmake/Mathic)

#Install targets in appropriate locations
install(
    TARGETS
        mathic
    EXPORT
        MathicTargets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

#Generate and install configuration
install(
    EXPORT MathicTargets
    DESTINATION ${INSTALL_CONFIG_DIR}
    FILE MathicTargets.cmake
    NAMESPACE Mathic::
)

#Install the header files
install(
    DIRECTORY include/mathic
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING PATTERN "*.h*"
)
