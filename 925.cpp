#include <string>
#include <map>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool isLongPressedName(string name, string typed) {
		int len1 = name.length();
		int len2 = typed.length();
		int index1 = 0;
		int index2 = 0;
		char c1 = name[0];
		char c2 = typed[0];
		vector<char>store1;
		vector<char>store2;
		while (true) {
			store1.push_back(name[index1++]);
			while (index1 < len1) {
				
			}
		}
	}
};

int main() {
	Solution a;
	string name = "kikcxmvzi";
	string typed = "kiikcxxmmvvzz";
	cout << a.isLongPressedName(name, typed);
	return 0;
}