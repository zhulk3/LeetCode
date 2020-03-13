#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
	string toLowerCase(string str) {
		int len = str.length();
		char temp;
		for (int i = 0; i < len; i++) {
			temp = str[i];
			if (temp >= 65 && temp <= 90)
				str[i] = str[i] + 32;
			
		}
		return str;
	}
};