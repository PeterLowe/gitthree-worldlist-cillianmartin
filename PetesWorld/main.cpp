// program to find countries in Pete's World
// date November 2022
// author Pete Lowe

// add your name here
//  MArtin McCarthy

// add your name here Cillian Doyle

// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to C or Y to Z" << std::endl; // change this line each iteration

	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0;
		}
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}

	}
	if (letter == 'b' || letter == 'B')
	{
		if (region == 1)
		{
			std::cout << "Belize, Bermuda, Bolivi" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Bosnia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Bahamas, Bahrain, Barbados" << std::endl;
		}
	}
	if (letter == 'c' || letter == 'C')
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Comoros, Democratic Republic of the Congo, Congo Republic of (Brazzaville), C�te D'ivoire (Ivory Coast)" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas island, Cyprus " << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cayman Island, Cocos Island, Cook island, Cuba" << std::endl;
		}
	}


	if (letter == 'x' || letter == 'X')
	{
		if (region == 1)
		{
			std::cout << "there are no countries begining with X in America " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "there are no countries begining with X in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "there are no countries begining with X in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "there are no countries begining with X in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "there are no countries beginning with X in the rest of the world" << std::endl;
		}
	}

	if (letter == 'y' || letter == 'Y')
	{
		if (region == 1)
		{
			std::cout << "there are no countries begining with Y in America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "there are no countries begining with Y in Europe " << std::endl;
		}
		if (region == 3)
		{
			std::cout << "there are no countries begining with Y in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "there are no countries begining with Y in the rest of the world" << std::endl;
		}
	}



	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}



	return 1;
}