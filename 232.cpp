#include<stack>
#include <iostream>

using namespace std;

class MyQueue {
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		store.push(x);

	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		int t = 0;
		int ans = 0;
		while (!store.empty()) {
			t = store.top();
			temp.push(t);
			store.pop();
		}
		ans = temp.top();
		temp.pop();
		while (!temp.empty()) {
			t = temp.top();
			store.push(t);
			temp.pop();
		}
		return ans;

	}

	/** Get the front element. */
	int peek() {
		int t = 0;
		int ans = 0;
		while (!store.empty()) {
			t = store.top();
			temp.push(t);
			store.pop();
		}
		ans = temp.top();
		while (!temp.empty()) {
			t = temp.top();
			store.push(t);
			temp.pop();
		}
		return ans;

	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return store.empty();

	}

private:
	stack<int>store;
	stack<int>temp;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */