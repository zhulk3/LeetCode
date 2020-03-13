#include <string>
#include <vector>
#include<iostream>

using namespace std;

class Solution {
public:
	bool judgeCircle(string moves) {
		vector<char>up;
		vector<char>down;
		vector<char>left;
		vector<char>right;
		char temp;
		int len = moves.length();
		int sz_up = 0;
		int sz_down = 0;
		int sz_left = 0;
		int sz_right = 0;
		for (int i = 0; i < len; i++) {
			temp = moves[i];
			if (temp == 'U')
				up.push_back(temp);
			else if (temp == 'D')
				down.push_back(temp);
			else if (temp == 'L')
				left.push_back(temp);
			else
				right.push_back(temp);
		}

		sz_up = up.size();
		sz_down = down.size();
		sz_left = left.size();
		sz_right = right.size();
		//cout << sz_up << ' ' << sz_down << ' ' << sz_left << ' ' << sz_right;
		if (sz_up == sz_down && sz_left == sz_right)
			return true;
		return false;
	}
};

