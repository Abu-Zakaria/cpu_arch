#pragma once

#include <string>

class Register
{
    private:
        bool s;
        bool e;
        std::string input;

        std::string byte_output;
        std::string enabler_output;

        void update();
    public:
        void set(const char* input);

        void setS(bool s);
        void setE(bool e);

        std::string get();
};