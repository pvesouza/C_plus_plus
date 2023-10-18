#include <iostream>

int main(void)
{
    int i = 0;
    char str[80];

    std::cout << "Hello World!!" << std::endl;
    std::cout << "Type a number: " << std::endl;
    std::cin >> i;

    std::cout << "The number typed was: " << i << std::endl;

    std::cout << "Type your name" << std::endl;
    std::cin >> str;

    std::cout << "Your name is: " << str << std::endl;
    return 0;
}