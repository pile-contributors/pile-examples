cmake_minimum_required(VERSION 2.8.9)

set (PROJECT_NAME "create_pile")
project(${PROJECT_NAME})

set (PROJECT_SOURCES
    main.cc
    refcnt.cc
)

set (PROJECT_HEADERS
    refcnt.h
)

add_executable(
    ${PROJECT_NAME}
    ${PROJECT_SOURCES}
    ${PROJECT_HEADERS})

target_link_libraries(
    ${PROJECT_NAME}
    )
