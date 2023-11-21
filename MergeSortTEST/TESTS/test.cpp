#include "pch.h"
#include "MergeSort.h"

//vector<int> array = { 1, 5, 15, 97, 20, 6, 4, 16, 54 };
MergeSort m1;
vector<int> arr_check = { 2, 5, 7, 9, 13, 18, 20 };

vector<int> arr = {};

TEST(Merge_sort_test, TestAlreadySortedArr) {
    arr = { 2, 5, 7, 9, 13, 18, 20 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check);
}
