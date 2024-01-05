#include <iostream>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; ++i) {
        
        for (int j = 1; j <= rows; ++j) {
            if (j <= rows - i) {
                std::cout << " ";
            } else {
                std::cout << "*";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
