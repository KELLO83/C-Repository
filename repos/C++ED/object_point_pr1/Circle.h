#pragma once
class Circle {
	int radious;
public:
	Circle() { this->radious = 1; }
	Circle(int r) { this->radious = r; }
	void setradious(int r);
	double getArea();
	int getARadious();

};


