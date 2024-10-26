#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void countingSort(vector<int>& arr) {
    if (arr.empty()) return;

    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    int range = maxVal - minVal + 1;

    vector<int> num(range, 0);
    vector<int> mark(range, 0);

    // 填充计数数组
    for (int i = 0; i < arr.size(); i++) {
        num[arr[i] - minVal]++;
    }

    // 填充标记数组
    mark[0] = num[0];
    for (int i = 1; i < range; i++) {
        mark[i] = mark[i - 1] + num[i];
    }

    // 创建结果数组
    vector<int> result(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--) {
        int sortIndex = mark[arr[i] - minVal];
        result[sortIndex - 1] = arr[i];
        mark[arr[i] - minVal]--;
    }

    // 将结果复制回原数组
    arr = result;
}
