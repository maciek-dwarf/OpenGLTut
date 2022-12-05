#pragma once
#include <glm\gtc\type_ptr.hpp>
#include <GL\glew.h>
#include <GLFW\glfw3.h>

#include <string>
using namespace std;

class Shader
{
public:
	Shader(const char* vShader, const char* fShader);
	void RunProgram();
	void EndProgram();
	GLuint GetUniformValLocation(const char* fName);
private:
	std::string shaderFSrc;
	std::string shaderVSrc;
	GLuint shaderID;
private:
	void AddShader(GLuint theProgram, const char* shaderCode, GLenum shaderType);

};

