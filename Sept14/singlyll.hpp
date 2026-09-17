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

	private:
	void add(int num) {
		node* n = new node(num);
		if (size == 0) {
			head = n;
		} else {
			tail->next = n;
		}
		tail = n;
		size++;
	}	
	
	void print() {
		node* curr = head;
		while (curr) {
			cout << curr->elem << "->";
			curr = curr->next;
		}
		cout << "NULL" << endl;
	}
};
