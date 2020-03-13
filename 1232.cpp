#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	bool checkStraightLine(vector<vector<int>>& coordinates) {
		int len = coordinates.size();
		int before = 0;
		int after = 0;
		int than = 0;
		if (len == 2)
			return true;
		if (coordinates[0][0] == coordinates[1][0]) {
			for (int i = 1; i < len; i++)
				if (coordinates[i][0] != coordinates[i - 1][0])
					return false;
		}
		else {
			
			for (int i = 2; i < len; i++) {
				before = (coordinates[1][1] - coordinates[0][1])*(coordinates[i][0] - coordinates[1][0]);
				after = (coordinates[i][1] - coordinates[1][1])*(coordinates[1][0] - coordinates[0][0]);
				if (before != after)
					return false;
			}
		}
		return true;
	}
};