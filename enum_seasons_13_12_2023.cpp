#include <iostream>
#include <string>

enum MONTHS_OF_THE_YEAR {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

    std::string monthsToString(MONTHS_OF_THE_YEAR month){
        const std::string monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        return monthNames[static_cast<int>(month) - 1];
    }



int main() {
        int inputMonth;

        std::cout << "Input Month 1-12: ";
        std::cin >> inputMonth;

        MONTHS_OF_THE_YEAR convertedMonth = static_cast<MONTHS_OF_THE_YEAR>(inputMonth);

    switch(convertedMonth){
        case December:
        case January:
        case February:
            std::cout << "It's Winter!" << std::endl;
            break;
        case March:
        case April:
        case May:
            std::cout << "It's Spring!" << std::endl;
            break;
        case June:
        case July:
        case August:
            std::cout << "It's Summer!" << std::endl;
            break;
        case September:
        case October:
        case November:
            std::cout << "It's Autumn!" << std::endl;
            break;
        default:
            std::cout << "Invalid Input!" << std::endl;
            break;
    }

    return 0;
}
