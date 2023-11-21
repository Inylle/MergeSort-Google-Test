#include "pch.h"
#include "MergeSort.h"

//vector<int> array = { 1, 5, 15, 97, 20, 6, 4, 16, 54 };
MergeSort m1;
vector<int> arr_check = { 4, 6, 8, 11, 12, 17, 22 };
vector<int> arr_check2 = { -22, -17, -12, -11, -8, -6, -4 };
vector<int> arr_check3 = { -12, -11, -8, -4, 6, 17, 22 };
vector<int> arr_check4 = { 314 };
vector<int> arr_check5 = { 4, 4, 11, 11, 13, 13, 17, 17 };
vector<int> arr_check6 = { -17, -17, -13, -13, -11, -11, -4, -4 };
vector<int> arr_check7 = { -13, -13, -11, -11, 4, 4, 17, 17, };
vector<int> arr_check8 = { 3, 14 };

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

TEST(Merge_sort_test, TestNegativeNumbersArray) {
    arr = { -6, -11, -17, -4, -8, -12, -22 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check2);
}

TEST(Merge_sort_test, TestPositiveAndNegativeNumbersArray) {
    arr = { 6, -11, 17, -4, -8, -12, 22 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check3);
}

TEST(Merge_sort_test, TestEmptyArray) {
    arr = {};
    ASSERT_NO_THROW(m1.sort(arr));
}

TEST(Merge_sort_test, TestSingleElementArray) {
    arr = { 314 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check4);
}

TEST(Merge_sort_test, TestDuplicateArray) {
    arr = { 17, 4, 11, 13, 13, 11, 4, 17 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check5);
}

TEST(Merge_sort_test, TestNegativeDuplicateArray) {
    arr = { -17, -4, -11, -13, -13, -11, -4, -17 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check6);
}

TEST(Merge_sort_test, TestNegativePositiveDuplicateArray) {
    arr = { 17, 4, -11, -13, -13, -11, 4, 17 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check7);
}

TEST(Merge_sort_test, TestDualElementArray) {
    arr = { 3, 14 };
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check8);
}