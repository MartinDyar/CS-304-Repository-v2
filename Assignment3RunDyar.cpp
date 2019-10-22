#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void function1()
{
	
	// Declare variables
	vector<double> set_1(10);
	vector<double> set_2(10);
	vector<double> add(10);
	vector<double> multiply(10);

	// Receive input from user
	cout << "Please enter 10 integers: ";
	
	// Insert input into 1st vector
	for (double i = 0; i <= set_1.size() - 1; ++i)
	{
		cin >> set_1[i];
	}
	
	// Receive input from user
	cout << "Please enter another 10 integers: ";
	
	// Insert input into 2nd vector
	for (double i = 0; i <= set_2.size() - 1; ++i)
	{
		cin >> set_2[i];
	}
	
	// Use both sets and add/multiply their values and insert their sums and products into 2 separate vectors
	for (double i = 0; i <= set_1.size() - 1; ++i)
	{
		add[i] = (set_1[i] + set_2[i]);
		multiply[i] = (set_1[i] * set_2[i]);
	}
	
	// Output 1st vector to user
	cout << "\n Here are the integers you entered into the 1st set: " << endl;
	
	for (double i = 0; i <= set_1.size() - 1; ++i)
	{
		if (i != set_1.size() - 1);
		{
			cout << set_1[i] << ", ";
		}
		
	}
	
	// Output 2nd vector to user
	cout << "\n Here are the integers you entered into the 2nd set:" << endl;
	
	for (double i = 0; i <= set_2.size() - 1; ++i)
	{
		if (i != set_2.size() - 1);
		{
			cout << set_2[i] << ", ";
		}
	}
	
	// Output 3rd vector to user (sums)
	cout << " \n Here is the summation of all the integers in the sets: " << endl;
	
	for (double i = 0; i <= add.size() - 1; ++i)
	{
		if (i != add.size() - 1);
		{
			cout << add[i] << ", ";
		}
	}
	
	// Output 4th vector to user (products)
	cout << " \n Here are the products of all the integers in the sets: " << endl;
	
	for (double i = 0; i <= multiply.size() - 1; ++i)
	{
		if (i != multiply.size() - 1);
		{
			cout << multiply[i] << ", ";
		}
	}
	
}

void function2()
{
	// Declare variables
	vector<double> set_3(10);
	double shift;
	
	// Receive input from user
	cout << " \n Please enter another 10 integers: ";
	
	// Insert input into last vector
	for (double i = 0; i <= set_3.size() - 1; ++i)
	{
		cin >> set_3[i];
	}
	
	// Receive input from user regarding rotations
	cout << "\n Please enter how many times you wish to rotate the vector: ";
	cin >> shift;
	
	// Rotates vector according to user's input regarding number of rotations
	rotate(set_3.begin(),set_3.begin() + set_3.size() - shift, set_3.end());
	
	// Outputs newly rotated vector
	cout << "\n Here is your rotated vector: " << endl;
	for (double i = 0; i <= set_3.size() - 1; ++i)
	{
		if (i != set_3.size() - 1);
		{
			cout << set_3[i] << ", ";
		}
		
	}

}

int main()
{
	function1();
	function2();
}

