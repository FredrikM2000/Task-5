#include <iostream>

char letters[5] = "ABCD";

//I made some functions to make the code a little cleaner

void horizontal_lines() {
    std::endl(std::cout);
    std::cout << "    ";
    for (int j = 1;j <= 6; j++) {
        std::cout << "_ _ _   ";//prints the horizontal lines
    }
    std::endl(std::cout);
}
void numbers() {
    std::cout << "      ";
    for (int i = 1;i <= 6;i++) {
        std::cout << i << "       ";//prints the numbers at the top + the space between them
    }
}

int main() {
    numbers();
    for (int t = 0; t <= 3;t++) {
        horizontal_lines();
        std::cout << letters[t];
        for (int n = 1;n <= 6;n++) {
            std::cout << " |      ";//prints the vertical lines wthout *
        }
        std::cout << " | " << letters[t];//prints the last vertical line without * + the letter
        std::endl(std::cout);
        for (int k = 1;k <= 6;k++) {
            std::cout << "  |   * ";//prints vertical lines with *
        }
        std::cout << "  |";//prints the last vertical line with *
    }
    horizontal_lines();
    numbers();
}
//This was as close as I could get, I don't know how to change the text color to red unfortunantley