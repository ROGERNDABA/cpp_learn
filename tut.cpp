#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cmath>
//using namespace std;

std::vector<int> generate_rand(int size, int min, int max);
void buble_sort(std::vector<int>& v);

int main()
{
	std::cout << "hello world" << std::endl;
	//auto sets the data type based on hwo it's used
	//in this example, i was assumed or set by auto into "int"
	for (auto i = 0; i <  3; i++)
		std::cout << "swada" << std::endl;
	//vectors
	std::vector<int> theVec;
	theVec.push_back(2);
	theVec.push_back(18);
	std::cout << theVec[1] << std::endl;
	std::cout << theVec.size() << std::endl;

	std::string theStr = "asdada sljhd slkjdsk";
	std::vector<std::string> otherStr;
	std::stringstream ss(theStr);
	std::string indvStr;
	char cSpace = ' ';

	while (getline(ss, indvStr, cSpace))
	{
		otherStr.push_back(indvStr);
	}

	for (unsigned long i = 0; i < otherStr.size(); i++) {
		std::cout << otherStr[i] << '\n';
	}

	std::vector<int> v = generate_rand(10, 45, 96);
	for (unsigned long i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
	std::cout << "\n\n";
	buble_sort(v);
	//for (unsigned long i = 0; i < v.size(); i++) {
	//	std::cout << v[i] << " ";
	//}
	return 0;
}
// a vector that generates random numbers
std::vector<int> generate_rand(int size, int min, int max)
{
		std::vector<int> the_vector;
		srand(time(0));
		int i = 0, rand_value = 0;
		while (i < size) {
			rand_value = min + std::rand() % ((max + 1) - min);
			the_vector.push_back(rand_value);
			i++;
		}
		return (the_vector);
}

//bubble sort in a vector

void buble_sort(std::vector<int>& v) {
	int i = v.size() - 1;
	while (i >= 1)
	{
		int j = 0;
		while (j < i)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
			j++;
			for (auto k: v) {
				std::cout << k << ", ";
			}
			std::cout << "\nDone " << i << '\n';
		}
		i--;
	}
}
