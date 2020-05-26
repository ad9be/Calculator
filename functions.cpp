#include "main.h"

void add_func()
{
	std::cout << "-------------------------------------------------------------" << std::endl;
	
	std::cout << "Addition Value // ";
	std::cin >> add_value;

	finished_value = Input_Value + add_value;
	add_value = 0;
	
	std::cout << "-------------------------------------------------------------" << std::endl;

	std::cout << "Calculated Value // " << "[" << finished_value << "]";

	Input_Value = finished_value;
	finished_value = 0;
	
}

void subtract_func()
{
	std::cout << "-------------------------------------------------------------" << std::endl;

	std::cout << "Subtraction Value // ";
	std::cin >> subtract_value;

	finished_value = Input_Value - subtract_value;
	subtract_value = 0;

	std::cout << "-------------------------------------------------------------" << std::endl;

	std::cout << "Calculated Value // " << "[" << finished_value << "]";

	Input_Value = finished_value;
	finished_value = 0;
}

void multiply_func()
{
	std::cout << "-------------------------------------------------------------" << std::endl;

	std::cout << "Multiplication Value // ";
	std::cin >> multiply_value;

	finished_value = Input_Value * multiply_value;
	multiply_value = 0;

	std::cout << "-------------------------------------------------------------" << std::endl;

	std::cout << "Calculated Value // " << "[" << finished_value << "]";

	Input_Value = finished_value;
	finished_value = 0;
}

void divide_func()
{
	std::cout << "-------------------------------------------------------------" << std::endl;

	std::cout << "Division Value // ";
	std::cin >> divide_value;

	finished_value = Input_Value / divide_value;
	divide_value = 0;

	std::cout << "-------------------------------------------------------------" << std::endl;

	std::cout << "Calculated Value // " << "[" << finished_value << "]";

	Input_Value = finished_value;
	finished_value = 0;
}
