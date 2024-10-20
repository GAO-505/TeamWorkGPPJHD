#include <vector>
#include "DataGenerator.h"
using namespace std;

vector<int> GenerateData(int size)
{
	vector<int> data;
	for (int& d : data)
		d = rand();
	return data;
}