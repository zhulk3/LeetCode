#include <vector>
#include <iostream>
using namespace std;

#include <vector>
#include <iostream>
using namespace std;

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		int len = flowerbed.size();
		if (len == 1)
			if (flowerbed[0] == 0)
				if (n <= 0)
					return true;
				else
					return false;
			else
				if (n > 0)
					return false;
				else
					return true;
		if (len == 2 && (flowerbed[0] != flowerbed[1]))
			if (n >= 1)
				return false;
			else
				return true;
		if (flowerbed[0] == 0 && flowerbed[1] == 0) {
			flowerbed[0] = 1;
			n -= 1;
		}
		for (int i = 1; i < len - 1; i++) {
			if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
				cout << i;
				flowerbed[i] = 1;
				n--;
			}
		}
		if (flowerbed[len - 1] == 0 && flowerbed[len - 2] == 0) {
			flowerbed[len - 1] = 0;
			n--;
		}
		if (n <= 0)
			return true;
		return false;
	}
};






int main() {
	Solution a;
	vector<int>test{ 1,0,0,0,1 };
	cout << a.canPlaceFlowers(test, 1) << endl;
	for (int i = 0; i < test.size(); i++)
		cout << test[i] << ' ';
	return 0;

}
