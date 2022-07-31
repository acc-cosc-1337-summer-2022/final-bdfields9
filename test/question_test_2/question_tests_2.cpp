#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE ("Test Class Function get_amount")
{
	Toll Test_Case1(6,5);
	REQUIRE(Test_Case1.get_amount()== 1.25);
	Toll Test_Case2(8, 10);
	REQUIRE(Test_Case2.get_amount()== 25.00);
	Toll Test_Case3(18,4);
	REQUIRE(Test_Case3.get_amount()== 4.00);
}