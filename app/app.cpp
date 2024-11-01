#include "app.h"
#include <algorithm>
#include <format>
#include <iostream>

namespace vsite::oop::v2
{
/*
* class member function implementations
*/
	double color::get_red() const {
		return red;
	}
	double color::get_green() const {
		return green;
	}
	double color::get_blue() const {
		return blue;
	}

	void color::set_red(double a) {
		red = std::clamp(a, 0.0, 1.0);
	}
	void color::set_green(double b) {
		green = std::clamp(b, 0.0, 1.0);
	}
	void color::set_blue(double c) {
		blue = std::clamp(c, 0.0, 1.0);
	}

	unsigned int color::get_color_ref() const {
		return RGB(red * 255, green * 255, blue * 255);
	}

	double color::get_luminance() const {
		return red * 0.2126 + green * 0.7152 + blue * 0.0722;
	}
	std::string color::to_hex() const {
		unsigned color = get_color_ref();
		return std::format("#{:02X}{:02X}{:02X}",
			(color & 0xFF),
			(color >> 8) & 0xFF,
			(color >> 16) & 0xFF);
	}

} // namespace
