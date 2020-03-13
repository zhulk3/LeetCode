#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	bool canThreePartsEqualSum(vector<int>& A) {
		int s1 = 1;
		int s2 = 2;
		int len = A.size();
		int sum = 0;
		int part = 0;
		int cnt = 0;
		int p = 0;
		for (int i = 0; i < len; i++)
			sum += A[i];
		if (sum % 3 == 0) {
			part = sum / 3;
			for (int i = 0; i < len; i++) {
				p += A[i];
				if (p == part) {
					cnt += 1;
					p = 0;
					cout << i << ' ';
				}
				
			}
			
		}
		else
			return false;
		if (cnt == 3)
			return true;
		return false;
	}
};

int main() {
	Solution a;
	vector<int>test{ 3,3,6,5,-2,2,5,1,-9,4 };
	cout << a.canThreePartsEqualSum(test);
	return 0;
}