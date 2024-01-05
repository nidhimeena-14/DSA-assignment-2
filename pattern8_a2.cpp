#include <iostream>

int main() {
    int size;

    std::cout << "Enter the size of the diagonal line: ";
    std::cin >> size;

    for (int i = 0; i < size; ++i) {

        for (int j = 0; j < size - i - 1; ++j) {
            std::cout << "   ";
        }

        std::cout << "*";

        std::cout << std::endl;
    }

    return 0;
}
