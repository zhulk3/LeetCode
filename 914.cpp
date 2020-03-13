#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct node {
	int num = 0;
	int cnt = 0;
};

class Solution {
public:
	bool hasGroupsSizeX(vector<int>& deck) {
		
		sort(deck.begin(), deck.end());
		vector<node>store;
		int len = deck.size();
		int n = deck[0];
		int c = 1;
		bool t = true;
		int over = 0;
		int ans = 1;
		int large = 1;
		node temp;
		for (int i = 1; i < len; i++) {
			if (deck[i] == deck[i - 1])
				c++;
			else {
				temp.num = n;
				temp.cnt = c;
				store.push_back(temp);
				n = deck[i];
				c = 1;
			}
		}
		temp.num = n;
		temp.cnt = c;
		store.push_back(temp);
		large = store[0].cnt;
		for (int i = 0; i < store.size(); i++)
			if (store[i].cnt > large)
				large = store[i].cnt;
		cout << large << endl;
		for (int i = 2; i<=large; i++) {
			for (int j = 0; j < store.size(); j++) {
				if(store[j].cnt%i!=0)
					break;
				else {
					over++;
				}
			}
			if (over == store.size()) {
				if (i > ans)
					ans = i;
				
			}
			over = 0;
		}
		if (ans > 1)
			return true;
		return false;
	}
};

int main() {
	Solution a;
	vector<int>test{ 1,2,3,4,4,3,2,1 };
	cout << a.hasGroupsSizeX(test);
	return 0;
}