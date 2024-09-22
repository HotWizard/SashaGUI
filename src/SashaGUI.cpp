#include "../include/SashaGUI.hpp"
#include <GL/gl.h>

inline SashaGUI::RGBA background_color;

const bool SashaGUI::init(void)
{
    return 0;
}

void SashaGUI::set_background_color(const RGBA &color)
{
    background_color = color;
}

void SashaGUI::begin(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(background_color.R(), background_color.G(), background_color.B(), background_color.A());
}

void SashaGUI::end(void)
{
}