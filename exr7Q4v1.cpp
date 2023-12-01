#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name[4];
    int mSalary[4];
    int i, k;
    long double annualSalary;
    for (i = 0; i < 4; i++)
    {
        cout << "\nEnter details for employee :: " << i + 1 << endl;
        cout << "Enter name : ";
        getline(cin, name[i]);
        cout << "Salary : ";
        cin >> mSalary[i];
        cin.ignore();
    }
    for (i = 0; i < 4; i++)
    {
        cout << endl;
        annualSalary = mSalary[i] * 12;
        if (annualSalary >= 250000)
        {
            cout << name[i] << " :: " << mSalary[i] << " :: " << annualSalary << " :: "
                 << "Tax to be paid";
        }
        else
        {
            cout << name[i] << " :: " << mSalary[i] << " :: " << annualSalary << " :: "
                 << "No Taxes";
        }
    }
    return 0;
}