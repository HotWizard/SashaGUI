#include "RGBA.hpp"
#include <cstddef>
#include <cstdlib>
#include <SashaGUI.hpp>
#include <GLFW/glfw3.h>
#include <string>

using namespace std;

const inline SashaGUI::vector2<size_t> window_size(800, 600);
const inline string windwo_title = "SashaGUI";

GLFWwindow *window;

inline void init(void)
{
    if (!glfwInit() && !SashaGUI::init())
        exit(EXIT_FAILURE);

    window = glfwCreateWindow(window_size.X(), window_size.Y(), windwo_title.c_str(), NULL, NULL);

    if (!window)
        exit(EXIT_FAILURE);

    glfwMakeContextCurrent(window);
}

inline void show()
{
    while (!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);

        SashaGUI::begin();
        SashaGUI::set_background_color(SashaGUI::RGBA(255, 0, 0, 255));
        SashaGUI::end();

        glfwPollEvents();
    }
}

inline void clear()
{
    window = NULL;

    glfwTerminate();
}

int main(void)
{
    init();

    show();

    clear();

    return EXIT_SUCCESS;
}