#include <iostream>
#include <string>
#include <stack>
#include <map>


bool IsCorrectParenthesis(std::string& parenthesis) {
    std::map<char, char> brackets {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    std::stack<char> open;
    for (char elem : parenthesis) {
        if (elem == '(' || elem == '{' || elem == '[') open.push(elem);
        else {
            if (open.empty()) return false;
            if (brackets.at(open.top()) != elem) return false;
            open.pop();
        }
    }
    return open.empty();
}


/*
int main() {
    std::cout << IsCorrectParenthesis("{[}]");
    return 0;
}
*/