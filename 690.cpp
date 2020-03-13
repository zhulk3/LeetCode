#include <vector>
#include <iostream>

using namespace std;

class Employee {
public:
	// It's the unique ID of each node.
	// unique id of this employee
	int id;
	// the importance value of this employee
	int importance;
	// the id of direct subordinates
	vector<int> subordinates;
};


class Solution {
public:
	int getImportance(vector<Employee*> employees, int id) {
		vector<int>sub;
		vector<int > temp;
		int len = employees.size();
		int ans = 0;
		for (int i = 0; i < len; i++) {
			if (employees[i]->id == id) {
				temp = employees[i]->subordinates;
				ans = employees[i]->importance;
				for (int j = 0; j < temp.size(); j++)
					sub.push_back(temp[j]);
			}

		}
		for (int i = 0; i < sub.size(); i++) {
			for (int j = 0; j < len; j++) {
				if (sub[i] == employees[j]->id) {
					temp = employees[j]->subordinates;
					for (int k = 0; k < temp.size(); k++)
						sub.push_back(temp[k]);
					ans += employees[j]->importance;
					break;
				}

			}
		}
		return ans;
	}
};