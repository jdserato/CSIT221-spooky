#include <iostream>
#include "doublyll.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	List* l = new DoublyLL();
	l->add(4);
	l->add(6);
	l->add(7);
	l->add(9);
	l->add(13);
	l->addFirst(1);
	l->addAt(10, 6);
//	cout << l->removeAt(7) << endl;
//	l->print();
//	l->add(15);
	l->print();
	return 0;
}
