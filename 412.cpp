#include<iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string>ans;
		string m3 = "Fizz";
		string m5 = "Buzz";
		string m35 = "FizzBuzz";
		for (int i = 0; i < n; i++) {
			if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
				ans.push_back(m35);
			else if ((i + 1) % 3 == 0)
				ans.push_back(m3);
			else if ((i + 1) % 5 == 0)
				ans.push_back(m5);
			else
				ans.push_back(to_string(i+1));
		}
		return ans;
	}
};