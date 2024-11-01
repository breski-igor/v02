#include <iostream>
#include <format>
#include "app.h"

int main()
{
	vsite::oop::v2::color c;

	double r, g, b;
	std::cout << "unesi crvenu, zelenu i plavu: ";
	std::cin >> r >> g >> b;

	c.set_red(r);
	c.set_green(g);
	c.set_blue(b);

	std::cout << "Boja u heksadecimalnom formatu: " << c.to_hex() << std::endl;


}
