#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::unordered_set<std::string> set;
    std::string operation, word;

    while (true) {
        std::cin >> operation;

        if (operation == "+") {
            std::cin >> word;
            set.insert(word);
        }

        else if (operation == "-") {
            std::cin >> word;
            set.erase(word);
        }

        else if (operation == "?") {
            std::cin >> word;

            if (set.find(word) != set.end()) std::cout << "YES" << std::endl;
            

            else std::cout << "NO" << std::endl;
            
        }
        else if (operation == "#") break;

        
    }

    return 0;
}