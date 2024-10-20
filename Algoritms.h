#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> sort_by_std(std::vector<int>);

//--------------------Team Gazdik---------------------------
std::vector<int> heapsort_by_polyakov(std::vector<int> to_sort);
std::vector<int> shellsort_by_kamenshchikov(std::vector<int> to_sort);
std::vector<int> merge_sort_by_iliushik(std::vector<int> data);
std::vector<int> quick_sort_by_Shabalinov(std::vector<int> data);
//---------------------------------------------------------------

