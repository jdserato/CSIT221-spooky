#include <iostream>
#include "singlyll.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	List* l = new SinglyLL();
	l->add(4);
	l->add(13);
	l->add(20);
	l->print();
	return 0;
}
