#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE ("Test Class Function get_gross_pay")
{
	Payroll Test_Case1(40,10);
	REQUIRE(Test_Case1.get_gross_pay()== 400);
	Payroll Test_Case2(25,15);
	REQUIRE(Test_Case2.get_gross_pay()== 375);
}