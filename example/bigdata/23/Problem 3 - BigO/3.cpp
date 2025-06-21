/*
 * File: 3.cpp for BigO Problem
 * -----------------------------
 * This program outputs runtime complexity of 3
 * code fragments in Big-O notation of Problem 3.
 */
#include <iostream>
#include "console.h"
using namespace std;

const int MAXLENGTH = 3;

// Please fill all 3 answers into BigO string array.
static string BigO[] = {
                 "O(N*N*N)",      // This line is a sample string as BigO notation.
                 "O(N*N*logN)",   // replace these strings with correct BigO notations .
                 "O(N*N*N*logN)"};

int main() {
    cout<<"Problem 3 - Runtime Complexity Evaluation:" << endl<<endl;
    for (unsigned int i =0 ; i < MAXLENGTH; i++) {
        cout<<" Code Fragment #"<<i+1<<": " << BigO[i];
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
