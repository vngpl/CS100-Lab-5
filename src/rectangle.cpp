#include "header/rectangle.hpp"

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

int Rectangle::perimeter() { return 2 * (width + height); }

int Rectangle::area() {	return width * height; }
