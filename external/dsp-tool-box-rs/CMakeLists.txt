cmake_minimum_required(VERSION 3.15.0)

include(FetchContent)

FetchContent_Declare(
    dsp-tool-box-rs
    GIT_REPOSITORY https://github.com/hansen-audio/dsp-tool-box-rs.git
    GIT_TAG main
)

FetchContent_GetProperties(dsp-tool-box-rs)
if(NOT dsp-tool-box-rs_POPULATED)
    FetchContent_Populate(dsp-tool-box-rs)
endif()

corrosion_import_crate(MANIFEST_PATH ${dsp-tool-box-rs_SOURCE_DIR}/Cargo.toml)

target_include_directories(dsp-tool-box-rs 
    INTERFACE 
        ${dsp-tool-box-rs_SOURCE_DIR}
)