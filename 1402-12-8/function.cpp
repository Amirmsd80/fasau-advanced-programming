#include <iostream>
#include <string.h>

using namespace std;

// Add this if you declared your function after the main function.
bool check_even(int);

int main()
{
    int num = 3;

    check_even(num) ? cout << "Number is even." : cout << "Number is odd.";

    return 0;
}

bool check_even(int num)
{
    return num % 2 == 0 ? true : false;
}
