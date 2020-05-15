#include <iostream>
#include <magic_enum/include/magic_enum.hpp>

enum Color
{
	RED = 2,
	BLUE = 4,
	GREEN = 10,
};

using magic_enum::enum_name;

int main() {
	Color color = Color::RED;
	auto color_name = enum_name(color);
	std::cout << color_name << std::endl;
	// std::cout << Color::RED << std::endl;

	return 0;
}