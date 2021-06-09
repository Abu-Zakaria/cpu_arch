#pragma once

#include <string>
#include "byte.hpp"
#include "enabler.hpp"

class R
{
    private:
        bool s;
        bool e;
        std::string input = "00000000";

        std::string byte_output = "00000000";
        std::string enabler_output = "00000000";

        Byte byte;
        Enabler enabler;

        void update();
    public:
        void set(const char* input);

        void setS(bool s);
        void setE(bool e);

        std::string get();
};