#include "../catch.hpp"
#include "../../src/enabler.hpp"
#include <iostream>
#include <typeinfo>

SCENARIO("initializing an enabler")
{
    GIVEN("enabler data set to 1100 0101")
    {
        Enabler enabler;
        std::string test_input = "11000101";
        enabler.set(test_input);
        enabler.on();

        std::string output = enabler.get();

        REQUIRE(enabler.get() == test_input);

        enabler.off();

        REQUIRE(enabler.get() == "00000000");
    }
}