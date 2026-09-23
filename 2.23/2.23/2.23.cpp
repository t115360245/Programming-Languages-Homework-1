#include <iostream>
#include <array>
#include <algorithm>
#include <limits>

int main() {
    std::array<int, 3> vals;
    std::cout << "請輸入三個整數（以空格或換行分隔）: ";

    for (size_t i = 0; i < vals.size(); ) {
        if (std::cin >> vals[i]) {
            ++i;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "輸入錯誤，請重新輸入三個整數: ";
            i = 0; 
        }
    }

    auto range = std::minmax_element(vals.begin(), vals.end());
    int smallest = *range.first;
    int largest  = *range.second;

    std::cout << "最大值為: " << largest << '\n';
    std::cout << "最小值為: " << smallest << '\n';
    return 0;
}