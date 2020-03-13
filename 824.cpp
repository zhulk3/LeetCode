#include <string>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
	string toGoatLatin(string S) {
		string temp;
		
		vector<string>words;
		set<char> vowel { 'a','e','i','o','u','A','E','I','O','U' };
		string end = "ma";
		string ans;
		int len = S.length();
		int sz = 0;
		char head;
		for (int i = 0; i < len; i++) {
			if (S[i] != ' ')
				temp += S[i];
			else {
				words.push_back(temp);
				temp.clear();
			}	
		}
		words.push_back(temp);
		temp.clear();
		
		sz = words.size();
		//for (int i = 0; i < sz; i++)
		//	cout << words[i] << endl;
		for (int i = 0; i < sz; i++) {
			temp = words[i];
			head = temp[0];
		
			if (vowel.count(head) > 0) {
				int s = temp.length();
				
				temp += end;
				for (int j = 0; j < i+1; j++)
					temp += "a";
			//	cout << temp << ' ';
			}
			else {
				int s = temp.length();
				string child;
				for (int k = 1; k < s; k++) {
					child += temp[k];

				}
				child += head;
				child += end;
				for (int j = 0; j < i+1; j++)
					child += "a";
				//cout << child << ' ';
				temp = child;
			}
			
			ans += temp;
			if(i<sz-1)
				ans += ' ';
			temp.clear();
		}
	//	ans.pop_back();
		return ans;
	}
};

