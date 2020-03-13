class MyHashSet {
public:
	/** Initialize your data structure here. */
	MyHashSet() {
		ptr = new int[1000000];
		for (int i = 0; i < 1000000; i++)
			ptr[i] = -1;
	}

	void add(int key) {
		ptr[key] = 1;
	}

	void remove(int key) {
		ptr[key] = -1;
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		if (ptr[key] == 1)
			return true;
		return false;
	}
private:
	int* ptr;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */