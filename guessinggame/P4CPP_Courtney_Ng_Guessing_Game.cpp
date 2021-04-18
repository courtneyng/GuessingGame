/*
Courtney Ng
Period 4
Program Desc: Guessing Game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0)); 
	int player, computer = rand() % 100 + 1, num_guess;
	num_guess = 0;
	cout << "This is Guessing Game 1.0" << endl;
	
	do{
	cout << "Pick a number between 1 and 100: ";
	cin >> player;
	num_guess++;
	
	if (player > computer){
		cout << "The value is too high\n";
	}
	else if(player < computer){
		cout << "The value is too low\n";
	}
	
	} while (player != computer);
	
	cout << "\ngrats.\n";
	cout << "you guessed this many times: " << num_guess;
}
