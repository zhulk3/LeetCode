#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool checkIfExist(vector<int>& arr) {
		sort(arr.begin(), arr.end());
		int len = arr.size();
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				if (arr[i] * 2 == arr[j])
					return true;
			}
		}
		return false;
	}
};