#include <vector>

using namespace std;

void merge_sort_recursion(vector<int>& data, int right, vector<int>& temp, int left) {
    if (left < right) {
        int middle = (left + right) / 2;

        merge_sort_recursion(data, middle, temp, left);
        merge_sort_recursion(data, right, temp, middle + 1);

        int k = left;
        int i = left;
        int j = middle + 1;

        while (i <= middle || j <= right) {
            if (j > right || (i <= middle && data[i] < data[j])) {
                temp[k] = data[i];
                i++;
            }
            else {
                temp[k] = data[j];
                j++;
            }
            k++;
        }

        for (int i = left; i <= right; i++) {
            data[i] = temp[i];
        }
    }
}

vector<int> merge_sort_by_Petrukhina(vector<int> data) {
    vector<int> temp(data.size());
    if (data.size() > 0) {  
        merge_sort_recursion(data, data.size() - 1, temp, 0);
    }
    return data;
}