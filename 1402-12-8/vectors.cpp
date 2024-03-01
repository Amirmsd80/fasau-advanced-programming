#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
    vector<int> v1 {1, 2, 3};

    // Iterate over the elements
    cout << "Elements of v1: ";
    for (int i : v1) {
        cout << i << "  ";
    }

    // Add elements to the end of the vector
    v1.push_back(4);
    v1.push_back(5);

    // Access an element by its index
    int i = 2;
    cout << "\nv1 at index " << i << " is: " << v1[i];    // Returns a garbage value if index is out of range
    cout << "\nv1 at index " << i << " is: " << v1.at(i); // Returns an exception if index is out of range (Recommended)
    
    // Change an element at a certain index
    i = 1;
    v1.at(i) = 5;
    
    // Delete the last element
    v1.pop_back();

    // Other useful methods
    // size()	returns the number of elements present in the vector
    // clear()	removes all the elements of the vector
    // front()	returns the first element of the vector
    // back()	returns the last element of the vector
    // empty()	returns 1 (true) if the vector is empty

    return 0;
}
