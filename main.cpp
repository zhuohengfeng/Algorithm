#include <iostream>

#include "selectSort/Student.h"
#include "utils/SortTestHelper.h"

using namespace std;

/**
 * 选择排序 O(n^2)
 * 使用泛型，可以接收任意类型，包括自定义类型(需要重载操作符'>')
 */
template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        // 搜索区间中最小的元素
        for (int j = i+1; j < n; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        // 通过标准函数swap交互位置
        swap(arr[i], arr[minIndex]);

        SortTestHelper::printArray(arr, n);
    }
}



int main() {
    int n = 100;
    int *a = SortTestHelper::generateRandomArray(n, 1, 100);
    selectionSort(a, n);

//    Student students[4] = {{"D", 90},{"A", 95},{"B", 83},{"C", 100}};
//    selectionSort(students, sizeof(students)/ sizeof(students[0]));

    delete[] a;
    return 0;
}