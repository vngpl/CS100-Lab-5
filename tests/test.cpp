#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(ConstructorTests, ParametrizedConstructor) {
    Rectangle rect(5, 10);
    EXPECT_EQ(rect.area(), 50);
    EXPECT_EQ(rect.perimeter(), 30);
}

TEST(AreaTests, ZeroDimensions) {
    Rectangle rect(0, 0);
    EXPECT_EQ(rect.area(), 0);
}

TEST(AreaTests, NonZeroDimensions) {
    Rectangle rect(3, 4);
    EXPECT_EQ(rect.area(), 12);
}

TEST(PerimeterTests, ZeroDimensions) {
    Rectangle rect(0, 0);
    EXPECT_EQ(rect.perimeter(), 0);
}

TEST(PerimeterTests, NonZeroDimensions) {
    Rectangle rect(3, 4);
    EXPECT_EQ(rect.perimeter(), 14);
}

TEST(PerimeterTests, ZeroPerimeter) {
    Rectangle r(0, 0);
    EXPECT_EQ(r.perimeter(), 0);
}

TEST(AreaTests, ZeroArea) {
    Rectangle r(0, 0);
    EXPECT_EQ(r.area(), 0);
}

TEST(ConstructorTests, SmallDimensions) {
    Rectangle r(1, 2);
    EXPECT_EQ(r.area(), 2);
    EXPECT_EQ(r.perimeter(), 6);
}