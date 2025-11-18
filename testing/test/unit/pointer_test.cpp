#include <gtest/gtest.h>
extern "C" {
#include "pointer.h"
}

TEST(PointerTest, ValidPointers) {
    int x = 5;
    int y = 7;
    int result = 0;
    int success = addThroughPointers(&x, &y, &result);

    EXPECT_EQ(success, 1);
    EXPECT_EQ(result, 12);
}

TEST(PointerTest, NullPointerA) {
    int y = 7;
    int result = 0;
    int success = addThroughPointers(NULL, &y, &result);
    EXPECT_EQ(success, 0);
}

TEST(PointerTest, MutatingValues) {
    int x = 2;
    int y = 3;
    int result = 0;
    addThroughPointers(&x, &y, &result);
    EXPECT_EQ(result, 5);
    x = 10;
    addThroughPointers(&x, &y, &result);
    EXPECT_EQ(result, 13);
}
