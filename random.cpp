#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
 int guess = 0;	// declare variable to store guess of user and set to 0
 int counter = 0;	// declare variable as counter for number of guesses

	
	for(;;)
	{
	counter = counter + 1;	// increment guess counter
   //	cout << counter << endl; 
	cin >> guess;	// read input from user
		//
		
		// compare input from user to random number
		// print out winner, too high or too low message
		//

		if (guess > random_number){cout << "too high\n";
		
		} else if (guess < random_number){cout << "too low\n";
		}
		
		 else{cout << "winner\n"; break;
		 	
		 }

	// print message with number of guesses
	// 
	
}
	return 0;
}
 