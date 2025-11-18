#include "gtest/gtest.h"
extern "C" {
#include "array_utils.h"
}

TEST(array_utils, sum_simple) {
    int nums[] = {1, 2, 3, 4};
    EXPECT_EQ(array_sum(nums, 4), 10);
}

TEST(array_utils, sum_empty) {
    int nums[] = {};
    EXPECT_EQ(array_sum(nums, 0), 0);
}

TEST(array_utils, max_index_basic) {
    int nums[] = {1, 5, 3, 4};
    EXPECT_EQ(array_max_index(nums, 4), 1);  // 5 is biggest at index 1
}

TEST(array_utils, max_index_ties_first) {
    int nums[] = {7, 2, 7, 1};
    EXPECT_EQ(array_max_index(nums, 4), 0);  // first 7 wins
}

TEST(array_utils, max_index_empty) {
    int nums[] = {};
    EXPECT_EQ(array_max_index(nums, 0), -1);
}

TEST(array_utils, clamp_nonnegative_mixed) {
    int nums[] = {-3, 0, 5, -1};
    array_clamp_nonnegative(nums, 4);

    EXPECT_EQ(nums[0], 0);
    EXPECT_EQ(nums[1], 0);
    EXPECT_EQ(nums[2], 5);
    EXPECT_EQ(nums[3], 0);
}

TEST(array_utils, clamp_nonnegative_all_positive) {
    int nums[] = {1, 2, 3};
    array_clamp_nonnegative(nums, 3);

    EXPECT_EQ(nums[0], 1);
    EXPECT_EQ(nums[1], 2);
    EXPECT_EQ(nums[2], 3);
}
