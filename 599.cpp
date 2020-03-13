
#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;



class Solution {
public:
	vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
		int len1 = list1.size();
		int len2 = list2.size();
		vector<string>t;
		map<string, int>mp;
		pair<string, int>middle;
		string temp;
		string ans;
		int index = 0;
		for (int i = 0; i < len1; i++) {
			temp = list1[i];
			middle.first = temp;
			middle.second = i;
			mp.insert(middle);
		}
		ans = mp.begin()->first;
		index = 30;
		for (int j = 0; j < len2; j++) {
			temp = list2[j];
			if (mp.find(temp) != mp.end()) {
				//	cout << temp << endl;
				if (mp[temp] + j < index) {
					ans = temp;
					index = j + mp[temp];

				}

			}
		}
		
		for (int j = 0; j < len2; j++) {
			temp = list2[j];
			if (mp.find(temp) != mp.end() && mp[temp] + j == index)
				t.push_back(temp);
		}
		
		return t;
	}
};



int main() {
	Solution a;
	//vector<string> list1 { "Shogun", "Tapioca Express", "Burger King", "KFC" };
	//vector<string> list2 { "KFC", "Shogun", "Burger King" };
//	vector<string>list1{ "Shogun", "Tapioca Express", "Burger King", "KFC" };
	//vector<string>list2{ "Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun" };
	vector<string>list1{ "Shogun", "Tapioca Express", "Burger King", "KFC" };
	vector<string>list2{ "KFC", "Burger King", "Tapioca Express", "Shogun" };

	vector<string>ans = a.findRestaurant(list1,list2);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
	return 0;
}