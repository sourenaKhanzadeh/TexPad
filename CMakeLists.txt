cmake_minimum_required(VERSION 3.0)

project(TexPad VERSION 1.0.0 LANGUAGES CXX
    DESCRIPTION "A simple text editor for c++ documents")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PY_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/pybind11/include)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)

add_git_submodule(external/pybind11)

add_subdirectory(src)

