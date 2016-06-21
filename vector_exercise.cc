#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

//size of vector
const int VEC_SIZE = 250;

//random generator information
const int LOW = 1, HIGH = 10000, SEED = 1;

//display info
const int NO_ITEMS = 12, ITEM_W = 5;


//prototypes
void genRndNums(vector<int>&);
void printVec(const vector<int>&);

int main()
{
	vector<int> Random_vect(VEC_SIZE);					//initialize vector of ints with size of VEC_SIZE

	genRndNums(Random_vect);						//call random gen function to fill vector with random nums

	sort(Random_vect.begin(),Random_vect.end());				//sort the vector

	printVec(Random_vect);							//print the random vector - prints based on NO_Items

	return 0;

}

/*
* Function Generate Random Numbers: Responcible for generation
* of random numbers between the assigned values in the header
* file.The values are inserted in the vector using []notation
*
* A vector must be passed into  the function by reference
*
*/

void genRndNums (vector<int>&v)
{
	srand(SEED);								//initialize the random seed

	for (unsigned int i = 0; i < v.size(); i++)				//step through generate a random num
	{

		v[i]= (rand() % (HIGH-LOW + 1) + LOW);				//fill up vector with random numbers
										//between 1 and 10,000
	}

}

/*
* Function Print vector: responcible for the printing of
* each element of the vector using a test for arranging
* the numbers in NO_ITEMS which is controlled by the header
* file included
*
* Constant vector must be passed into this function. Function
* does not modify the existing vector just prints it.
*
*/

void printVec(const vector<int>&v)
{
	int number_perline;							//storage var to hold the modulus division test


	cout<< "Randomly Generated vector of "
	<<VEC_SIZE << " elements "  <<endl << endl << endl;


	for (unsigned int i = 0; i < v.size(); i++)				//step through and print each subscript of the vector
	{
		cout << setw(ITEM_W) << v[i];					//print with 5 spaces apart


		number_perline = (i + 1) % NO_ITEMS;				//test if the counter is divisible by 12


		if (number_perline == 0)					//if there is no remainder
		{
			cout << endl;						//start a new line of data
		}

	}

	cout << endl;								//add additional blank line for visibility
}
