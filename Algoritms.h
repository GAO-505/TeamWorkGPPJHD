#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> sort_by_std(std::vector<int>);

//--------------------Team Gazdik---------------------------
std::vector<int> merge_sort_by_Petrukhina(std::vector<int> data);
std::vector<int> quick_sort_by_Devyatkina(std::vector<int> data);
std::vector<int> tree_sort_by_Khaysarova(std::vector<int> data);
std::vector<int> bitonic_sort_by_Pudovnin(std::vector<int> data);
std::vector<int> counting_Sort_By_Li(std::vector<int> data);
//---------------------------------------------------------------

