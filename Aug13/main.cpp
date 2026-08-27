#include <iostream>
#include "arraylist.hpp"
using namespace std;

int main() {
	List* list = new ArrayList();
//	list->_size = 1000000;
	list->add(4);
	list->add(13);
	list->add(17);
	cout << "Pos 3: " << list->get(3) << endl;
	list->addFirst(8);
	cout << "Size: " << list->size() << endl;
	list->print();
	return 0;
}
