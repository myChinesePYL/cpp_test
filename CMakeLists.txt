cmake_minimum_required(VERSION 3.15)
project(cpp_test)

set(CMAKE_CXX_STANDARD 11)

# build
add_executable(${CMAKE_PROJECT_NAME} main.cpp)

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
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)

target_compile_features(${CMAKE_PROJECT_NAME} PRIVATE cxx_std_11)