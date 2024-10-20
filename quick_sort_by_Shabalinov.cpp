#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int Partition(vector<int>& values, int l, int r) {
    int x = values[r];
    int less = l;

    for (int i = l; i < r; ++i) {
        if (values[i] <= x) {
            swap(values[i], values[less]);
            ++less;
        }
    }
    swap(values[less], values[r]);
    return less;
}

void QuickSortImpl(vector<int>& values, int l, int r) {
    if (l < r) {
        int q = Partition(values, l, r);
        QuickSortImpl(values, l, q - 1);
        QuickSortImpl(values, q + 1, r);
    }
}

vector<int> quick_sort_by_Shabalinov(vector<int> values) {
    if (!values.empty()) {
        QuickSortImpl(values, 0, values.size() - 1);
    }
    return values;
}
int Partition(vector<double>& values, int l, int r) {
    double x = values[r];
    int less = l;

    for (int i = l; i < r; ++i) {
        if (values[i] <= x) {
            swap(values[i], values[less]);
            ++less;
        }
    }
    swap(values[less], values[r]);
    return less;
}

void QuickSortImpl(vector<double>& values, int l, int r) {
    if (l < r) {
        int q = Partition(values, l, r);
        QuickSortImpl(values, l, q - 1);
        QuickSortImpl(values, q + 1, r);
    }
}

vector<double> quick_sort_by_Shabalinov(vector<double> values) {
    if (!values.empty()) {
        QuickSortImpl(values, 0, values.size() - 1);
    }
    //for (auto i : values)
    //{
    //    cout << i << endl;
    //}
    return values;
}
