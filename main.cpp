#include<iostream>
using namespace std;

//global variables
string inventory[10] = { "key" };

//function declarations
void shop();

int main() {
	int room = 1;
	string input;
	

	cout << " You wake up to find yourself in a SNOOPY dungeon. Can you escape? Good Luck!" << endl;

	do {
		cout << "inventory, ";
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " ";
		cout << endl << endl;
		switch (room) {
		case 1:
			cout << "You are in room 1. You can go North(N) or East(E)." << endl;
			cout << "press p for shop" << endl;
			cin >> input;
			if (input == "N")
				room = 2;
			else if (input == "E")
				room = 4;
			else if (input == "p")
				shop();
			else
				cout << "sorry, not an option." << endl;
			break;
		case 2:
			cout << "You are in room 2. You can go South(S) or East(E)." << endl;
			cin >> input;
			if (input == "S")
				room = 1;
			else if (input == "E")
				room = 3;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 3:
			cout << "You are in room 3. You can go South(S), West(W) or East(E) " << endl;
			cin >> input;
			if (input == "S")
				room = 4;
			else if (input == "W")
				room = 2;
			else if (input == "E")
				room = 6;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 4:
			cout << "You are in room 4. You can go North(N), West(W) or East(E)." << endl;
			cin >> input;
			if (input == "N")
				room = 3;
			else if (input == "W")
				room = 1;
			else if (input == "E")
				room = 5;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 5:
			cout << "You are in room 5. You can go South(S), North(N) or East(E)." << endl;
			cin >> input;
			if (input == "S")
				room = 10;
			else if (input == "N")
				room = 6;
			else if (input == "E")
				room = 8;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 6:
			cout << "You are in room 6. You can go South(S), West(W) or East(E)." << endl;
			cin >> input;
			if (input == "S")
				room = 5;
			else if (input == "W")
				room = 3;
			else if (input == "E")
				room = 7;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 7:
			cout << "You are in room 7. You can go South." << endl;
			cin >> input;
			if (input == "S")
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 8:
			cout << "You are in room 2. You can go South." << endl;
			cin >> input;
			if (input == "S")
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 9:
			cout << "You are in room 2. You can go South." << endl;
			cin >> input;
			if (input == "S")
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 10:
			cout << "You are in room 2. You can go South." << endl;
			cin >> input;
			if (input == "S")
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		}

	} while (input != "q");
}
void shop() {
	string input;
	do {
		cout << "Hi! Welcome to my shop!" << endl;
		cout << "press 'p' for potion, 'k' for key, 'f' for flashlight." << endl;
		cout << "press 'q' to quit." << endl;
		cin >> input;
		if (input == "p") {
			inventory[0] = "potion";
		}
		else if (input == "k") {
			inventory[1] = "key";
		}
		else if (input == "f") {
			inventory[2] = "flashlight";
		}

	} while (input != "q");
}
