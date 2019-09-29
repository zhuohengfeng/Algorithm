# 算法学习记录 (C++)

## 一，排序

### 1. 选择排序
```c++
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
```
### 2. 插入排序


### 3. 归并排序


