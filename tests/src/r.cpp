#include "../catch.hpp"
#include "../../src/r.hpp"

SCENARIO("register being initialized")
{
    R r;

    GIVEN("register has inputs")
    {
        const char* input = "00111010";

        r.set(input);
        r.setS(1);
        r.setE(1);

        WHEN("output data is requested")
        {
            REQUIRE(r.get() == input);
        }


        WHEN("enabler is off, output will be 0000 0000")
        {
            r.setE(0);

            REQUIRE(r.get() == "00000000");
        }

        WHEN("input is saved, and enabler is on")
        {
            r.setS(0);

            REQUIRE(r.get() == input);
        }

        WHEN("input is changed while save is off")
        {
            r.setS(0);
            r.set("11110000");

            REQUIRE(r.get() == input);
        }

        WHEN("input is changed while save is off, then save turned on")
        {
            r.setS(0);
            r.set("11110000");
            r.setS(1);

            REQUIRE(r.get() == "11110000");
        }

        WHEN("input is changed while save is off, then save turned on, then enabler if turned off")
        {
            r.setS(0);
            r.set("11110000");
            r.setS(1);
            r.setE(0);

            REQUIRE(r.get() == "00000000");
        }
    }

    GIVEN("register doesnt have any input")
    {
        REQUIRE(r.get() == "00000000");
    }
}