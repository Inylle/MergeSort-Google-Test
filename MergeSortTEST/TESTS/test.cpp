#include "pch.h"
#include "MergeSort.h"

//vector<int> array = { 1, 5, 15, 97, 20, 6, 4, 16, 54 };
MergeSort m1;
vector<int> arr_check = { 4, 6, 8, 11, 12, 17, 22 };

vector<int> arr = {};

TEST(Merge_sort_test, TestAlreadySortedArray) {
    arr = { 4, 6, 8, 11, 12, 17, 22 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check);
}

TEST(Merge_sort_test, TestReverseSortedArray) {
    arr = { 22, 17, 12, 11, 8, 6, 4 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check);
}

TEST(Merge_sort_test, TestRandomNumberInsertedArray) {
    arr = { 6, 11, 17, 4, 8, 12, 22 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check);
}