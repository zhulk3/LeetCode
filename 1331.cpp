#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

using namespace std;

struct node {
	int num;
	int rk;
};

class Solution {
public:
	vector<int> arrayRankTransform(vector<int>& arr) {
		int len1 = arr.size();
	
		vector<int>ans = arr;
		vector<int>temp = arr;
		vector<node>middle;
		node t;
		int m = 1;
		
		sort(temp.begin(), temp.end());
		t.num = temp[0];
		t.rk = m;
		middle.push_back(t);
		if (len1 == 0) {
			ans.push_back(0);
			return ans;

		}
			
		for (int i = 1; i < len1; i++) {
			if (temp[i] != temp[i - 1]){
				m++;
			}
			t.num = temp[i];
			t.rk = m;
			middle.push_back(t);	
		}
		

		for (int i = 0; i < len1; i++) {
			for (int j = 0; j < len1; j++) {
				if (arr[i] == middle[j].num)
					ans[i] = middle[j].rk;
			}
		}
		
		return ans;
	}
};

int main() {
	Solution a;
	vector<int>test{ 40,10,20,30 };
	vector<int>ans = a.arrayRankTransform(test);
	int len = ans.size();
	for (int i = 0; i < len; i++)
		cout << ans[i] << ' ';
	return 0;
}