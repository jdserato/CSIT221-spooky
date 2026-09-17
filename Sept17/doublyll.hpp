#include "list.hpp"
#include "node.hpp"
#include <iostream>
using namespace std;

class DoublyLL : public List {
	node head;
	node tail;
	int size;
	
	public:
	DoublyLL() {
		head.next = &tail;
		tail.prev = &head;
		size = 0;
	}

	private:
	node* addBetween(int num, node* pred, node* succ) {
		node* n = new node(num, pred, succ);
		n->elem = num;
		n->prev = pred;
		n->next = succ;
		succ->prev = n;
		pred->next = n;
		size++;
		return n;
	}
		
	void addFirst(int num) {
		
	}
	
	void add(int num) {
		addBetween(num, tail.prev, &tail);
	}	
	
	void addAt(int num, int pos) {
		
	}
	
	int removeAt(int pos) {
		
	}
	
	int removeLast() {
		
	}
	int removeFirst() {
	
	}
	
	int get(int pos) {
	
	}
	
	void print() {
		cout << "FROM HEAD: ";
		node* curr = &head;
		while (curr) {
			cout << curr->elem << "->";
			curr = curr->next;
		}
		cout << "NULL" << endl;
		
		cout << "FROM TAIL: NULL";
		curr = &tail;
		while (curr) {
			cout << "<-" << curr->elem;
			curr = curr->prev;
		}
		cout << endl;
	}
};
