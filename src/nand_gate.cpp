#include "nand_gate.hpp"

bool NandGate::get()
{
    return !(a && b);
}