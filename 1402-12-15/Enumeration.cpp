#include <iostream>
#include <string>

using namespace std;

// Here, the name of the enumeration is year. And months of the year are values of type year

enum year
{
    // By default, Jan is 1, Feb is 2 and so on. You can change the default value of an enum element during declaration (if necessary).

    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    Jul = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12
} my_data;

int main()
{
    my_data = Jan;
    
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    switch (my_data)
    {
    case 1 ... 12:
        cout << "It is " << months[my_data - 1] << "!" << endl;
        break;

    default:
        break;
    }

    return 0;
}
