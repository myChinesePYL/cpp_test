cmake_minimum_required(VERSION 3.15)
project(cpp_test)

set(CMAKE_CXX_STANDARD 17)

# build
file(GLOB_RECURSE HppCpp ${CMAKE_CURRENT_SOURCE_DIR}/modules/*.cpp)
add_executable(${CMAKE_PROJECT_NAME} src/main.cpp ${HppCpp})

# 后期处理
include_directories(
  ${CMAKE_PREFIX_PATH}/include/
  ${CMAKE_INSTALL_PREFIX}/include/
  ${CMAKE_CURRENT_SOURCE_DIR}/include/
)
link_directories(
  ${CMAKE_PREFIX_PATH}/lib/
  ${CMAKE_INSTALL_PREFIX}/lib/
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/
)

set(CMAKE_PREFIX_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/cmake)

# 查找库
find_package(ftxui REQUIRED)

# 链接库
target_link_libraries(
  ${CMAKE_PROJECT_NAME}
)

target_compile_features(${CMAKE_PROJECT_NAME} PRIVATE cxx_std_17)