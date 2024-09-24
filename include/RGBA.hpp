#ifndef SASHAGUI_RGBA_HPP
#define SASHAGUI_RGBA_HPP

#include <cstddef>

namespace SashaGUI
{
    class RGBA
    {
      public:
        RGBA();

        RGBA(const size_t &R, const size_t &G, const size_t &B, const size_t &A);

        void set(const size_t &R, const size_t &G, const size_t &B, const size_t &A);

        const size_t &R(void) const, &G(void) const, &B(void) const, &A(void) const;

      private:
        size_t _R = 0, _G = 0, _B = 0, _A = 255;
    };
} // namespace SashaGUI

#endif // SASHAGUI_RGBA_HPP