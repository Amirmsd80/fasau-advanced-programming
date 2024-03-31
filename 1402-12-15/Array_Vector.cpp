#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int numbers[4]; 

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; 

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
        };

    //Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.


    cout << cars[0] << endl; //Outputs "Volvo"
        
    cout << letters[0][2] << endl; //Outputs "C"

    

    vector<vector<int>> list{
        {1, 2},
        {3, 4, 5},
        {6, 7}};

    cout << list.at(0).at(2) << endl; // This line and the next line do the same thing but this line give you a warning if there is no element in the given index

    cout << list[0][2] << endl;

    return 0;
}
