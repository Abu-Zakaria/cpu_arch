#pragma once

#include "m.hpp"
#include <iostream>

class Byte
{
    private:
        bool    i0, // inputs
                i1,
                i2,
                i3,
                i4,
                i5,
                i6,
                i7;

        bool    o0, // ouputs
                o1,
                o2,
                o3,
                o4,
                o5,
                o6,
                o7;
        M   m0, // 1 bit memory cells
            m1,
            m2,
            m3,
            m4,
            m5,
            m6,
            m7;

        bool s; // save state

        const char boolToChar(bool value);
        const char charToBool(char value);

    public:
        // @param const char* inputs - example "00101100"
        void set(const char* inputs);

        void setS(bool s);

        std::string get();

        void update();
};