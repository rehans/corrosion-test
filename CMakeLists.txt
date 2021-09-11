cmake_minimum_required(VERSION 3.15.0)

project(corrosion-test)

add_subdirectory(external)

add_executable(corrosion-test
    source/main.cpp
)

target_link_libraries(corrosion-test
    PRIVATE
        fx-collection-rs
)