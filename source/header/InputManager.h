#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/hash.hpp>


class InputManager
{
public:
	InputManager();
	~InputManager();

	void InitializeInputManager();
	glm::vec3 key_callback(GLFWwindow* window, int key, int scancode, int action, int mods, glm::vec3 before_eye);
};

