/*
 * File: 4.pp
 * ----------------------------------------------
 * This program judges whether a subset of given integers has sum equal to a given target.
 */
#include <iostream>
#include "vector.h"
#include "console.h"
using namespace std;

bool subsetSum(const Vector<int> & a, int W)
{
   (void) a;  // you may delete this line
   (void) W;  // you may delete this line

   // Fill and modify the code of this function

   return true; // you may modify this line
}

int main()
{
    Vector<int> a = {1, 3, 5, 9, 20};
    int W = 28;
    cout << "There is ";
    if (!subsetSum(a, W))
        cout << "not ";
    cout << "a subset of a whose sum equals " << W << "." << endl;

    W = 7;
    cout << "There is";
    if (!subsetSum(a, W))
        cout << "not ";
    cout << "a subset of a whose sum equals " << W << "." << endl;
  return 0;
}
