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
# 链接库
target_link_libraries(
  ${CMAKE_PROJECT_NAME}
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/libftxui-dom.a
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/libftxui-component.a
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/libftxui-screen.a
)

target_compile_features(${CMAKE_PROJECT_NAME} PRIVATE cxx_std_17)