#include <iostream>

int main() {
    int height;

    std::cout << "Enter the height of the inverted triangle: ";
    std::cin >> height;

    for (int i = 0; i < height; ++i) {

        for (int j = 0; j < i; ++j) {
            std::cout << " ";
        }

        for (int k = 0; k < height - i; ++k) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}




