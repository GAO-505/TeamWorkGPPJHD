#include <vector>
#include <algorithm>
using namespace std;

void compAndSwap(vector<int>& a, int i, int j) {
    if (a[i] > a[j]) {
        swap(a[i], a[j]);
    }
}

void bitonicMerge(vector<int>& a, int low, int cnt) {
    if (cnt > 1) {
        int k = cnt / 2;
        for (int i = low; i < low + k; i++) {
            compAndSwap(a, i, i + k);
        }
        bitonicMerge(a, low, k);
        bitonicMerge(a, low + k, k);
    }
}

void bitonicSort(vector<int>& a, int low, int cnt) {
    if (cnt > 1) {
        int k = cnt / 2;

        bitonicSort(a, low, k);
        bitonicSort(a, low + k, k);
        bitonicMerge(a, low, cnt);
    }
}

vector<int> bitonic_sort_by_Pudovnin(vector<int> data) {
    if (data.empty()) return data;
    bitonicSort(data, 0, data.size());
    return data;
}

