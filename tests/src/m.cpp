#include "../catch.hpp"

#include "../../src/m.hpp"

SCENARIO("memory M is initializing")
{
    M m;

    GIVEN("input 1 is given and save is on")
    {
        m.setI(1);
        m.setS(1);

        m.init();

        WHEN("save is turned off, output will stay as true")
        {
            m.setS(0);
            REQUIRE(m.get() == true);
        }

        WHEN("input is set to 0, output will stay as true")
        {
            m.setS(0);
            m.setI(0);

            REQUIRE(m.get() == true);
        }

        WHEN("input is 0 and save is turned on, output will be false")
        {
            m.setS(0);
            m.setI(0);
            m.setS(1);

            REQUIRE(m.get() == false);
        }

        WHEN("save is turned off and input is set to 1, output will be false")
        {
            m.setS(0);
            m.setI(0);
            m.setS(1);

            m.setS(0);
            m.setS(1);

            REQUIRE(m.get() == false);
        }
    }
}