#pragma once

#include "nand_gate.hpp"

class M
{
    private:
        bool i; // input
        bool s; // save state
    protected:
        bool running = false;
        bool a, b, c, o;

        void update();

        void perform_internal_wire_loop();
    public:
        void setI(bool i);

        void setS(bool s);

        void init();

        bool get();
};