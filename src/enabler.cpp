#include "enabler.hpp"
#include "and_gate.hpp"
#include <iostream>
#include <string.h>

void Enabler::set(std::string input)
{
    this->input = input;
    update();
}

std::string Enabler::get()
{
    return output;
}

void Enabler::update()
{
    output = "";

    bool i0 = charToBool(input[0]);
    bool i1 = charToBool(input[1]);
    bool i2 = charToBool(input[2]);
    bool i3 = charToBool(input[3]);
    bool i4 = charToBool(input[4]);
    bool i5 = charToBool(input[5]);
    bool i6 = charToBool(input[6]);
    bool i7 = charToBool(input[7]);

    AndGate ag_0;
    AndGate ag_1;
    AndGate ag_2;
    AndGate ag_3;
    AndGate ag_4;
    AndGate ag_5;
    AndGate ag_6;
    AndGate ag_7;

    ag_0.setA(i0);
    ag_0.setB(enable);
    char o0 = boolToChar(ag_0.get());
    ag_1.setA(i1);
    ag_1.setB(enable);
    char o1 = boolToChar(ag_1.get());
    ag_2.setA(i2);
    ag_2.setB(enable);
    char o2 = boolToChar(ag_2.get());
    ag_3.setA(i3);
    ag_3.setB(enable);
    char o3 = boolToChar(ag_3.get());
    ag_4.setA(i4);
    ag_4.setB(enable);
    char o4 = boolToChar(ag_4.get());
    ag_5.setA(i5);
    ag_5.setB(enable);
    char o5 = boolToChar(ag_5.get());
    ag_6.setA(i6);
    ag_6.setB(enable);
    char o6 = boolToChar(ag_6.get());
    ag_7.setA(i7);
    ag_7.setB(enable);
    char o7 = boolToChar(ag_7.get());

    output += o1;
    output += o1;
    output += o2;
    output += o3;
    output += o4;
    output += o5;
    output += o6;
    output += o7;
}

void Enabler::on()
{
    enable = true;
    update();
}

void Enabler::off()
{
    enable = false;
    update();
}

const char Enabler::boolToChar(bool value)
{
    return value ? '1' : '0';
}

bool Enabler::charToBool(char value)
{
    return value == '1' ? true : false;
}