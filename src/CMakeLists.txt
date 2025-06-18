
# Avalonia必须的编译定义
if(UNIX AND NOT APPLE)
  target_compile_definitions(YourApp PRIVATE LINUX_X11)
endif()

cmake_minimum_required(VERSION 3.20)
project(XamlApp LANGUAGES CXX)

# Avalonia 必须依赖
find_package(DotNET REQUIRED)
set(AVALONIA_VERSION 11.0.0)

# 预编译头配置
add_library(pch_header OBJECT 
  src/pch.h
  src/pch.cpp
)
target_precompile_headers(pch_header PRIVATE src/pch.h)

# 主可执行文件
add_executable(${PROJECT_NAME}
  src/App.xaml
  src/App.xaml.cpp
  src/MainWindow.xaml
  src/MainWindow.xaml.cpp
  $<TARGET_OBJECTS:pch_header>
)

# 链接 Avalonia 库
target_link_libraries(${PROJECT_NAME} PRIVATE
  Avalonia::Avalonia
  Avalonia::Native
)
