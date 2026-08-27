#include <iostream>
using namespace std;
struct Point {
	int x;
	int y;
	int* z;
	char b;
	int a;
	char c, *d;
	
	Point* midpoint(Point* other) {
		Point *mid = new Point;
		mid->x = (this->x + other->x) / 2;
		mid->y = (this->y + other->y) / 2;
		x = -5;
		cout << x << " within fn call" << endl;
		return mid;
	}	
};
