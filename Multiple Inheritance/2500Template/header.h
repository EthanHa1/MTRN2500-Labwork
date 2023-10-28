#pragma once

class Rectangle {
public:
	Rectangle(int width, int height);

	int getWidth() const;

	int getHeight() const;

	int area() const;
private:
	int mWidth;
	int mHeight;
};

class Rhombus {
public:
	Rhombus(int slant, int width);

	int getSlant() const;

	int area() const;

	int getWidth() const;
private:
	int mSlant;
	int mWidth;
};

class Square : public Rectangle, public Rhombus {
public:
	Square(int width);
};