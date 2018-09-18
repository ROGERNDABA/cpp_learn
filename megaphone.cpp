#include <iostream>
#include <string>

char *str_caps(char *s)
{
	int i = -1;
	while (s[++i]) {
		s[i] = (s[i] >= 90 && s[i] <= 122) ? s[i] - 32 : s[i];
	}
	return (s);
}

int main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBARABLE FEEDBACK NOISE *" << '\n';
	else
	{
		int i = 0;
		while (av[++i])
		{
			std::cout << str_caps(av[i]);
			(av[i + 1]) ? std::cout << " " : std::cout << '\n';
		}
	}
	return 0;
}
