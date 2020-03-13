#include<vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> replaceElements(vector<int>& arr) {
		int len = arr.size();
		vector<int>ans;
		int tem = 0;
		int m = 0;
		for (int i = 0; i < len-1; i++) {
			m = arr[i+1];
			for (int j = i + 1; j < len; j++) {
				if (m < arr[j])
					m = arr[j];
			}
			ans.push_back(m);
		}
		ans.push_back(-1);
		return ans;
	}
};

int main() {
	vector<int>test = { 17,18,5,4,6,1 };
	Solution a;
	vector<int>ans = a.replaceElements(test);
	int len = ans.size();
	for (int i = 0; i < len; i++)
		cout << ans[i] << ' ';
	return 0;
}