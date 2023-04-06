// Balhamoores Tarrot Deck program
// Justin McKeever 4/5/2023

#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

void menu();
int menuLoop();
void Selection();
void viewDeck();
void ShuffleDeck();
void DrawCard();

int main()
{
	int choice = menuLoop();
	
}

void menu()
{
	cout << " Select option \n";
	cout << " 1. Let the deck reclaim itself... (reshuffe - requires long rest) \n";
	cout << " 2. Let the universe decide your fate... (draw a card) \n";
	cout << " 3. Collapse the possibilities...  (observe the decks makeup) \n";
	return;
}

int menuLoop()
{
	int choice;
	int loopControl = 0;
		while (loopControl < 1)
		{
			menu();
			cin >> choice;
			return choice;
		}
}

void Selection(int a)
{
	int choice = a;
	int loopControl = 0;
	while (loopControl < 1)
	if (choice == 1)
	{
		ShuffleDeck();
	}
	else if (choice == 2)
	{
		DrawCard();
	}
	else if (choice == 3)
	{
		viewDeck();
	}
	else
	{
		cout << " im sorry that is an invalid resoponse please try again";
		menuLoop();
	}

}

void viewDeck()
{
	// displays the quantities of the different cards in the deck WILL NOT SHOW CARD LOCATIONS WITHIN THE ARRAY
}

void ShuffleDeck()
{
	// will run a function to reassign the 30 array locations new cards
}

void DrawCard()
{
	// will display the next card in the deck THIS IS NOT RANDOM it will display the next value in the index++ of te array
}