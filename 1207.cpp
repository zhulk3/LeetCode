#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
	bool uniqueOccurrences(vector<int>& arr) {
		sort(arr.begin(), arr.end());
		for (int i = 0; i < arr.size(); i++)
			cout << arr[i] << ' ';
		cout << endl;
		int len = arr.size();
		int i = 0;
		int cnt = 1;
		int kind = 1;
		set<int>num;
		while (i < len-1) {
			if (arr[i] == arr[i + 1])
				cnt++;
			else {
				num.insert(cnt);
				
				cnt = 1;
				kind++;
			}
			i++;
			cout << cnt << ' ';
		}
		
		
		if (kind == num.size())
			return true;
		return false;
	}
};

int main() {
	Solution a;
	vector<int>test{5,-2,-2,1,5,-2};
	cout << a.uniqueOccurrences(test);
	cout << "hello,world!\n";
	return 0;
}