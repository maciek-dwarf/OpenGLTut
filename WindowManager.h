#pragma once
class WindowManager
{
public:
	WindowManager(const char* winTitle = nullptr, const GLint w = 800, const GLint h = 600);
private:
	void Init();
	GLint width;
	GLint height;
	class GLFWwindow* mainWindow;
	class std::string windowTitle;
};

