#include <iostream>
#include <string>
//#include <vector>


template <typename container>
void Print(const container& data, const std::string& separator) {
    bool first = true;
    for (auto& elem: data) {
        if (first) first = false;
        else std::cout << separator;
        std::cout << elem;
    }
    std::cout << "\n";
}


/*
int main() {
    std::vector<int> data = {1, 2, 3};
    Print(data, ", ");  // 1, 2, 3
    return 0;
}
*/