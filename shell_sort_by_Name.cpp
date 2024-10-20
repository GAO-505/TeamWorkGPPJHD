#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

template <typename T>
int shellSort(vector<T>& mas)
{
    int n = mas.size();
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int a = mas[i];
            int j = i;
            while (j >= gap && mas[j - gap] > a) {
                mas[j] = mas[j - gap];
                j -= gap;
            }
            mas[j] = a;
        }
    }
    return 0;
}


vector<int> shellsort_by_Name(vector<int> to_sort) {
    shellSort(to_sort);
    return to_sort;
}
