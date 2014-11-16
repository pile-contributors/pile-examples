cmake_minimum_required(VERSION 2.8.9)

set (PROJECT_NAME "create_pile")
project(${PROJECT_NAME})

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/build/bin")

set (INCLUDE_PILE_SOURCES_DIRECTLY OFF)
if (INCLUDE_PILE_SOURCES_DIRECTLY)
    include(pile_support)
    pileInclude (RefCnt)

    refcntInit(PILE)
    add_executable(
        ${PROJECT_NAME}
        main.cc
        ${REFCNT_SOURCES}
        ${REFCNT_HEADERS})
else()
    set (REFCNT_BUILD_MODE SHARED)

    add_subdirectory(refcnt)
    add_executable(
        ${PROJECT_NAME}
        main.cc)
    target_link_libraries(
        ${PROJECT_NAME}
        refcnt)
endif()
