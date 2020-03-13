#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
		int l = 0;
		int r = 0;
		int m = 0;
		vector<vector<int> >ans;
		vector<int>middle;
		for (int x = 1; x < 1000; x++) {
			l = x;
			r = 1000;
			
			while (l +1< r) {
				m = (l + r) / 2;
				if (customfunction.f(x, m) > z)
					r = m;
				else
					l = m;

			}
			if (customfunction.f(x, l) == z) {
				middle.push_back(x);
				middle.push_back(l);
				ans.push_back(middle);
				middle.clear();
			}
			else if (customfunction.f(x, r) == z) {
				middle.push_back(x);
				middle.push_back(l);
				ans.push_back(middle);
				middle.clear();
			}

		}
		return ans;
	}
};