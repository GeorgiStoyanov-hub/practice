#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

enum Card_Suit {
    Hearts,
    Diamonds,
    Clubs,
    Spades,
    Num_Suits
};

enum Card_Rank{
    Rank_2 = 2,
    Rank_3 = 3,
    Rank_4 = 4,
    Rank_5 = 5,
    Rank_6 = 6,
    Rank_7 = 7,
    Rank_8 = 8,
    Rank_9 = 9,
    Rank_10 = 10,
    Rank_Jack = 11,
    Rank_Queen = 12,
    Rank_King = 13,
    Rank_Ace = 14,
    Num_Ranks
};

std::string cardToString(Card_Suit suit, Card_Rank rank){
    std::string suitNames[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    std::string rankNames[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    return rankNames[static_cast<int>(rank)] + " of " + suitNames[static_cast<int>(suit)];
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    Card_Suit randomSuit = static_cast<Card_Suit>(rand() % Num_Suits);
    Card_Rank randomRank = static_cast<Card_Rank>(rand() % Num_Ranks);
    std::cout << "Random Card: " << cardToString(randomSuit, randomRank) << std::endl;
}
