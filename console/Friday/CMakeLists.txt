# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(friday)

# 设置
set(CMAKE_CXX_STANDARD 11)

# 增加编译选项
add_definitions("-Wall -g")

# 增加子路径
add_subdirectory(${PROJECT_SOURCE_DIR}/thirdparty/spdlog)

# 设置include路径
include_directories(${PROJECT_SOURCE_DIR}/thirdparty/spdlog/include)
include_directories(${PROJECT_SOURCE_DIR}/include)

# 获取路径下所有源文件
aux_source_directory(${PROJECT_SOURCE_DIR}/src MAIN_SRCS)

# 编译源码生成目标
add_executable(friday ${MAIN_SRCS})

# 链接库文件
target_link_libraries(friday PRIVATE spdlog::spdlog)
