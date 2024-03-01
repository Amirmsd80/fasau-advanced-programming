#include <iostream>

using namespace std;

int main()
{

    // While loop
    int i = 0;
    cout << endl << "While loop:" << endl;
    while (1)
    {
        cout << i << endl;
        i++;

        if (i == 5) break;
    }

    // For loop
    cout << endl << "For loop:" << endl;
    for (int i = 0; i <= 10; i = i + 2)
    {
        cout << i << endl;
    }

    // Foreach loop
    cout << endl << "Foreach loop:" << endl;
    int my_numbers[5] = {10, 20, 30, 40, 50};
    for (int i : my_numbers)
    {
        cout << i << endl;
    }

    return 0;
}