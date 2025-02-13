#include <iostream>




int main() {
    std::string Word1;
    std::string Word2;
    std::cout << "Write a word: ";
    std::getline(std::cin, Word1);
    std::cout << "Write another word: ";
    std::getline(std::cin, Word2);
    if (Word1 == Word2){
        std::cout << "The strings are equal" << std::endl;
    }
    else {
        std::cout << "The strings are not equal" << std::endl;
        if (Word1.find(Word2) != std::string::npos){
            std::cout << "Last string is substring of first string";
        }
        else if (Word2.find(Word1)!= std::string::npos){
            std::cout << "First string is substring of last string";
        }
        else {
            std::cout << "There are no substrings";
        }
    }


    return 0;
}