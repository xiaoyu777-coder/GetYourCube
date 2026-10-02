#include <iostream>
#include "getyourcube.h"

int cube::set_length(int l) {
	if (l < 0) {
		std::cout << "Length cannot be negative." << std::endl;
		return -1; // Indicate an error
	}
	length = l;
	return 0; // Indicate success
}

int cube::set_width(int w) {
	if (w < 0) {
		std::cout << "Width cannot be negative." << std::endl;
		return -1; // Indicate an error
	}
	width = w;
	return 0; // Indicate success
}

int cube::set_height(int h) {
	if (h < 0) {
		std::cout << "Height cannot be negative." << std::endl;
		return -1; // Indicate an error
	}
	height = h;
	return 0; // Indicate success
}

int cube::get_length() {
	return length;
}

int cube::get_width() {
	return width;
}

int cube::get_height() {
	return height;
}

int cube::get_surface_area() {
	if (length != NULL && width != NULL && height != NULL) {
		s = 2 * (length * width + length * height + width * height);
		return s;
	}
	return -1;
}

int cube::get_volume() {
	if (length != NULL && width != NULL && height != NULL) {
		v = length * width * height;
		return v;
	}
	return -1;
}