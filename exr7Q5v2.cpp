#include <iostream>
#include <string>
using namespace std;
int main()
{
    char nam[5][40];
    int pay[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "\nEnter details for employee : " << i + 1 << endl;
        cout << "Enter name : ";
        gets(nam[i]);
        // cin.getline(nam[i], 40);
        cout << "Enter salary : ";
        cin >> pay[i];
        cin.ignore();
    }
    for (i = 0; i < 5; i++)
    {
        cout << nam[i] << endl
             << pay[i] << endl;
    }
    return 0;
}