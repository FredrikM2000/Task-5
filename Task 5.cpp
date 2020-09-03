#include <iostream>

int main()
{
    for (int i = 1;i <= 6;i++) {
        std::cout << "     " << i << "\t";
    }
    for (int t = 1; t <= 4;t++) {
        std::endl(std::cout);
        for (int j = 1;j <= 6; j++) {
            std::cout << "   _ _ _";
        }
        std::endl(std::cout);
        for (int n = 1;n <= 6;n++) {
            std::cout << " |      ";
        }
        std::cout << " |";
        std::endl(std::cout);
        for (int k = 1;k <= 6;k++) {
            std::cout << " |   *  ";
        }
        std::cout << " |";
    }
    std::endl(std::cout);
    for (int j = 1;j <= 6; j++) {
        std::cout << "   _ _ _";
    }
    std::endl(std::cout);
    for (int i = 1;i <= 6;i++) {
         std::cout << "     " << i << "\t";
    }
}
