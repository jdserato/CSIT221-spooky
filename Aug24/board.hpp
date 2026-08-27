#include "entry.hpp"

class Scoreboard {
	entry board[5];
	int size;
	
	public:
	bool add(entry e) {
		board[size++] = e;
		return true;
	}
	
	void print() {
		for (int i = 0; i < 5; i++) {
			if (i >= size) {
				cout << i+1 << ". (none)" << endl;
			} else {
				entry e = board[i];
				cout << i+1 << ". " << e.name << " (" << e.college << ") - " << e.score << endl;
			}
		}
	}
};
