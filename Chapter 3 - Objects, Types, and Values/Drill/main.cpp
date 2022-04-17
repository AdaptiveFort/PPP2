#include <iostream>

int main() {
    std::cout << "Enter the name of the person you want to write to: ";
    std::string firstName,friendName;
    int recipientAge {0};
    char friendSex {0};
    std::cin >> firstName;
    std::cout << "Dear " << firstName << ", How are you? \n I am fine \n\t I miss you" << std::endl;
    std::cout << "Enter the name of another friend you want to write to: ";
    std::cin >> friendName;
    std::cout << "Have you seen " << friendName << " lately? \n" << std::endl;
    std::cout << "Is your friend " << friendName << " a male or female (enter m or f)? ";
    std::cin >> friendSex;
    if (friendSex == 'm')
        std::cout << "If you see " << friendName << " ask him to call me \n";
    if (friendSex == 'f')
        std::cout << "If you see " << friendName << " ask her to call me \n";
        std::cout << "What is the age of " << firstName << " ? ";
    std::cin >> recipientAge;
    if (recipientAge <= 0 || recipientAge >= 110)
    {
        std::cerr << "Are you kidding me?";
    } else
    {
        if (recipientAge < 12) std::cout << "Next year you will be " << (recipientAge+1) <<" !" << std::endl;
        if (recipientAge == 17) std::cout << "Next year you will be able to vote!" << std::endl;
        if (recipientAge > 70) std::cout << "I hope you are enjoying your retirement!" << std::endl;
    }
    std::cout << "Your Sincerely,\n\nFiras Chahine" << std::endl;
    return 0;
}
