#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    double number;
    double sum = 0;
    int counter = 0;
    std::vector<double> numbers;

    do {
        std::cout << "Write a number: ";
        std::cin >> number;
        if (number != 0){
            numbers.push_back(number);
            sum += number;

        }
        counter++;
    }
    while (number != 0);
    counter--;
    double average = sum / counter;
    std::cout << "Average : "<< average<<std::endl;
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    std::cout << "Descending : ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    if (numbers.size() %  2 == 1){
        std::cout << "Median : " << numbers[numbers.size()/2];
    }
    else {
        std::cout << "Median : " << (numbers[numbers.size()/2]+numbers[numbers.size()/2-1])/2;
    }

    return 0;
}