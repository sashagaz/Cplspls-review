// notes from http://www.ntu.edu.sg/home/ehchua/programming/cpp/cp0_Introduction.html
// Excersise: write a harmonic series 

#include <iostream>
using namespace std;

int main() {
	int iterations;
	double sumHarmonic = 0.0;
	double sumGeometric = 0.0;
	int denominator = 1;

	cout << "enter number of iterations" << endl;
	cin >> iterations ;

	
	while (denominator <= iterations){
		sumHarmonic = sumHarmonic + double(1.0/denominator);
		denominator++;
	}

	denominator = 1;
	while (denominator <= iterations){
		sumGeometric = sumGeometric + double(1.0/(denominator*2));
		denominator++;
	}

	cout << " Sum of the harmonic series is " << sumHarmonic << endl;
	cout << " Sum of the Geometric series is " << sumGeometric << endl;

}