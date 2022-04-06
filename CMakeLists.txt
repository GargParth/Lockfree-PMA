cmake_minimum_required(VERSION 3.15)

project(LockFreePMA)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add_subdirectory(ext/folly)

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
    # ext/Concurrent-Skip-list/key_value_pair.cpp
    # ext/Concurrent-Skip-list/node.cpp
    # ext/Concurrent-Skip-list/skip_list.cpp
    ext/skiplist/src/cpp/SkipList.cpp
)

target_include_directories(
    ${PROJECT_NAME} PRIVATE
    ext/Concurrent-Skip-list
    ext/skiplist/src/cpp
)


# target_link_libraries(${PROJECT_NAME} folly)
