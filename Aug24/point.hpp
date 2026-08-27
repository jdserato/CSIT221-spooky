struct Point {
	int x, y;
	
	Point* midpoint(Point other) {
		// create the point
		Point* p = new Point;
		// calculate and store x-coordinate
		p->x = (other.x + x) / 2;
		// calculate and store y-coordinate
		p->y = (other.y + this->y) / 2;
		// return the point
		return p;
	}
};
