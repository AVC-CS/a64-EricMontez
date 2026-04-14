#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.hpp"

// T1: swapValues(int&, int&) — swap two values
TEST_CASE("T1: swap two values", "[T1]")
{
    int n1 = 10, n2 = 20;
    swapValues(n1, n2);
    REQUIRE(n1 == 20);
    REQUIRE(n2 == 10);
}

// T2: swapValues(int&, int&, int&) — circular: n1=n2, n2=n3, n3=n1
TEST_CASE("T2: circular swap three values", "[T2]")
{
    int n1 = 10, n2 = 20, n3 = 30;
    swapValues(n1, n2, n3);
    REQUIRE(n1 == 20);
    REQUIRE(n2 == 30);
    REQUIRE(n3 == 10);
}

// T3: swapValues(int&, int&, int&, int&) — reverse: n1<->n4, n2<->n3
TEST_CASE("T3: reverse swap four values", "[T3]")
{
    int n1 = 10, n2 = 20, n3 = 30, n4 = 40;
    swapValues(n1, n2, n3, n4);
    REQUIRE(n1 == 40);
    REQUIRE(n2 == 30);
    REQUIRE(n3 == 20);
    REQUIRE(n4 == 10);
}

// T4: swapValues(int&, int&) with negative values
TEST_CASE("T4: swap two values with negative", "[T4]")
{
    int n1 = -5, n2 = 7;
    swapValues(n1, n2);
    REQUIRE(n1 == 7);
    REQUIRE(n2 == -5);
}
