#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS //添加这个宏定义即不报错
#ifndef _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
static_assert(false, "<hash_map> is deprecated and will be REMOVED. "
	"Please use <unordered_map>. You can define "
	"_SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS "
	"to acknowledge that you have received this warning.");
#endif /* _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS */

#include <map>
#include <vector>
#include <string>
#include <iostream>



using namespace std;

class Solution {
public:
	vector<string> subdomainVisits(vector<string>& cpdomains) {

		vector<string>ans;
		 pair <string, int> Int_Pair;
		map<string, int>mp;
		map<string, int>::iterator ptr;
		
		int len = cpdomains.size();
		string cnt ;
		string temp;
		vector<string>store;
		string part;
		string all;
		int c = 0;
		bool space = true;
		int l = 0;
		int sp_index = 0;
		for (int i = 0; i < len; i++) {
			temp = cpdomains[i];
			l = temp.length();
			for (int j = 0; j < l; j++) {
				if (temp[j] != ' ')
					cnt.push_back(temp[j]);
				else {
					sp_index = j;
					c = atoi(cnt.c_str());
					cnt.clear();
					//cout << c << ' ';
					break;
				}										
			}
			for (int j = l - 1; j > sp_index; j--) {
				if (temp[j] != '.') {
					part.push_back(temp[j]);
					//cout << temp[j] <<' ';
				}
					
				else {
					//cout << j << endl;
					reverse(part.begin(), part.end());
					
					if (all.length() > 0) {
						all = part + "." + all;
						//cout <<all << endl;
					}
						
					else {
						all = part + all;
						//cout << all <<  endl;
					}
						
					//cout << all << endl;
					//cout<<part<<' '<<c << endl;
					if (mp.find(all) == mp.end()) {
						Int_Pair.first = all;
						Int_Pair.second = c;
						mp.insert(Int_Pair);
						//cout << all << ' ' << c << endl;
					}
						
					else {
						//cout << mp[part];
						mp[all] += c;
						//cout << "mp : "<<mp[all] << ' ' << c << endl;
					}
						
					part.clear();
				}
				
			}
			reverse(part.begin(), part.end());
			all = part + "." + all;
			//cout << all << endl;
			if (mp.find(all) == mp.end()) {
				Int_Pair.first = all;
				Int_Pair.second = c;
				mp.insert(Int_Pair);
			}
				
			else
				mp[all] += c;
			//cout << all << ' ' << c << endl;
			//cout << "mp : " << mp[all] << ' ' << c << endl;
			part.clear();
			all.clear();
		}
		for (ptr = mp.begin(); ptr != mp.end(); ptr++) {
			part = ptr->first;
			c = ptr->second;
			all = to_string(c);
			//cout << part << ' ' << c << endl;
			temp = all + " " + part;
			ans.push_back(temp);
		}
		return ans;
	}
};

int main() {
	Solution a;
	vector<string>test{ "900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org" };
	vector<string>ans = a.subdomainVisits(test);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
	return 0;
}