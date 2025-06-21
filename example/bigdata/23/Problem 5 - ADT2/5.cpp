#include <iostream>
#include <string>
#include "set.h"
#include "vector.h"
#include "console.h"
using namespace std;

Set<Vector<string>> splitsOf(const string& str){

    (void) str; // you may delete this line
    // Fill your code here

    return {};  // you may modify this code
}

//Output the result
void printResult(Set<Vector<string>> & result){
    cout << "Splitted Result: " << endl;
    for(const Vector<string> &vec: result)
    {
        cout <<"  " << vec << endl;
    }
}

int main() {

    string input_str = "RUBY";
    auto result = splitsOf(input_str);
    printResult(result);
    return 0;

}





