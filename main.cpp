#include<iostream>
using namespace std;
int main() {
	char input1;
	char input2;

	cout << "Do you like (p)latformers or (s)hooter games" << endl;
	cin >> input1;
	cout << "Do you like badguys as (a)liens or (m)ushrooms" << endl;
	cin >> input2;

	if (input1 == 'p') {
		if (input2 == 'a')
			cout << "You will like the game Metroid" << endl;
		else if (input2 == 'm')
			cout << "You will like the game Mario Bros " << endl;
	}
	else if (input1 == 's') {
		if (input2 == 'a')
			cout << "You will like the game Halo" << endl;
		else if (input2 == 'm')
			cout << "You will like the game The Last of us" << endl;
	}

}
