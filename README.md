# Introduction
This small library shows you how to create a basic C++ application with dependencies.

# Project Structure
## The root CMake file
This file defines the project, updates submodules, adds other parts of the project as subdirectories and provides the installation rules.

## src/CMakeLists.txt
This file defines the library target.

## apps/CMakeLists.txt
Adds all of the apps as subdirectories. This file helps keeping the root CMake file clean.

## docs/CMakeLists.txt
Defines the documentation target. See the guide in the "references" section for more information.

## tests/CMakeLists.txt
Defines the test target. See Catch2's documentation (link in the references).

## the extern directory
This is where we store the project's dependencies, like Catch2.

## the include directory
Headers storage.

# Build
## Configure
Run this command to configure the project:

` cmake -B build -S . `
## Build
` cmake --build build `
## Install
` cmake --build build --target install `

Note that this command requires root privilege.

## Test 
Run the following command to perform tests

` cmake --build build --target test `

## Options
To disable documentation generation (in case you don't have doxygen installed):

` -DMATHIC_BUILD_DOCS=OFF `

To disable building apps:

` -DMATHIC_BUILD_APPS=OFF `

Both of this options are defaulted to ON, you should pass the above options to cmake in the configuration phase.

# License
Published under GNU GPL v3.0, visit LICENSE.md

# Contact Me!
I hope this example helps you with CMake, if you have any questions, in case google has failed you, feel free to send me a message! (En/Fa)

E-mail: alirashidi127@gmail.com

Telegram, twitter, linkedin: @codenegaar

# References
[Easy dependency management tutorial](https://foonathan.net/blog/2016/07/07/cmake-dependency-handling.html)

[Modern CMake tutorial](https://cliutils.gitlab.io/modern-cmake/)

[Quick setup to use doxygen with CMake](https://vicrucann.github.io/tutorials/quick-cmake-doxygen/)

[CMake Documentation](https://cmake.org/cmake/help/v3.0)

[Catch2 and its documentation](https://github.com/catchorg/Catch2)

[Basic CMake, part 2: Libraries](https://codingnest.com/basic-cmake-part-2/#fn9)
