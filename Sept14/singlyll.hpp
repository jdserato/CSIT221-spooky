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
	void addFirst(int num) {
		node* n = new node(num);
		if (size == 0) {
			tail = n;
		} else {
			n->next = head;
		}
		head = n;
		size++;
	}
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
	void addAt(int num, int pos) {
		if (pos == 1) {
			return addFirst(num);
		}
		node* curr = head;
		for (int i = 1; i < pos-1; i++) {
			curr = curr->next;
		}
		node* n = new node(num, curr->next);
		curr->next = n;
		size++;
		if (pos == size) {
			tail = n;
		}
	}
	
	int removeAt(int pos) {
		if (pos == 1) {
			return removeFirst();
		} 
		if (pos == size) {
			return removeLast();
		}
		node* curr = head;
		for (int i = 1; i < pos-1; i++) {
			curr = curr->next;
		}
		node* f = curr->next;
		int ret = f->elem;
		curr->next = curr->next->next;
		free(f);
		size--;
		return ret;
	}
	
	int removeLast() {
		node* curr = head;
		while (curr->next != tail) {
			curr = curr->next;
		}
		int ret = tail->elem;
		free(tail);
		tail = curr;
		tail->next = nullptr;
		size--;
		return ret;
	}
	int removeFirst() {
		int ret = head->elem;
		node* curr = head;
		head = head->next;
		free(curr);
		size--;
		return ret;
	}
	
	int get(int pos) {
		node* curr = head;
		for (int i = 1; i < pos; i++) {
			curr = curr->next;
		}
		return curr->elem;
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
