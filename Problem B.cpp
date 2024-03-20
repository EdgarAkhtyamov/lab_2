#include <iostream>
#include <map>
#include <sstream>
#include <vector>


int main() {
	std::map<int, std::vector<std::string>> pupils;

	int _class;
	std::string name;

	while (std::cin >> _class >> name)
		pupils[_class].push_back(name);

	for (int classname= 9; classname <= 11; classname++) {
		for (std::string& student : pupils[classname])
			std::cout << classname << ' ' << student << std::endl;
		
	}
	return 0;

}