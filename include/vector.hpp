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

        bool operator==(const vector2<T> &_vector2) const;

        static const T &X(), &Y();

        void SetX(const T &x);

        void SetY(const T &y);
    };
    template <typename T> class vector3
    {
      public:
        vector3();

        vector3(const T &x, const T &y, const T &z);

        bool operator==(const vector3<T> &_vector3) const;

        static const T &X(), &Y(), &Z();

        void SetX(const T &x);

        void SetY(const T &y);

        void SetZ(const T &z);
    };
} // namespace SashaGUI

#include "../src/vector.inl"

#endif // SASHAGUI_VECTOR_HPP