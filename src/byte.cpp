#include "byte.hpp"
#include <iostream>

void Byte::setS(bool s)
{
    this->s = s;
    update();
}

void Byte::set(const char* inputs)
{
    i0 = charToBool(inputs[0]);
    i1 = charToBool(inputs[1]);
    i2 = charToBool(inputs[2]);
    i3 = charToBool(inputs[3]);
    i4 = charToBool(inputs[4]);
    i5 = charToBool(inputs[5]);
    i6 = charToBool(inputs[6]);
    i7 = charToBool(inputs[7]);

    update();
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

std::string Byte::get()
{
    char temp_o0 = boolToChar(o0);
    char temp_o1 = boolToChar(o1);
    char temp_o2 = boolToChar(o2);
    char temp_o3 = boolToChar(o3);
    char temp_o4 = boolToChar(o4);
    char temp_o5 = boolToChar(o5);
    char temp_o6 = boolToChar(o6);
    char temp_o7 = boolToChar(o7);


    const char result[] = {
        temp_o0,
        temp_o1,
        temp_o2,
        temp_o3,
        temp_o4,
        temp_o5,
        temp_o6,
        temp_o7,
        '\0'
    };

    std::string result_str = result;

    return result_str;
}

const char Byte::boolToChar(bool value)
{
    return value ? '1' : '0';
}

bool Byte::charToBool(char value)
{
    return value == '1' ? true : false;
}