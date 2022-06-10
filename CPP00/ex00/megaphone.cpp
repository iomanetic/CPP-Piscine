#include <iostream>

void PrintUpper(char **arr)
{
	int i;
	int j;

	for (i = 0; arr[i]; i++) {
		for (j = 0; arr[i][j]; j++)
			std::cout << (char) toupper(arr[i][j]);
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc > 1) {
		PrintUpper(&argv[1]);
	} else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}