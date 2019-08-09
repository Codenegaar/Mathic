#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <mathic/mathic.hpp>

TEST_CASE("Add two numbers", "[main]")
{
    Mathic mathic;
    REQUIRE(mathic.add(1, 2) == 3);
}
