#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void heapify(vector<T>& to_sort, int length, int current_root) {

    int left = current_root * 2 + 1;
    int right = current_root * 2 + 2;
    int max;

    if (left<length && to_sort[left]>to_sort[current_root]) {
        max = left;
    }
    else {
        max = current_root;
    }

    if (right<length && to_sort[right]>to_sort[max]) {
        max = right;
    }

    if (max != current_root) {
        swap(to_sort[current_root], to_sort[max]);
        heapify(to_sort, length, max);
    }



}

template <typename T>
void build_max_heap(vector<T>& to_sort, int length) {

    for (int i = (length - 1) / 2; i >= 0; i--) {
        heapify(to_sort, length, i);
    }

}

template <typename T>
void heap_sort(vector<T>& to_sort) {
    int length = to_sort.size();
    build_max_heap(to_sort, length);
    for (int i = length - 1; i >= 0; i--) {
        swap(to_sort[0], to_sort[i]);
        length--;
        heapify(to_sort, length, 0);

    }
}

vector<int> heapsort_by_Name(vector<int> to_sort) {
    heap_sort(to_sort);
    return to_sort;
}
