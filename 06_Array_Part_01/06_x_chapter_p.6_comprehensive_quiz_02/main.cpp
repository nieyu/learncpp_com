//
//  main.cpp
//  06_x_chapter_p.6_comprehensive_quiz_02
//
//  Created by txc-ios on 2020/10/19.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <ctime>
#include <random>
#include <numeric>

enum class CardSuit {
    SUIT_CLUB,
    SUIT_DIAMOND,
    SUIT_HEART,
    SUIT_SPADE,
    
    MAX_SUITS
};

enum class CardRank
{
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_9,
    RANK_10,
    RANK_JACK,
    RANK_QUEEN,
    RANK_KING,
    RANK_ACE,
    
    MAX_RANKS
};

struct Card {
    CardSuit suit{};
    CardRank rank{};
};

void printCard(const Card& card) {
    
    switch (card.rank) {
        case CardRank::RANK_2:
            std::cout << "2";
            break;
        case CardRank::RANK_3:
            std::cout << "3";
            break;
        case CardRank::RANK_4:
            std::cout << "4";
            break;
        case CardRank::RANK_5:
            std::cout << "5";
            break;
        case CardRank::RANK_6:
            std::cout << "6";
            break;
        case CardRank::RANK_7:
            std::cout << "7";
            break;
        case CardRank::RANK_8:
            std::cout << "8";
            break;
        case CardRank::RANK_9:
            std::cout << "9";
            break;
        case CardRank::RANK_10:
            std::cout << "10";
            break;
        case CardRank::RANK_JACK:
            std::cout << "J";
            break;
        case CardRank::RANK_QUEEN:
            std::cout << "Q";
            break;
        case CardRank::RANK_KING:
            std::cout << "K";
            break;
        case CardRank::RANK_ACE:
            std::cout << "A";
            break;
        default:
            std::cout << "error rank";
            break;
    }
    
    switch (card.suit) {
        case CardSuit::SUIT_CLUB:
            std::cout << "C";
            break;
        case CardSuit::SUIT_DIAMOND:
            std::cout << "D";
            break;
        case CardSuit::SUIT_HEART:
            std::cout << "H";
            break;
        case CardSuit::SUIT_SPADE:
            std::cout << "S";
            break;
        case CardSuit::MAX_SUITS:
            std::cout << "error suit";
            break;
    }
    
//    std::cout << '\n';
    
}

using deck_type = std::array<Card, 52>;
using index_type = deck_type::size_type;

deck_type createDeck() {
    deck_type deck{};
    index_type card{ 0 };
    
    int suits{ static_cast<int>(CardSuit::MAX_SUITS) };
    int ranks{ static_cast<int>(CardRank::MAX_RANKS) };
    
    for (int suit{ 0 }; suit < suits; ++suit) {
        for (int rank{ 0 }; rank < ranks; ++rank) {
            deck[card].suit = static_cast<CardSuit>(suit);
            deck[card].rank = static_cast<CardRank>(rank);
            ++card;
        }
    }
    
    
    
    return deck;
}

void printDeck(deck_type &deck) {
    
    for (Card card : deck) {
        printCard(card);
        std::cout << ' ';
    }
    
}

int main(int argc, const char * argv[]) {
    
//    Card card{ CardSuit::SUIT_CLUB, CardRank::RANK_2  };
//
//    printCard(card);
    
    deck_type deck{ createDeck() };
    
    printDeck(deck);
    
    std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(deck.begin(), deck.end(), mt);
    
    std::cout << '\n';
    printDeck(deck);
    
    return 0;
}
