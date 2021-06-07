#pragma once

class M
{
    private:
        bool i; // input
        bool s; // save state
    protected:
        bool a, b, c, o;

        void update();

        void perform_internal_wire_loop();
    public:
        void setI(bool i);

        void setS(bool s);

        void init();

        bool get();
};
