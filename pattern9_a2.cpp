#include <iostream>
int main() {
    int size;

    std::cout << "Enter the size of the X pattern (odd number): ";
    std::cin >> size;

    if (size % 2 == 0) {
        std::cerr << "Please enter an odd number for the size of the X pattern." << std::endl;
        return 1;  
    }
    for (int i = 0; i < size; ++i) {

        for (int j = 0; j < size; ++j) {

            if (j == i || j == size - i - 1) {
                std::cout << "*";
            } else {
                std::cout << "   ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
