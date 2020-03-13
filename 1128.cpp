#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	int numEquivDominoPairs(vector<vector<int>>& dominoes) {
		int row = dominoes.size();
		vector<int>temp;
		vector<int>part;
		int ans = 0;
		int index1 = 0;
		int index2 = 0;
		
		vector< vector<int> >::iterator second;
		vector<vector<int> >::iterator first;
		for (first = dominoes.begin(); first < dominoes.end()-1; first++,index1++) {
			temp = *first;
			
			for (second = first+1; second != dominoes.end(); second++, index2++) {
				part = *second;
				if ((temp[0] == part[0] && temp[1] == part[1])||(temp[0] == part[1] && temp[1] == part[0])) {
					ans++;
					//cout << temp[0] << ' ' << part[0] << ' ' << temp[1] << ' ' << part[1] << endl;
					//cout << index1 << ' ' << index2;
				}
				//cout << endl;
			}
		}
		return ans;
	}
};
int main(){
	vector<vector<int> > test{ {1,2},{1,2},{1,1},{1,2},{2,2} };
	Solution a;
	cout << a.numEquivDominoPairs(test);
	return 0;
}