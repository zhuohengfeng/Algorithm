#include <iostream>

#include "selectSort/Student.h"

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

        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}



int main() {
    int a[10] = {10, 8, 7, 1, 3 ,4, 5, 9, 6, 2};
    selectionSort(a, sizeof(a)/ sizeof(a[0]));

    Student students[4] = {{"D", 90},{"A", 95},{"B", 83},{"C", 100}};
    selectionSort(students, sizeof(students)/ sizeof(students[0]));

    return 0;
}