//
// Created by hengfeng zhuo on 2019-03-29.
//

#ifndef ALGORITHM_SORTTESTHELPER_H
#define ALGORITHM_SORTTESTHELPER_H

#include <iostream>

using namespace std;

namespace SortTestHelper {

    int* generateRandomArray(int n, int rangeL, int rangeR) {
        assert(rangeL <= rangeR);

        int *arr = new int[n];
        // 随机种子, 如果这时候我们希望每次编译后输出的结果不相同，我们就需要利用到srand()函数了
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            // 如果想产生在一定范围内的数，可以用取余的方法获得。
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }

        return arr;
    }

    template <typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }


}

#endif //ALGORITHM_SORTTESTHELPER_H
