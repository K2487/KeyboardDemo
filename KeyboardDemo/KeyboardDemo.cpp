#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include <queue>  

int main()
{

	std::queue<char> keys;
	std::queue<char> keys2;

	char key;
	while (1)
	{
		key = _getch();


		if (keys.size() < 4) {
			keys.push(key);
			std::cout << ' ' << keys.back();

		}

		else {
			char pop = keys.front();
			keys2.push(pop);
			keys.pop();
			keys.push(key);
			std::cout << ' ' << keys.back();

			for (static bool first = true; first; first = false)
			{
				std::cout << "\n";
			}
			std::cout << ' ' << keys2.back();
		}

		}







	return 0;
}
