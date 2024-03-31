#include <iostream>

using namespace std;

int main () {
    int num = 1;

    // Use the switch statement to select one of many code blocks to be executed. (Case value can only be int or char.)

    switch (num)
    {
    case 1:
        cout << " Your Number is 1." << endl;

        
        break; // When C++ reaches a break keyword, it breaks out of the switch block. This will stop the execution of more code and case testing inside the block.
    case 2:
        cout << " Your Number is 2." << endl;
        break;

    // The default keyword specifies some code to run if there is no case match

    default:
        cout << " Your Number is invalid." << endl;
        break;
    }
    
    return 0;
}
