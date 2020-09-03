#include <iostream>


char letters[5] = "ABCD";


int main() {

    for (int i = 1;i <= 6;i++) {
        std::cout << "      " << i << "\t";//prints the numbers at the top + the space between them
    }


    for (int t = 0; t <= 3;t++) {
        void horizontal_lines(); {
            std::endl(std::cout);
            for (int j = 1;j <= 6; j++) {
                std::cout << "   _ _ _";//prints the horizontal lines
            }
        }
        std::endl(std::cout);
        std::cout << letters[t];
        for (int n = 1;n <= 6;n++) {
            std::cout << " |      ";//prints the vertical lines wthout the *
        }
        std::cout << "   |";
        std::endl(std::cout);
        for (int k = 1;k <= 6;k++) {
            std::cout << " |   *  ";//prints vertical lines with the *
        }
        std::cout << "|";
    }
    void horizontal_lines();
    /*std::endl(std::cout);
    for (int j = 1;j <= 6; j++) {
        std::cout << "   _ _ _";
    }*/
    std::endl(std::cout);
    for (int i = 1;i <= 6;i++) {
         std::cout << "     " << i << "\t";
    }
}
