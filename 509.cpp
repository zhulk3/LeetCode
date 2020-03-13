class Solution {
public:
	int fib(int N) {
		if (N == 0)
			return 0;
		if (N == 1)
			return 1;
		int f1 = 0;
		int f2 = 1;
		int fn = 0;
		for (int i = 2; i <= N; i++) {
			fn = f2 + f1;
			f1 = f2;
			f2 = fn;

		}
		return fn;
	}
};