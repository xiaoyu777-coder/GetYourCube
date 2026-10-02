#pragma once
class cube {
private:
	int length;
	int width;
	int height;
	int s;
	int v;
public:
	int set_length(int l);
	int set_width(int w);
	int set_height(int h);
	int get_length();
	int get_width();
	int get_height();
	int get_surface_area();
	int get_volume();
};