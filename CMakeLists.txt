cmake_minimum_required(VERSION 3.15)
project(hw6_Pollards_Rho_Algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories("/usr/local/include")

add_executable(hw6_Pollards_Rho_Algorithm main.cpp)

target_link_libraries(hw6_Pollards_Rho_Algorithm "/usr/local/lib/libgmp.a")