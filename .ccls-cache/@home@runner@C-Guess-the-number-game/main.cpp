#include <iostream>
#include <cstdlib>
#include<ctime>6

using namespace std;

int main(){
  srand(time(0)); //seed random number generator
  int num;
	num = rand() % 100;// random number between 1 and 100
  int guess;
  do {
    cout<< "Enter your number";
		cin >> guess;
		if (guess < num)
			cout << "Too Low!"<<endl;
		else if (guess > num)
			cout << "Too High!"<<endl;
		else
			cout << "Brilliant, You have guessed the number!" <<endl;
} while (guess != num);

	return 0;
  
}