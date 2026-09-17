#include <iostream>
#include "singlyll.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	List* l = new SinglyLL();
	l->add(5);
	l->add(14);
	l->add(20);
	l->add(27);
	l->print();
	return 0;
}
