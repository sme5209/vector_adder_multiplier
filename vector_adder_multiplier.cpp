#include <iostream>
#include <vector>

int main() {

    //int inputNum;
    int sum, product;
    std::vector<int> numbers = { 12, 0, 16, 22, 93, -44, 12, 88 };

    sum = 0;
    product = 0;

    //std::cout << "Hello there.\n" << "Please input a number, then hit the Enter key: ";
    //std::cin >> inputNum;
    //numbers.push_back(inputNum);

    //while (1) { // There has to be a better way to do this ...
    //std::cout << "Please input another number and hit Enter, or hit the Enter key alone to exit: ";
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //if (std::cin.get(inputNum, 80) != '\n') { 
    //    std::cout << "Input character: " << inputNum << "\n";
    //    std::cout << "Input character converted to integer: " << (int)inputNum << "\n";
    //    numbers.push_back(inputNum);
    //}
    //else
    //    break;
    //}

    for (unsigned int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0)
            sum += numbers[i];
        else { // implicitly this is for odd numbers
            if (product == 0)
                product += numbers[i];
            else
                product *= numbers[i];
        }
    }

    std::cout << "The sum of all even numbers is: " << sum << "\n";
    std::cout << "The product of all odd numbers is : " << product << "\n";

}