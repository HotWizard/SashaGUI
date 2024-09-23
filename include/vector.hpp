#ifndef SASHAGUI_VECTOR_HPP
#define SASHAGUI_VECTOR_HPP

#include <cstddef>

namespace SashaGUI
{
    template <typename T> class vector2
    {
      public:
        vector2();

        vector2(const T &x, const T &y);

        const T &X() const, &Y() const;

        void SetX(const T &x);

        void SetY(const T &y);

      private:
        T x = 0, y = 0;
    };
    template <typename T> class vector3
    {
      public:
        vector3();

        vector3(const T &x, const T &y, const T &z);

        const T &X() const, &Y() const, &Z() const;

        void SetX(const T &x);

        void SetY(const T &y);

        void SetZ(const T &z);

      private:
        T x = 0, y = 0, z = 0;
    };
} // namespace SashaGUI

#include "../src/vector.inl"

#endif // SASHAGUI_VECTOR_HPP