//
// Created by felix on 2024-01-09.
//
#pragma once

#include <string>
#include <glm/gtc/matrix_transform.hpp>


class Shader
{
public:
    unsigned int ID;

    Shader(const char *vertexPath, const char *fragmentPath);
    void use() const;
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void setMatrix(const std::string &name, glm::mat4 &value) const;
};