#include "gtest/gtest.h"
#include "../header/rectangle.hpp"
#include <limits>

// TEST(ConstructorTests, defaultConstructor) {
//     Rectangle rect;
//     EXPECT_EQ(rect.area(), 0);
//     EXPECT_EQ(rect.perimeter(), 0);
// }

TEST(ConstructorTests, parametrizedConstructor) {
    Rectangle rect(5, 10);
    EXPECT_EQ(rect.area(), 50);
    EXPECT_EQ(rect.perimeter(), 30);
}

// TEST(AreaTests, zeroDimensions) {
//     Rectangle rect;
//     EXPECT_EQ(rect.area(), 0);
// }

TEST(AreaTests, nonZeroDimensions) {
    Rectangle rect(3, 4);
    EXPECT_EQ(rect.area(), 12);
}

// TEST(PerimeterTests, zeroDimensions) {
//     Rectangle rect;
//     EXPECT_EQ(rect.perimeter(), 0);
// }

TEST(PerimeterTests, nonZeroDimensions) {
    Rectangle rect(3, 4);
    EXPECT_EQ(rect.perimeter(), 14);
}

#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

// TEST(ConstructorTests, DefaultConstructor) {
//   Rectangle r;
//   EXPECT_EQ(r.area(), 0);
//   EXPECT_EQ(r.perimeter(), 0);
// }

TEST(ConstructorTests, NegativeConstructor) {
    Rectangle r(5, -10);
    EXPECT_EQ(r.area(), 0);
    EXPECT_EQ(r.perimeter(), 0);
}

TEST(ConstructorTests, DoubleConstructor) {
    Rectangle r(1.23, 4.56);
    EXPECT_DOUBLE_EQ(r.area(), 5.6088);
    EXPECT_DOUBLE_EQ(r.perimeter(), 11.58);
}

TEST(PerimeterTests, ZeroPerimeter) {
    Rectangle r(0, 0);
    EXPECT_EQ(r.perimeter(), 0); // Hard code
}

TEST(PerimeterTests, NegativePerimeter) {
    Rectangle r(-1, -2);
    EXPECT_EQ(r.perimeter(), 0);
}

TEST(PerimeterTests, LargePerimeter) {
    Rectangle r(std::numeric_limits<int>::max(), std::numeric_limits<int>::max());  // 2147483647
    EXPECT_EQ(r.perimeter(), 8589934588LL);
}

TEST(AreaTests, ZeroArea) {
    Rectangle r(0, 0);
    EXPECT_EQ(r.area(), 0); // Hard code
}

TEST(AreaTests, NegativeArea) {
    Rectangle r(-1, -2);
    EXPECT_EQ(r.area(), 0);
}

TEST(AreaTests, LargeArea) {
    Rectangle r(std::numeric_limits<int>::max(), std::numeric_limits<int>::max());  // 2147483647
    EXPECT_EQ(r.area(), 4611686014132420609LL);
}