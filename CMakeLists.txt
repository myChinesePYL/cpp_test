cmake_minimum_required(VERSION 3.16)
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
target_compile_features(${CMAKE_PROJECT_NAME} PRIVATE cxx_std_17)
# 资源文件(无法塞进可执行文件的)
add_custom_command( # 图片/贴图
  TARGET ${CMAKE_PROJECT_NAME}
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/imgs
    $<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>/imgs
)
add_custom_command( # 字体
  TARGET ${CMAKE_PROJECT_NAME}
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory
    "${CMAKE_SOURCE_DIR}/fonts"
    "$<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>/fonts"
)
add_custom_command( # 音频
  TARGET ${CMAKE_PROJECT_NAME}
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory
    "${CMAKE_SOURCE_DIR}/audio"
    "$<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>/audio"
)

if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()
