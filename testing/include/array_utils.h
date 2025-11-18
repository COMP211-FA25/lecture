#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <stddef.h>  // for size_t

// Returns the sum of the first `length` elements of `arr`.
int array_sum(const int arr[], size_t length);

// Returns the index of the largest element in `arr`.
// If length == 0, returns -1.
int array_max_index(const int arr[], size_t length);

// Replaces any negative values in `arr` with 0.
// Modifies the array in place.
void array_clamp_nonnegative(int arr[], size_t length);
#endif
