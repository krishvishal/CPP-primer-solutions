#include <iostream>
int main(){
	std::cout << "Enter two numbers: " << std::endl;
	int x, y = 0;
	std::cin >> x >> y;
	std::cout << "The sum of " << x;
	std::cout << " and " << y << " is ";
	std::cout << x + y << std::endl;
	return 0; 
}