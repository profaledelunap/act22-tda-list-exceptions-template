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

TEST_CASE("testing clear", "[List]")
{
	List<int> b1;
	b1.create(7);
	b1.create(6);
	b1.create(5);
	b1.create(4);
	b1.create(3);
	b1.create(2);

	SECTION("b1.clear(0)")
	{
		int result = b1.clear(0);
		REQUIRE(result == 2);
		REQUIRE(b1.length() == 5);
		REQUIRE(b1.string() == "[3, 4, 5, 6, 7]");
	}

	SECTION("b1.clear(5)")
	{
		int result = b1.clear(5);
		REQUIRE(result == 7);
		REQUIRE(b1.length() == 5);
		REQUIRE(b1.string() == "[2, 3, 4, 5, 6]");
	}

	SECTION("b1.clear()")
	{
		b1.clear();
		REQUIRE(b1.empty() == true);
	}
}

TEST_CASE("testing del", "[List]")
{
	List<int> b1;
	b1.create(7);
	b1.create(6);
	b1.create(5);
	b1.create(4);
	b1.create(3);
	b1.create(2);

	SECTION("b1.del(2)")
	{
		int result = b1.del(2);
		REQUIRE(result == true);
		REQUIRE(b1.length() == 5);
		REQUIRE(b1.string() == "[3, 4, 5, 6, 7]");
	}

	SECTION("b1.del(7)")
	{
		int result = b1.del(7);
		REQUIRE(result == true);
		REQUIRE(b1.length() == 5);
		REQUIRE(b1.string() == "[2, 3, 4, 5, 6]");
	}

	SECTION("b1.del(8)")
	{
		int result = b1.del(8);
		REQUIRE(result == false);
		REQUIRE(b1.length() == 6);
		REQUIRE(b1.string() == "[2, 3, 4, 5, 6, 7]");
	}
}