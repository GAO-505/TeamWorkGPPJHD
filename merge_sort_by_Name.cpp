#include <vector>

using namespace std;
template <typename T>
void merge_sort_recursion(vector<T>& data, int right, vector<T>& temp, int left) {

    if (left < right)
    {
        int middle = (left + right) / 2;

        merge_sort_recursion(data, middle, temp, left);
        merge_sort_recursion(data, right, temp, middle + 1);

        int k = left;
        for (int i = left, j = middle + 1; i <= middle || j <= right;)
        {
            if (j > right || (i <= middle && data[i] < data[j]))
            {
                temp[k] = data[i];
                i++;
            }
            else
            {
                temp[k] = data[j];
                j++;
            }
            k++;
        }
        for (int i = left; i <= right; i++)
        {
            data[i] = temp[i];
        }

    }


}

vector<int> merge_sort_by_Name(vector<int> data) {
    vector<int> temp(data.size());
    merge_sort_recursion(data, data.size() - 1, temp, 0);
    return data;
}

