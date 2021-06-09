#pragma once

#include <iostream>
#include <string>

class Enabler
{
    private:
        bool enable;
        std::string input;
        std::string output;

        const char boolToChar(bool value);
        bool charToBool(char value);

    public:
        void set(std::string input);

        void on();
        void off();

        std::string get();

        void update();
};