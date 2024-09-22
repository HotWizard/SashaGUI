#include "../include/RGB.hpp"
#include <cstddef>

SashaGUI::RGB::RGB()
{
}

SashaGUI::RGB::RGB(const size_t &R, const size_t &G, const size_t &B)
{
    set(R, G, B);
}

void SashaGUI::RGB::set(const size_t &R, const size_t &G, const size_t &B)
{
    _R = R;
    _G = G;
    _B = B;
}

const size_t SashaGUI::RGB::R(void) const
{
    return _R;
}

const size_t SashaGUI::RGB::G(void) const
{
    return _G;
}

const size_t SashaGUI::RGB::B(void) const
{
    return _B;
}