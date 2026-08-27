#include <iostream>
#include "point.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << sizeof(Point) << endl;
	Point* ptr1 = new Point;
	ptr1->x = 1;
	ptr1->y = -3;
	Point point2 = {7, 5}; //& is your address-of operator
	for (int i = 0; i < 100; i++) {
		Point* mid = ptr1->midpoint(&point2);
		cout << "Address of mid: " << mid << endl;
		cout << "x-coord before: " << mid->x << endl;
		free(mid);
		cout << "x-coord after: " << mid->x << endl; 
	}
	
	cout << ptr1->x << " after fn call" << endl;
//	cout << mid->x << ", " << mid->y;
	return 0;
}


