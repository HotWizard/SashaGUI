template <typename T> SashaGUI::vector2<T>::vector2(const T &x, const T &y)
{
    this->x = x;
    this->y = y;
}

template <typename T> const T &SashaGUI::vector2<T>::X() const
{
    return x;
}

template <typename T> const T &SashaGUI::vector2<T>::Y() const
{
    return y;
}

template <typename T> void SashaGUI::vector2<T>::SetX(const T &x)
{
    this->x = x;
}

template <typename T> void SashaGUI::vector2<T>::SetY(const T &y)
{
    this->y = y;
}

template <typename T> SashaGUI::vector3<T>::vector3()
{
}

template <typename T> SashaGUI::vector3<T>::vector3(const T &x, const T &y, const T &z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

template <typename T> const T &SashaGUI::vector3<T>::X() const
{
    return x;
}

template <typename T> const T &SashaGUI::vector3<T>::Y() const
{
    return y;
}

template <typename T> const T &SashaGUI::vector3<T>::Z() const
{
    return z;
}

template <typename T> void SashaGUI::vector3<T>::SetX(const T &x)
{
    this->x = x;
}

template <typename T> void SashaGUI::vector3<T>::SetY(const T &y)
{
    this->y = y;
}

template <typename T> void SashaGUI::vector3<T>::SetZ(const T &z)
{
    this->z = z;
}