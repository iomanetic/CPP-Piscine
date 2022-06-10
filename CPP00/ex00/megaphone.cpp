#include <iostream>

void PrintUpper(char **arr)
{
	int i;
	int j;

	i = 0;
	while(arr[i])
	{
		j = 0;
		while(arr[i][j])
		{
			std::cout << (char)toupper(arr[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if(argc > 1)
		PrintUpper(&argv[1]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}