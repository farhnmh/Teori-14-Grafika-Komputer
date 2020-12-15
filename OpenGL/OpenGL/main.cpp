#include "libs.h"

int main() {
	glfwInit();

	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK) {
		glfwTerminate();
		throw "Error";
	}

	system("PAUSE");
	return 0;
}