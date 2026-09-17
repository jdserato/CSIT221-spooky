#include "list.hpp"
#include "node.hpp"
#include <iostream>
using namespace std;

class SinglyLL : public List {
	node *head, *tail;
	int size;
	
	public:
	SinglyLL() {
		head = tail = nullptr;
		size = 0;
	}
	
	void add(int num) { //addLast
		node* n = new node;
		n->elem = num;
		n->next = nullptr;
		if (size == 0) {
			head = n;
			tail = n; 
		} else {
			tail->next = n;
			tail = n;
		}
		size++;
	}
	void print() {
		cout << "Size: " << size << endl;
		
		node* curr = head;
		while (curr) {
			cout << curr->elem << "->";
			curr = curr->next;
		}
		cout << "NULL" << endl;
	}
	
	int get(int pos) {
	}
};
