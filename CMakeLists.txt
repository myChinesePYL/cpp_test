cmake_minimum_required(VERSION 3.13)
project(cpp_test)

set(CMAKE_CXX_STANDARD 17)

# build
add_executable(${CMAKE_PROJECT_NAME} main.cpp)

# 后期处理
include_directories(
  ${CMAKE_PREFIX_PATH}/include/
  ${CMAKE_INSTALL_PREFIX}/include/
  ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

set(CMAKE_PREFIX_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
find_package(fmt REQUIRED)

# 链接库
target_link_libraries(
  ${CMAKE_PROJECT_NAME}
  fmt::fmt
)

target_compile_features(${CMAKE_PROJECT_NAME} PRIVATE cxx_std_17)