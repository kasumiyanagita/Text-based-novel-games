#include <iostream>
#include <fstream>
#include <string>

using namespace std;


// clear input buffer and get the newline char
void enter() {
	// only get out of the loop when it find the new line character
	while (getchar() != '\n') {

	}
}
void displayIntro() {
	// read intro file 
	ifstream intro("Intro.txt");
	string line;
	while (getline(intro, line)) {
		cout << line;
		enter();
	}
	// close file
	intro.close();
}
void displayIntro2() {
	// read intro2 file 
	ifstream intro2("Intro2.txt");
	string line;
	while (getline(intro2, line)) {
		cout << line;
		enter();
	}
	// close file
	intro2.close();
}
void displayChap1() {
	// read chap1 file 
	ifstream chap1("chap1.txt");
	string line;
	while (getline(chap1, line)) {
		cout << line;
		enter();
	}
	// close file
	chap1.close();
}
void displayChap2() {
	// read chap2 file 
	ifstream chap2("chap2.txt");
	string line;
	while (getline(chap2, line)) {
		cout << line;
		enter();
	}
	// close file
	chap2.close();
}
void displayChap3() {
	// read chap3 file 
	ifstream chap3("chap3.txt");
	string line;
	while (getline(chap3, line)) {
		cout << line;
		enter();
	}
	// close file
	chap3.close();
}
bool isCorrectPlace() {
	bool correct = true;
	char place[200];
	cout << "\nEnter the place Akari left something for Toshihito." << endl;
	cout << "> ";
	cin.getline(place, 200);
	cin.ignore(2000, '\n');
	char lowerPlace[200];

	// convert into lower case
	for (int i = 0; i < strlen(place); i++) {
		lowerPlace[i] = tolower(place[i]);
	}
	lowerPlace[strlen(place)] = '\0';
	if (strstr(lowerPlace, "mary's rain") == nullptr) {
		correct = false;
	}
	return correct;
	
}
int main() {
	displayIntro();
	displayIntro2();
	displayChap1();
	displayChap2();
	displayChap3();
	if (isCorrectPlace()) {
		cout << "You got the answer!" << endl;
	}
	else {
		cout << "You couldn't get the place right" << endl;
	}
	return 0;
}