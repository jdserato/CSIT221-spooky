#include <iostream>
#include "board.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	entry player1, player2;
	Scoreboard* board = new Scoreboard();
	cout << "Enter name: ";
	getline(cin, player1.name);
	cout << "Enter college: ";
	getline(cin, player1.college);
	cout << "Enter score: ";
	cin >> player1.score;
	board->add(player1);
	cin.ignore();
	cout << "Enter name: ";
	getline(cin, player2.name);
	cout << "Enter college: ";
	getline(cin, player2.college);
	cout << "Enter score: ";
	cin >> player2.score;
	board->add(player2);
	
	board->print();
	
	return 0;
}
