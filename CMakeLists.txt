cmake_minimum_required(VERSION 3.19)
project(Task_32_2)

set(CMAKE_CXX_STANDARD 14)
set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(Task_32_2 main.cpp)
target_link_libraries(Task_32_2 PRIVATE nlohmann_json::nlohmann_json)