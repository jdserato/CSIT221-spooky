#include "list.hpp"
#include <iostream>
using namespace std;

class ArrayList : public List {
	int _size;
	int capacity;
	int* array;;
	
	public:
	ArrayList() { // constructor
		_size = 0;
		capacity = 5;
		array = (int*) malloc(sizeof(int) * capacity);
	}
	
	~ArrayList() { // destructor
		cout << "Destructor called" << endl;
		delete array;
	}
	
	void printArrayAddress() {
		cout << "Address of array: " << array << endl;
	}
	
	void add(int n) {
		if (_size == capacity) {
//			cout << "Reallocating to " << _size*1.5 << endl;
			array = (int*) realloc(array, sizeof(int) * (_size*1.5));
//			cout << "Address is " << array << endl;
			capacity*=1.5;
		}
		array[_size++] = n;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	void print() {
		cout << "Size: " << _size << endl;
		for (int i = 0; i < capacity; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
