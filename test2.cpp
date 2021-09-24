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

TEST_CASE("testing create", "[List]")
{
	List<int> b1;
	b1.create(7);
	b1.create(6);
	b1.create(5);
	b1.create(4);
	b1.create(3);
	b1.create(2);

	SECTION("b1.create(100, 0)")
	{
		b1.create(100, 0);
		REQUIRE(b1.length() == 7);
		REQUIRE(b1.string() == "[100, 2, 3, 4, 5, 6, 7]");
	}

	SECTION("b1.create(100, 3)")
	{
		b1.create(100, 3);
		REQUIRE(b1.length() == 7);
		REQUIRE(b1.string() == "[2, 3, 4, 100, 5, 6, 7]");
	}

	SECTION("b1.create(100, 6)")
	{
		b1.create(100, 6);
		REQUIRE(b1.length() == 7);
		REQUIRE(b1.string() == "[2, 3, 4, 5, 6, 7, 100]");
	}
}