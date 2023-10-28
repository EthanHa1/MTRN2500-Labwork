#include <iostream>
#include <cmath>
#include "header.h"

Rectangle::Rectangle(int width, int height) : mWidth{ width }, mHeight{ height } {};

int Rectangle::getWidth() const {
	return mWidth;
}

int Rectangle::getHeight() const {
	return mHeight;
}

int Rectangle::area() const {
	int area{ mWidth * mHeight };
	return area;
}

Rhombus::Rhombus(int slant, int width) : mSlant{ slant }, mWidth{ width } {};

int Rhombus::getSlant() const {
	return mSlant;
}

int Rhombus::area() const {
	double area{ pow(mWidth, 2) * sin(mSlant) };

	return static_cast<int>(area);
}

int Rhombus::getWidth() const {
	return mWidth;
}

Square::Square(int width) : Rectangle(width, width), Rhombus{ 90, width } {};

int main(void) {
	std::cout << "Hello World!" << "\n";

	return 0;
}