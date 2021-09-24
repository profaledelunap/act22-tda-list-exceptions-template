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

TEST_CASE("testing get", "[List]")
{
	List<int> b1;
	b1.create(7);
	b1.create(6);
	b1.create(5);
	b1.create(4);
	b1.create(3);
	b1.create(2);

	SECTION("b1.read(2)")
	{
		REQUIRE(b1.read(2) == 0);
	}

	SECTION("b1.read(7)")
	{
		REQUIRE(b1.read(7) == 5);
	}

	SECTION("b1.read(5)")
	{
		REQUIRE(b1.read(5) == 3);
	}

	SECTION("b1.read(100)")
	{
		REQUIRE(b1.read(100) == -1);
	}
}
