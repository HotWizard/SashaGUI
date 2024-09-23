#ifndef SASHAGUI_HPP
#define SASHAGUI_HPP

#include "RGBA.hpp"
#include "vector.hpp"

namespace SashaGUI
{
    const bool init(void);

    void set_background_color(const RGBA &color);

    void begin(void), end(void);
} // namespace SashaGUI

#endif // SASHAGUI_HPP