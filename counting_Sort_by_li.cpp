#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

vector<int> countingSort(vector<int>& arr) {
    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    int range = maxVal - minVal + 1;

    vector<int> num(range, 0);
    vector<int> mark(range, 0);

    for (int i = 0; i < arr.size(); i++) {
        num[arr[i] - minVal]++;
    }

    mark[0] = num[0];
    for (int i = 1; i < range; i++) {
        mark[i] = mark[i - 1] + num[i];
    }

    vector<int> result(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--) {
        int sortIndex = mark[arr[i] - minVal];
        result[sortIndex - 1] = arr[i];
        mark[arr[i] - minVal]--;
    }

    return result;
}

vector<int> counting_Sort_By_Li(vector<int> data) {
    if (!data.empty()) {
        data = countingSort(data);
    }

    return data;
}