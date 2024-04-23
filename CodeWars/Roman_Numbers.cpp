#include <iostream>
#include <string>

using namespace std;

int main() {
    int number = 3849;
    std::string result = "";
    while (number>0){
        if (number >= 1000){
            number -= 1000;
            result += "M";
        }
        else if (number >= 500){
            if(900 > number){
                number -= 500;
                result += "D";
            }
            else{
                number -= 900;
                result += "CM";
            }
        }
        else if (number >= 100){
            if(400 > number){
                number -= 100;
                result += "C";
            }
            else{
                number -= 400;
                result += "CD";
            }
        }
        else if (number >= 50){
            if(90 > number){
                number -= 50;
                result += "L";
            }
            else{
                number -= 90;
                result += "XC";
            }
        }
        else if (number >= 10){
            if(40 > number){
                number -= 10;
                result += "X";
            }
            else{
                number -= 40;
                result += "XL";
            }
        }
        else if (number >= 5){
            if(9 > number){
                number -= 5;
                result += "V";
            }
            else{
                number -= 9;
                result += "IX";
            }
        }
        else if (number >= 1){
            if(4 > number){
                number -= 1;
                result += "I";
            }
            else{
                number -= 4;
                result += "IV";
            }
        }

        std::cout << result << " - " << number << endl;
    }

    std::cout << result;
}
