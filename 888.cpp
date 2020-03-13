#include <vector>

using namespace std;

class Solution {
public:
	vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
		int len1 = A.size();
		int len2 = B.size();
		vector<int>ans;
		int ma = 0;
		int mb = 0;
		int mount = 0;
		int tob = 0;
		int toa = 0;
		int harf = 0;
		int ta = 0;
		int tb = 0;
		for (int i = 0; i < len1; i++)
			ma += A[i];
		for (int i = 0; i < len2; i++)
			mb += B[i];
		mount = ma + mb;
		harf = mount / 2;
		for (int i = 0; i < len1; i++) {
			ta = ma - A[i];
			for (int j = 0; j < len2; j++) {
				if (ta + B[j] == harf) {
					toa = B[j];
					tob = A[i];
					ans.push_back(tob);
					ans.push_back(toa);
					
				}
				if (ans.size() > 0)
					break;
			}
			if (ans.size() > 0)
				break;
		}
		return ans;
	}
};