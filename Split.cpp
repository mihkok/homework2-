#include <iostream>
#include <vector>
#include <algorithm>


/*
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
*/


template <typename T>
std::pair<std::vector<T>, std::vector<T>> Split(std::vector<T>& data) {
    std::vector<T> positive, negative;

    for (T elem : data) {
        if (elem < 0) positive.push_back(elem);
        else negative.push_back(elem);
    }

    std::sort(positive.begin(), positive.end());
    std::sort(negative.begin(), negative.end());

    std::pair<std::vector<T>, std::vector<T>> res {negative, positive};
    return res;
}



/*
int main() {
    std::vector<int> data = {-1, 4, 2, -4, 5, -8, -2, 1};

    std::pair<std::vector<int>, std::vector<int>> fission = Split(data);
    std::vector<int> negative = fission.first, positive = fission.second;

    Print(negative, ", ");
    Print(positive, ", ");
    return 0;
}
*/