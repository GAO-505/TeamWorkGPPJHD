#include <vector>
using namespace std;

vector<int> GenerateData(int size, int max_value = INT_MAX)
{
	vector<int> data(size);
	for (int& d : data)
		d = rand() % max_value;
	return data;
}

