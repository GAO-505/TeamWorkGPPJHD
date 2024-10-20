#pragma once
#include <vector>
#include <string>
#include <climits>

//datasets by TM
std::vector<int> GenerateData(int size, int max_value = INT_MAX);


//datasets by <comandname>
//place your datasets here 
//or include your "datasets_by_<comandname>.h" above

//datasets by Shekhovtsova_team
std::vector<int> Data1_by_Shekhovtsova_team();
std::vector<int> Data2_by_Shekhovtova_team(int size, int max_val = INT_MAX);
std::vector<int> Data3_by_Shekhovtsova_team(int size, int max_val = 10);
std::vector<int> Data4_by_Shekhovtsova_team(int size);