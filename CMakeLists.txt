cmake_minimum_required(VERSION 3.15)
project(CCML)

set(CMAKE_CXX_STANDARD 17)
# 需安装的库
#  - raylib
find_package(raylib 3.0 REQUIRED)

# build
add_executable(${CMAKE_PROJECT_NAME} main.cpp)

# 后期处理
include_directories(${CMAKE_PREFIX_PATH}/include)
link_directories(${CMAKE_PREFIX_PATH}/lib)

target_link_libraries(
  ${CMAKE_PROJECT_NAME}
  raylib
)

if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()
