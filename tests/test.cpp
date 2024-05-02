#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorTests, defaultConstructor) {
    Rectangle rect;
    EXPECT_EQ(rect.area(), 0);
    EXPECT_EQ(rect.perimeter(), 0);
}

TEST(ConstructorTests, parametrizedConstructor) {
    Rectangle rect(5, 10);
    EXPECT_EQ(rect.area(), 50);
    EXPECT_EQ(rect.perimeter(), 30);
}

TEST(AreaTests, zeroDimensions) {
    Rectangle rect;
    EXPECT_EQ(rect.area(), 0);
}

TEST(AreaTests, nonZeroDimensions) {
    Rectangle rect(3, 4);
    EXPECT_EQ(rect.area(), 12);
}

TEST(PerimeterTests, zeroDimensions) {
    Rectangle rect;
    EXPECT_EQ(rect.perimeter(), 0);
}

TEST(PerimeterTests, nonZeroDimensions) {
    Rectangle rect(3, 4);
    EXPECT_EQ(rect.perimeter(), 14);
}