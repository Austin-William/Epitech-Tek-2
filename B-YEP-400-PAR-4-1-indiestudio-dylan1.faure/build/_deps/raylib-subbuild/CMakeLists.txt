# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.20.5)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(raylib-populate NONE)



include(ExternalProject)
ExternalProject_Add(raylib-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://github.com/raysan5/raylib/archive/b6c8d343dca2ef19c23c50975328a028124cf3cb.tar.gz"
                    SOURCE_DIR          "/home/fedora/Epitech/Epitech-Tek-2/B-YEP-400-PAR-4-1-indiestudio-dylan1.faure/build/_deps/raylib-src"
                    BINARY_DIR          "/home/fedora/Epitech/Epitech-Tek-2/B-YEP-400-PAR-4-1-indiestudio-dylan1.faure/build/_deps/raylib-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)


