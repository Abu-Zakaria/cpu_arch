#include "m.hpp"
#include <iostream>
#include <chrono>
#include <thread>

void M::setI(bool i)
{
    this->i = i;

    NandGate gate_1;

    gate_1.setA(i);
    gate_1.setB(s);

    update();
};

void M::setS(bool s)
{
    this->s = s;

    NandGate gate_1;
    NandGate gate_2;

    gate_1.setA(i);
    gate_1.setB(s);
    a = gate_1.get();

    gate_2.setA(a);
    gate_2.setB(s);
    b = gate_2.get();

    update();
};

bool M::get()
{
    std::cout << "i: " << i << ", s: " << s << "\n";

    return o;
};

void M::init()
{
    NandGate gate_1;
    NandGate gate_2;
    NandGate gate_3;
    NandGate gate_4;

    gate_1.setA(i);
    gate_1.setB(s);
    a = gate_1.get();

    gate_2.setA(a);
    gate_2.setB(s);
    b = gate_2.get();

    gate_4.setA(o);
    gate_4.setB(b);
    c = gate_4.get();

    gate_3.setA(a);
    gate_3.setB(c);
    o = gate_3.get();

    gate_4.setA(o);
    gate_4.setB(b);
    c = gate_4.get();

    gate_3.setB(c);
    o = gate_3.get();
};

void M::update()
{
    // update internal wires

    NandGate gate_2;
    gate_2.setA(a);
    gate_2.setB(s);
    b = gate_2.get();

    // run the loop 2 times to get proper value
    perform_internal_wire_loop();
    perform_internal_wire_loop();
};

void M::perform_internal_wire_loop()
{
    NandGate gate_4;
    gate_4.setA(o);
    gate_4.setB(b);
    c = gate_4.get();

    NandGate gate_3;
    gate_3.setA(a);
    gate_3.setB(c);
    o = gate_3.get();
};