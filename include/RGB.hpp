#ifndef SASHAGUI_RGB_HPP
#define SASHAGUI_RGB_HPP

#include <cstddef>

namespace SashaGUI
{
    class RGB
    {
      public:
        RGB();

        RGB(const size_t &R, const size_t &G, const size_t &B);

        void set(const size_t &R, const size_t &G, const size_t &B);

        const size_t R(void) const, G(void) const, B(void) const;

      private:
        size_t _R = 0, _G = 0, _B = 0;
    };
} // namespace SashaGUI

#endif // SASHAGUI_RGB_HPP