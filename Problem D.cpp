#include <iostream>
#include <stack>

bool str_is_right(std::string s) {

    std::stack<char> stack_of_brackets;

    for (char bracket: s) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            stack_of_brackets.push(bracket);
        }
        else {
            if (stack_of_brackets.empty()) return false;
            
            char top_element = stack_of_brackets.top(); 

            if ((bracket == ')' && top_element == '(') || (bracket == ']' && top_element == '[') || (bracket == '}' && top_element == '{'))
                stack_of_brackets.pop();
            

            else return false;
            
        }
    }

    return stack_of_brackets.empty();
}

int main() {
    std::string inp;
    std::cin >> inp;

    if (str_is_right(inp)) std::cout << "yes" << std::endl;
    
    else std::cout << "no" << std::endl;
    

    return 0;
}