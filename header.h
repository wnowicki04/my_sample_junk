//header
//used for defining stuff i guess

#ifndef H_FUNCTIONS
#define H_FUNCTIONS

//define a header or you're screwed

int a; //@param a - integer,  fixed value depending on entered data in is_it_even()
int b; //@param b - integer,  fixed value depending on entered data in is_it_even()

void is_it_even(int& a, int& b)
{
	std::cout << "this function checks whether a number is even or not" << std::endl;
	std::cout << "enter a number (value of int a): ";
	std::cin >> a;
	std::cout << "enter a number (value of int b): ";
	std::cin >> b;
	
	if (a % 2 == 0)
		std::cout << "value of int a is even" << std::endl;
	else
		std::cout << "value of int a is not even" << std::endl;
	
	if (b % 2 == 0)
		std::cout << "value of int b is even" << std::endl;
	else
		std::cout << "value of int b is not even" << std::endl;
}


std::string password; //@param password - a string depending on the entered value in passcode()

int passcode()
{
	std::cout << "please enter a password to continue: ";
	std::cin >> password;

	if (password == "ihategrouppolicy")
		std::cout << "the entered password is correct." << std::endl;
	else
		std::cout << "the password is incorrect. try again." << std::endl;

	return 0;
}

void thing()
{
  if (password == "ihategrouppolicy")
      std::cout << "this is the truth of this world" << std::endl;
      //just a comment regarding NT AUTHORITY/Administrators-defined group policies restricting management permissions of users
      //i despise Microsoft for restricting by default some functions, such as changing the features
      //eat a dxxk :3
}

#endif //if it's an "if" end it somehow.