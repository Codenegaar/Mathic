# Introduction
This small library shows you how to create a basic C++ application with dependencies.

# Build
## Configure
Run this command to configure the project:

` cmake -B build -S . `
## Build
` cmake --build build `
## Install
` cmake --build build --target install `

Note that this command requires root privilege.

# Test 
Run the following command to perform tests

` cmake --build build --target test `

# Options
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
