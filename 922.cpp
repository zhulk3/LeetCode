#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& A) {
		vector<int>temp1;
		vector<int>temp2;
		vector<int>ans;
		int i = 0;
		int j = 0;
		int index = 0;
		int len = A.size();
		for (int i = 0; i < len; i++) {
			if (A[i] % 2 == 0)
				temp1.push_back(A[i]);
			else
				temp2.push_back(A[i]);
		}
		
		sort(temp1.begin(), temp1.end());
		sort(temp2.begin(), temp2.end());
		i = temp1.size();
		j = temp2.size();
		/*for (int t = 0; t < i; t++)
			cout << temp1[t] << " ";
		cout << endl;
		for (int t = 0; t < j; t++)
			cout << temp2[t] << " ";
		cout << endl;
		*/
		int c1 = 0;
		int c2 = 0;
		for (index = 0; index < len; index++) {
			if (index % 2 == 0 && c1 < i) {
				ans.push_back(temp1[c1]);
				c1++;
			}
			if (index % 2 != 0 && c2 < j) {
				ans.push_back(temp2[c2]);
				c2++;
			}
		}
		return ans;
	}
};
/*²âÊÔ´úÂë
int main() {
	Solution a;
	vector<int>temp1 = { 4,2,5,7 };
	vector<int>ans=a.sortArrayByParityII(temp1);
	int len = ans.size();
	for (int i = 0; i < len; i++)
		cout << ans[i] << " ";
	return 0;
}
*/