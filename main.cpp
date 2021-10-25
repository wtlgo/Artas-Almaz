#include <iostream>
#include <cstddef>

int main() {

	const std::byte test{ 42 };
	std::cout << static_cast<int>(test) << '\n';

	return 0;
}