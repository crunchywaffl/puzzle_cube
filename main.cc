#include <iostream>

// GLEW
#include <GL/glew.h>

// GLFW
#define GLM_ENABLE_EXPERIMENTAL
#include <GLFW/glfw3.h>

const GLint WIDTH = 1000, HEIGHT = 1000;

// update to pull from a header file
const GLchar *cubeVertexShader = "#version 400\n"
"layout (location = 0) in vec3 position;\n"
"layout (location = 1) in vec3 vertex_color;\n"
"out vec3 color;\n"
"void main()\n"
"{\n"
"gl_Position = vec4(position.x, position.y, position.z, 1.0);\n"
"}';

const GLchar *cubeFragmentShader = "#version 400\n"
"out vec4 color;\n"
"void main()\n"
"{\n"
"color = vec4(1.0f, 1.0f, 1.0f, 1.0f);\n"
"}";

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(WIDTH, HEIGHT, "woah kenny", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    
    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader
    
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}


