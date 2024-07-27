#include <iostream>
#include <cstdlib>


void	megaphone(std::string str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char)std::toupper(str[i]);
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}

	std::string	str;
	for (int i = 1; argv[i]; i++)
	{
		str = argv[i];
		megaphone(str);
	}
	return (0);
}