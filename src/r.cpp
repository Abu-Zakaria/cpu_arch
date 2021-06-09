#include "r.hpp"

void R::set(const char* input)
{
    byte.set(input);
    this->input = input;

    update();
}

void R::setE(bool e)
{
    if(e)
    {
        enabler.on();
    }
    else
    {
        enabler.off();
    }
    this->e = e;

    update();
}

void R::setS(bool s)
{
    byte.setS(s);
    this->s = s;

    update();
}

std::string R::get()
{
    return enabler_output;
}

void R::update()
{
    byte_output = byte.get();

    enabler.set(byte_output);

    enabler_output = enabler.get();
}