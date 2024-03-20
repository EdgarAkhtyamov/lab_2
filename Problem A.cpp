#include <iostream>
#include <unordered_set>
#include <string>
#include <sstream>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); 

    std::string inp;
    std::getline(std::cin, inp);

    std::stringstream ss(inp);

    std::unordered_set<int> numbers;

    int num;
    while (ss >> num) {
        numbers.insert(num);
    }

    std::cout << numbers.size() << std::endl;

    return 0;
}

