#include <iostream>
#include "arraylist.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for (int j = 0; j < 10; j++) {
		ArrayList* l = new ArrayList();
//		l->print();
		for (int i = 0; i <= 1000; i++) {
			l->add(i);
		}
//		l->print();
		cout << "Address of the list: " << l << endl;
		l->printArrayAddress();
		delete l;
	}
	return 0;
}
