#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	int numOfSubarrays(vector<int>& arr, int k, int threshold) {
		int ans = 0;
		int len = arr.size();
		int sum = 0;
		if (len < k)
			return ans;

		for (int i = 0; i < k; i++)
			sum += arr[i];
		if (sum >= threshold * k)
			ans++;
		for (int i = k; i < len-1; i++) {
			sum -= arr[i - k];
			sum += arr[i + 1];
			if (sum >= threshold * k)
				ans++;
			
		}
		return ans;
	}
};

int main() {
	vector<int>test{ 2,2,2,2,5,5,5,8 };
	Solution a;
	cout << a.numOfSubarrays(test,3,4);
	return 0;
}