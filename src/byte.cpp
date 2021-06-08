#include "byte.hpp"

void Byte::setS(bool s)
{
    this->s = s;
}

void Byte::set(const char* inputs)
{
    i0 = inputs++;
    i1 = inputs++;
    i2 = inputs++;
    i3 = inputs++;
    i4 = inputs++;
    i5 = inputs++;
    i6 = inputs++;
    i7 = inputs++;
}

void Byte::update()
{
    m0.setI(i0);
    m0.setS(s);
    o0 = m0.get();

    m1.setI(i1);
    m1.setS(s);
    o1 = m1.get();

    m2.setI(i2);
    m2.setS(s);
    o2 = m2.get();

    m3.setI(i3);
    m3.setS(s);
    o3 = m3.get();

    m4.setI(i4);
    m4.setS(s);
    o4 = m4.get();

    m5.setI(i5);
    m5.setS(s);
    o5 = m5.get();

    m6.setI(i6);
    m6.setS(s);
    o6 = m6.get();

    m7.setI(i7);
    m7.setS(s);
    o7 = m7.get();
}

const char* Byte::get()
{
    int temp_o0 = boolToChar(o0);
    int temp_o1 = boolToChar(o1);
    int temp_o2 = boolToChar(o2);
    int temp_o3 = boolToChar(o3);
    int temp_o4 = boolToChar(o4);
    int temp_o5 = boolToChar(o5);
    int temp_o6 = boolToChar(o6);
    int temp_o7 = boolToChar(o7);;

    const char result[] = {
        temp_o0,
        temp_o1,
        temp_o2,
        temp_o3,
        temp_o4,
        temp_o5,
        temp_o6,
        temp_o7
    };
    return result;
}

const char Byte::boolToChar(bool value)
{
    return value ? '1' : '0';
}
