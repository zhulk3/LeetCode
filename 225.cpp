#include <deque>
#include <iostream>
using namespace std;

class MyStack {
public:
	/** Initialize your data structure here. */
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		store.push_back(x);

	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		int t = store.back();
		store.pop_back();
		return t;

	}

	/** Get the top element. */
	int top() {
		return store.back();

	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return store.empty();

	}
private:
	deque<int>store;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */