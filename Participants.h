#pragma once
#include <vector>
// #include"BitonicSort_Sharnin.h"
// #include"MergeSort_Shuranskiy.h"
// #include"HeapSort_Gabrielian.h"
// #include"QuickSort_Pashayan.h"

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> sort_by_std(std::vector<int>);
// std::vector<double> sort_for_integers_only(std::vector<double> data);

// //--------------------Team Polyakov---------------------------
// std::vector<int> shellsort_by_kamenshchikov(std::vector<int> to_sort);
// std::vector<double> shellsort_by_kamenshchikov(std::vector<double> to_sort);
// //---------------------------------------------------------------

