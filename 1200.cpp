#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct pairs
{
	int before;
	int after;
	int diff;
};

class Solution {
public:
	vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
		int len = arr.size();
		sort(arr.begin(), arr.end());
		pairs temp;
		vector<pairs>store;
		vector<int>part;
		vector<vector<int> >answer;
		for (int i = 0; i < len - 1; i++) {
			temp.before = arr[i];
			temp.after = arr[i + 1];
			temp.diff = arr[i + 1] - arr[i];
			store.push_back(temp);
		}
		for (int i = 0; i < len - 1; i++) {
			cout << store[i].before << ' ' << store[i].after << endl;
		}
		cout << endl << endl;
		len = store.size();
		for (int i = 0; i < len-1 ; i++) {
			for (int j = 0; j < len-1 ; j++) {
				if (store[j].diff >store[j + 1].diff) {
					temp.before = store[j].before;
					temp.after = store[j].after;
					temp.diff = store[j].diff;
					store[j].before = store[j + 1].before;
					store[j].after = store[j + 1].after;
					store[j].diff = store[j + 1].diff;
					store[j + 1].before = temp.before;
					store[j + 1].after = temp.after;
					store[j + 1].diff = temp.diff;
				}
			}
		}
		for (int i = 0; i < len - 1; i++) {
			cout << store[i].before << ' ' << store[i].after << endl;
		}
		cout << endl << endl;
		part.push_back(store[0].before);
		part.push_back(store[0].after);
		answer.push_back(part);
		part.clear();
		for (int i = 1; i < len ; i++) {
			if (store[i].diff == store[i - 1].diff) {
				part.push_back(store[i].before);
				part.push_back(store[i].after);
				answer.push_back(part);
				part.clear();
			}
			else
				break;

		}
		return answer;
	}
};

int main() {
	Solution a;
	vector<int>temp{ 4,2,1,3 };
	vector<vector<int> >ans = a.minimumAbsDifference(temp);
	int len = ans.size();
	for (int i = 0; i < len; i++) {
		cout << ans[i][0] << ' ' << ans[i][1] << endl;
	}
	return 0;
}

