#include <any>

inline namespace vector2_data
{
    std::any x = 0, y = 0;
}

inline namespace vector3_data
{
    std::any x = 0, y = 0, z = 0;
}

template <typename T> SashaGUI::vector2<T>::vector2()
{
}

template <typename T> SashaGUI::vector2<T>::vector2(const T &x, const T &y)
{
    vector2_data::x = x;
    vector2_data::y = y;
}

template <typename T> bool SashaGUI::vector2<T>::operator==(const SashaGUI::vector2<T> &_vector2) const
{
    return vector2_data::x == _vector2.X() && vector2_data::y == _vector2.Y();
}

template <typename T> const T &SashaGUI::vector2<T>::X()
{
    return vector2_data::x;
}

template <typename T> const T &SashaGUI::vector2<T>::Y()
{
    return vector2_data::y;
}

template <typename T> void SashaGUI::vector2<T>::SetX(const T &x)
{
    vector2_data::x = x;
}

template <typename T> void SashaGUI::vector2<T>::SetY(const T &y)
{
    vector2_data::y = y;
}

template <typename T> SashaGUI::vector3<T>::vector3()
{
}

template <typename T> SashaGUI::vector3<T>::vector3(const T &x, const T &y, const T &z)
{
    vector3_data::x = x;
    vector3_data::y = y;
    vector3_data::z = z;
}

template <typename T> bool SashaGUI::vector3<T>::operator==(const SashaGUI::vector3<T> &_vector3) const
{
    return vector3_data::x == _vector3.X() && vector3_data::y == _vector3.Y() && vector3_data::z == _vector3.Z();
}

template <typename T> const T &SashaGUI::vector3<T>::X()
{
    return vector3_data::x;
}

template <typename T> const T &SashaGUI::vector3<T>::Y()
{
    return vector3_data::y;
}

template <typename T> const T &SashaGUI::vector3<T>::Z()
{
    return vector3_data::z;
}

template <typename T> void SashaGUI::vector3<T>::SetX(const T &x)
{
    vector3_data::x = x;
}

template <typename T> void SashaGUI::vector3<T>::SetY(const T &y)
{
    vector3_data::y = y;
}

template <typename T> void SashaGUI::vector3<T>::SetZ(const T &z)
{
    vector3_data::z = z;
}