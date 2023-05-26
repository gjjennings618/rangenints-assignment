/* 	Garrett Jennings | ZID: Z1927185
	Assignment 01 - RanGenInts
	CS340 - 3
	
	I certify that this is my own work and where appropriate an extension 
	of the starter code provided for the assignment.
*/

#include "rgi.h"

using namespace std;

// Add needed constants
const int LOW = 1;
const int HIGH = 10000;
const int VEC_SIZE = 200;
const unsigned int SEED = 1;
const int NO_ITEMS = 12;
const int ITEM_W = 5;

// Add code for genRndNums
void genRndNums(vector<int> &v, int num){

    srand(SEED);
    for (int i = 0; i < num; i++){
        v.push_back(rand() % HIGH + LOW);
    }
}
// Add code for printVec
void printVec(const vector<int> &v){
    int countElements = 1;

    for( int x: v){
        cout << right << setw(ITEM_W) << x;

        if (countElements%NO_ITEMS == 0)
            cout << endl;    

        countElements++;
    }

    cout << endl;
}

int 
main() 
{
    // Declare vector v
    vector<int> v;

    // Generate random numbers to fill vector v	
    genRndNums(v, VEC_SIZE);

    // Using STL sort sort v
    sort(v.begin(), v.end());

    // Print vector of sorted random numbers
    printVec(v);

    return 1;
}

