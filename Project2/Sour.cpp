#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "-----Задание 1-----";
	
	const int rows = 3, cols = 5;

	int arr[rows][cols]{};

	std::cout << "\n\nВведите число: ";
	int number = 0;
	std::cin >> number;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = number;
			}
			else
			{
				number *= 2;
				arr[i][j] = number;
			}
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "\n\n-----Задание 2-----";

	int arrsec[rows][cols]{};

	std::cout << "\n\nВведите число: ";
	std::cin >> number;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = number;
			}
			else
			{
				number += 1;
				arr[i][j] = number;
			}
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}