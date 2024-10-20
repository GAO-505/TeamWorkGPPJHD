#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_by_std(vector<int> data)
{
	sort(data.begin(), data.end());
	return data;
}
