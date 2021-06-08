#include "../catch.hpp"
#include "../../src/byte.hpp"
#include <iostream>

SCENARIO("byte memory gets new data")
{
    GIVEN("byte get 0101 0110 data and save state on")
    {
        Byte byte;

        const char* test_input = "01010110";
        byte.set(test_input);
        byte.setS(1);
        byte.update();
        std::string result = byte.get();

        REQUIRE(byte.get() == test_input);

        WHEN("save state is turned off")
        {
            byte.setS(0);
            REQUIRE(byte.get() == test_input);
        }

        WHEN("input is changed while save state if off")
        {
            byte.setS(0);
            byte.set("11001100");
            REQUIRE(byte.get() == test_input);
        }
        
        WHEN("save state is off, input is changed then save state turned on and off")
        {
            byte.setS(0);
            byte.set("11001100");
            byte.setS(1);
            byte.setS(0);
            REQUIRE(byte.get() == "11001100");
        }
    }
}