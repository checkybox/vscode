#include <iostream>

using namespace std;

struct Card
{
    const char* face;
    const char* suit;
};

void outputCard (Card* card)
{
    cout << card->face << " of "
        << (*card).suit << endl;
}

int main()
{
    Card* card = new Card{"Ace", "Hearts"};
    outputCard(card);
    delete card;
}