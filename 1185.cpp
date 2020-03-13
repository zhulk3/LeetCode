#include <string>
#include <cmath>
#include <iostream>

using namespace std;

class Solution {
public:
	string dayOfTheWeek(int day, int month, int year) {
		int c = year / 100 ;
		int g = year % 10;
	
		int h = year / 10 % 10;
		int y = h * 10 + g;
	
		string ans;
		int w = (y + y / 4 - y / 100 + y / 400 + [m - 1] + d) % 7;
		cout << w;
		w = w % 7;
		switch (w)
		{
		case 0:
			ans = "Sunday";
			break;
		case 1:
			ans= "Monday";
			break;
		case 2:
			ans ="Tuesday";
			break;
		case 3:
			ans ="Wednesday";
			break;
		case 4:
			ans ="Thursday";
			break;
		case 5:
			ans ="Friday";
			break;
		case 6:
			ans= "Saturday";
			break;
		
		default:
			break;
		}
		return ans;
	}
};

int main() {
	Solution a;
	int y = 2019;
	int m =8 ;
	int d = 31;
	cout << a.dayOfTheWeek(d, m, y);
	return 0;
}