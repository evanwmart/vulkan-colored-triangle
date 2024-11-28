cmake_minimum_required(VERSION 3.10)

# Project name
project(VulkanColoredTriangle)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add executable
add_executable(VulkanColoredTriangle src/main.cpp)

# Link Vulkan library
find_package(Vulkan REQUIRED)
target_link_libraries(VulkanColoredTriangle Vulkan::Vulkan)

# Include shader directory (if needed later)
target_include_directories(VulkanColoredTriangle PRIVATE ${CMAKE_SOURCE_DIR}/shaders)
