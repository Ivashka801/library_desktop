#include <iostream>
#include <string>

int is_number(std::string str) {

    bool number = false;

    std::string choice;

    std::cin >> choice;

    if (str.empty()) number = false;

    bool has_dot = false;
    bool has_digit = false;

    for (size_t i = 0; i < str.length(); ++i) {
        if (i == 0 && (str[i] == '+' || str[i] == '-')) {
            continue;
        }

        if (str[i] == '.') {
            if (has_dot) {
                number = false;
            }
            has_dot = true;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            has_digit = true;
        }

        } 

        if (number == true){

            return std::stoi(choice);
        }
    }

int main() {



}
