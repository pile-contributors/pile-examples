cmake_minimum_required(VERSION 2.8.9)
project("pile_examples")

# add all subdirectories
FILE (GLOB children RELATIVE "${CMAKE_SOURCE_DIR}" "${CMAKE_SOURCE_DIR}/*")
FOREACH(child ${children})
    IF (IS_DIRECTORY "${CMAKE_SOURCE_DIR}/${child}")
        IF (NOT "${child}" STREQUAL ".git")
            add_subdirectory("${child}")
        ENDIF()
    ENDIF()
ENDFOREACH()
