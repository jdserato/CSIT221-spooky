#include <iostream>
#include "arraylist.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	List* l = new ArrayList();
	l->add(4);
	l->add(13);
	l->add(14);
	l->add(23);
	l->add(33);
	l->add(50);
	l->add(100);
	l->add(75);
	l->add(51);
	l->add(101);
	l->add(76);
	cout << l->get(2) << endl;
	l->print();
	return 0;
}
