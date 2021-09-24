
/*
 * main.cpp
 *
 *  Created on: 05/08/2015
 *      Author: pperezm
 */
#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.h"
#include "list.h"

TEST_CASE("testing update", "[List]")
{
    List<int> b1;
    b1.create(7);
    b1.create(6);
    b1.create(5);
    b1.create(4);
    b1.create(3);
    b1.create(2);

    SECTION("b1.update(3, 0)")
    {
        b1.update(3, 0);
        REQUIRE(b1.get(0) == 3);
    }

    SECTION("b1.update(8, 5)")
    {
        b1.update(8, 5);
        REQUIRE(b1.get(5) == 8);
    }
}
