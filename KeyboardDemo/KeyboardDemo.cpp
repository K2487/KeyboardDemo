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


		if (keys.size() < 5) {
			keys.push(key);
			std::cout << ' ' << keys.back();

		}

		else {
			keys.pop();
			keys.push(key);
			std::cout << ' ' << keys.back();
		}





	}
	return 0;
}
