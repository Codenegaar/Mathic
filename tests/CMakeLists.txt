#Add target
add_executable(mathic-test mathictest.cpp)

#Link to the library and Catch2
target_link_libraries(mathic-test PRIVATE mathic Catch2::Catch2)

#Include CTest to register the tests
include(CTest)
include(${PROJECT_SOURCE_DIR}/extern/Catch2/contrib/Catch.cmake)
catch_discover_tests(mathic-test)
