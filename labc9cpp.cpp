#include "stdafx.h"
#include <iostream>
#include <time.h>

int main()
{
NEW_GAME:
	srand((unsigned)time(0)); int rand_num = rand() % 50 - 1, my_guess = 0;
	std::cout << "Enter a number between 1 and 50: ";

	while (std::cin >> my_guess)
	{
		std::cout << "Enter a number between 1 and 50: ";
		if (my_guess == rand_num) {
			std::cout << "Good news everyone! The secret number has been cracked!" << std::endl;
		INPUT_CONSOLE:
			char c = 'c'; std::cout << "(C)ontinue or E(x)it?: "; std::cin >> c;
			if (c == 'x' || c == 'X')
				return 0;
			else if (c == 'c' || c == 'C')
				goto NEW_GAME;
			else
				goto INPUT_CONSOLE;
		}
		else if (my_guess > rand_num)
			std::cout << "Guess is too high! Try again." << std::endl;
		else if (my_guess < rand_num)
			std::cout << "Guess is too low! Try again." << std::endl;
	}
	return 0;
}
