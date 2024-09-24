#include "../include/RGBA.hpp"
#include <cstddef>

SashaGUI::RGBA::RGBA()
{
}

SashaGUI::RGBA::RGBA(const size_t &R, const size_t &G, const size_t &B, const size_t &A)
{
    set(R, G, B, A);
}

void SashaGUI::RGBA::set(const size_t &R, const size_t &G, const size_t &B, const size_t &A)
{
    _R = R;
    _G = G;
    _B = B;
    _A = A;
}

const size_t &SashaGUI::RGBA::R(void) const
{
    return _R;
}

const size_t &SashaGUI::RGBA::G(void) const
{
    return _G;
}

const size_t &SashaGUI::RGBA::B(void) const
{
    return _B;
}

const size_t &SashaGUI::RGBA::A(void) const
{
    return _A;
}