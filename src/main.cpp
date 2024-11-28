#include <iostream>
#include <vulkan/vulkan.h>

int main() {
    // Print a startup message
    std::cout << "Initializing Vulkan..." << std::endl;

    // Create a Vulkan instance
    VkInstance instance;
    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;

    VkResult result = vkCreateInstance(&createInfo, nullptr, &instance);

    if (result != VK_SUCCESS) {
        std::cerr << "Failed to create Vulkan instance!" << std::endl;
        return -1;
    }

    std::cout << "Vulkan instance created successfully!" << std::endl;

    // Cleanup
    vkDestroyInstance(instance, nullptr);
    return 0;
}
