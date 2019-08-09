set(HEADERS_LIST "${PROJECT_SOURCE_DIR}/include/mathic/mathic.hpp")

add_library(mathic SHARED ./mathic.cpp ${HEADERS_LIST})

target_include_directories(
    mathic
    PUBLIC 
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
