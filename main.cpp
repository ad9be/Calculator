#include "main.h"
#include "functions.cpp"

int main()
{

	SetConsoleTitleA("Calculator");

	std::cout << "Original Value // ";
	std::cin >> Input_Value;

loop:
	
	std::cout << std::endl;
	std::cout << "[1] Add // [2] Subtract // [3] Multiply // [4] Divide // ";
	std::cin >> Input_Choice;

	switch (Input_Choice)
	{
	case 1: '1';
		add_func();
		break;
	case 2: '2';
		subtract_func();
		break;
	case 3: '3';
		multiply_func();
		break;
	case 4: '4';
		divide_func();
		break;
	default: return 0;
	}

goto loop;


	return 0;
}
