#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {
		if (target < letters[0]|| target>letters[letters.size() - 1])
			return letters[0];
		int l = 0;
		int r = letters.size() - 1;
		int mid = 0;
		while (l <= r) {
			mid = (l + r) / 2;
			if (letters[mid] > target&&target > letters[mid - 1])
				return letters[mid];
			else if (target > letters[mid])
				l = mid + 1;
			else
				r = mid - 1;
		}
		return letters[mid];
	}
};

int mian() {
	Solution a;
	vector<char>test{'c', 'f', 'j'};
	char target ='a';
	cout << a.nextGreatestLetter(test, target);
	return 0;
}