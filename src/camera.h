//
// Created by felix on 2024-01-13.
//

#pragma once

#include <glm/glm.hpp>
#include "glfw3.h"

class Camera
{

private:

    float yaw;
    float pitch;
    bool firstMouse;

    glm::vec3 cameraPos;
    glm::vec3 cameraFront;
    glm::vec3 cameraUp;

    float lastX;
    float lastY;

public:
    Camera(int windowWidth, int windowHeight);

    void processInput(GLFWwindow *window, float deltaTime);
    void mouse_callback(GLFWwindow *window, double xpos, double ypos);
    glm::mat4 getCameraView();
};
