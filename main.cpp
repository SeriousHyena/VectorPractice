#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main()

{
	int counter = 0;
	vector<string> myVec(5);	//intialize a vector with 5 elements

	myVec[0] = "Bailey";
	myVec[1] = "Peanut";
	myVec[2] = "Dewey";
	myVec[3] = "Nessie";
	myVec[4] = "McIntosh";

	for(string name : myVec)
	{
		counter += 1;
		cout <<counter <<"." << " " << name << endl;
	}

	cout << endl;

	//insert another name in the third element of the vector
	cout << "The third element is was: " << myVec[3] << endl;
	myVec.insert(myVec.begin() + 2, "John Baugh");
	cout << "The third element is now: " << myVec[3]<<endl;

	//now remove the last element then put it back
	myVec.pop_back();	//removes an element from the vector
	cout << "Now the last element is: " << myVec.back() << endl;

	cout << endl;
	int counter2 = 0;

	for (string name : myVec)
		
	{
		counter2 += 1;
		cout << counter2 << "." << " " << name << endl;
	}
	


	return 0;
}