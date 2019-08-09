#Find the doxygen generator package
find_package(
    Doxygen
    REQUIRED dot
)

#Missing doxygen is a fatal error 
#since this target is generated if the 
#MATHIC_BUILD_DOCS flag is ON
if(NOT ${DOXYGEN_FOUND})
    message(FATAL_ERROR "Doxygen excecutable not found!")
else()
    #set the input configuration file, and the generated output file
    set(DOXYGEN_IN ${PROJECT_SOURCE_DIR}/docs/Doxyfile.in)
    set(DOXYGEN_OUT ${PROJECT_SOURCE_DIR}/docs/Doxyfile)
    
    #Generate the configuration
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    message(STATUS "Starting doxygen build")
    
    #Add the target and start generating it
    add_custom_target(
        mathic-doc ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
        COMMENT "Generating documentation"
        VERBATIM
    )
endif()
