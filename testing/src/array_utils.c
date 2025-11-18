#include "array_utils.h"
int array_sum(const int arr[], size_t length) {
    int total = 0;
    for (size_t i = 0; i < length; ++i) {
        total += arr[i];
    }
    return total;
}

int array_max_index(const int arr[], size_t length) {
    if (length == 0) {
        return -1;  // no elements
    }
    size_t max_index = 0;
    int max_value = arr[0];

    for (size_t i = 1; i < length; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i;
        }
    }
    return (int)max_index;
}

void array_clamp_nonnegative(int arr[], size_t length) {
    for (size_t i = 0; i < length; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}
