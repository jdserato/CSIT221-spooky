#include <iostream>
#include "list.hpp"
using namespace std;

class ArrayList : public List {
	int array[5];
	int _size = 0;
	
	public:	
	void add(int n) {
		cout << "Adding " << n << endl;
		array[_size++] = n;
	}
	
	int size() {
		return _size;
	}
	
	void print() {
		for (int i = 0; i < _size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	void addFirst(int n) {
		for (int i = _size-1; i >= 0; i--) {
			array[i+1] = array[i];
		}
		array[0] = n;
		_size++;
	}
};
