cmake_minimum_required(VERSION 3.15.0)

project(corrosion-test)

add_executable(corrosion-test STATIC
    source/main.cpp
)

target_link_directories(corrosion-test
    PRIVATE
        dsp-tool-box-rs
)