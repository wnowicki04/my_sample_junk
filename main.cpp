//C++ source file, used for executing already defined functions

#include <iostream>
#include <string>
#include "header.h"

int main()
{
	is_it_even(a, b);
	passcode();
	thing();
	getchar();
	return 0;
}

//if you're running on Windows, or use Wine, you can use std::system("Pause>nul") instead of getchar()
//however getchar() is easier to write down and it's more multi-platform