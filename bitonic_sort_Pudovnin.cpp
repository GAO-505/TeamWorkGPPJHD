#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void compAndSwap(vector<int>& a, int i, int j, bool dir) {
    if (dir == (a[i] > a[j])) {
        swap(a[i], a[j]);
    }
}

void bitonicMerge(vector<int>& a, int low, int cnt, bool dir) {
    if (cnt > 1) {
        int k = cnt / 2;
        for (int i = low; i < low + k; i++) {
            compAndSwap(a, i, i + k, dir);
        }
        bitonicMerge(a, low, k, dir);
        bitonicMerge(a, low + k, k, dir);
    }
}

void bitonicSort(vector<int>& a, int low, int cnt, bool dir) {
    if (cnt > 1) {
        int k = cnt / 2;

        bitonicSort(a, low, k, true);
        bitonicSort(a, low + k, k, false);
        bitonicMerge(a, low, cnt, dir);
    }
}

int nearestPowerOfTwo(int n) {
    int power = 1;
    while (power < n) {
        power *= 2;
    }
    return power;
}

vector<int> bitonic_sort_by_Pudovnin(vector<int> data) {
    int n = data.size();
    int m = nearestPowerOfTwo(n);
    data.resize(m, INT_MAX);

    bitonicSort(data, 0, m, true);

    data.erase(remove(data.begin(), data.end(), INT_MAX), data.end());

    return data;
}
