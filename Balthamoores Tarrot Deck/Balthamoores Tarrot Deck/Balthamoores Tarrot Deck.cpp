// Balhamoores Tarrot Deck program
// Justin McKeever 4/5/2023

// god help me...

#include <string>
#include <iostream>
#include <cstdlib>

#include "codeUtil.h"

using namespace std;

void menu();
void menuLoop();
void Selection(int);
void viewDeck();
void ShuffleDeck();
void DrawCard();
void spellCheck(char);
void addSpell();
string addSpellUserInput(string, string);

int main()
{
	menuLoop();
	
}

void menu()
{
	cout << " Select option \n";
	cout << " 1. Let the deck reclaim itself... (reshuffe - requires long rest) \n";
	cout << " 2. Let the universe decide your fate... (draw a card) \n";
	cout << " 3. Collapse the possibilities...  (observe the decks makeup) \n";
	cout << " 4. Give the universe a choice... (add spell to repository) \n";
	return;
}

void menuLoop()
{
	int choice;
	int loopControl = 0;
		while (loopControl < 1)
		{
			menu();
			cin >> choice;
			Selection(choice);
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
		cout << choice;
	}
	else if (choice == 2)
	{
		DrawCard();
		cout << choice;
	}
	else if (choice == 3)
	{
		viewDeck();
		cout << choice;
	}
	else if (choice == 4)
	{
		cout << choice;
		addSpell();
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

void addSpell()
{
	char spellType;
	cout << " Is the Spell a Cantrip (C), or a spell Spell (S)-- input (B) to go back" << endl;
	cin >> spellType;
	spellCheck(spellType);
}

void spellCheck(char input)
{
	bool selVer;
	if (input == 'C' || input == 'c')
	{
		string spellType = "Cantrip";
		selVer = selectionVerify(spellType);
		if (selVer == true)
		{
			cout << "test";
			system("pause");
			//addSpellUserInput(spellType);
		}
		else
		{
			conClr();
			addSpell();
		}
		conClr();
		menuLoop();
	}
	else if (input == 'S' || input == 's')
	{
		string spellType = "Spell";
		selVer = selectionVerify(spellType);
		if (selVer == true)
		{
			string level;
			cout << "Please select a level 1-9 for the spell";
			cin >> level;
			selVer = selectionVerify(level);
			if (selVer == true)
			{
				addSpellUserInput(spellType, level);
			}
			else
			{
				conClr();
				addSpell();
			}
		}
		else
		{
			conClr();
			addSpell();
		}
		conClr();
		menuLoop();
	}
	else if (input == 'b' || input == 'B')
	{
		conClr();
		menuLoop();
	}
}

string addSpellUserInput(string SpellType, string level)
{
	cout << "Please input the name of the spell";
	return 0;
}