#include "list.hpp"
#include <iostream>
using namespace std;

class ArrayList : public List {
	int _size = 0;
	int array[100000];
	void add(int n) {
		if (_size == 100000) {
			cout << "PUNO NA" << endl;
			return;
		}
		array[_size++] = n;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	void print() {
		cout << "Size: " << _size << endl;
		for (int i = 0; i < _size; i++) {
			cout << array[i] << " ";
		}
	}
};
