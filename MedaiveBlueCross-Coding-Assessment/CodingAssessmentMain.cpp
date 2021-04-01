#include "CeilingFan.h"
#include <iostream>
#include <string>

/*
* Name: Ibrahim Jaber
* Date: 4/1/2021
* Purpose: Mediave Blue cross coding assesment.
* 
* I didn't consult/copy code from any source including a website, book, or friend/colleague to complete this assessment.
* 
*/


using namespace std;

int main() {
	CeilingFan* fan = new CeilingFan();

	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	fan->Increment();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;

	fan->Increment();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	fan->Increment();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	fan->Reverse();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	fan->Increment();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	fan->Increment();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	fan->Reverse();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	fan->Increment();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	fan->Increment();
	cout << fan->printCurrentState() << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << endl;


	cout << fan->thankYouMessage() << endl;

	delete(fan);//freeing memory resources;

	return 0;
}