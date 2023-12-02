#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int mango[5], orange[5], bananas[5];
    int i, m, o, b, t;
    for (i = 0; i < 5; i++)
    {
        cout << "\nEnter fruits sale for customer " << i + 1 << endl;
        cout << "Enter No of Mangoes : ";
        cin >> mango[i];
        cout << "Enter No of Oranges : ";
        cin >> orange[i];
        cout << "Enter No of Bananas : ";
        cin >> bananas[i];
    }
    cout << "\n---------------------------------------------------------------\n";
    cout << " Customer #     Mangoes     Oranges     Bananas     Total Bill\n";
    cout << "---------------------------------------------------------------\n";
    for (i = 0; i < 5; i++)
    {
        t = (mango[i] * 20) + (orange[i] * 10) + (bananas[i] * 5);
        cout << setw(6) << i + 1 << setw(14) << mango[i] << setw(12) << orange[i] << setw(12) << bananas[i] << setw(12) << t << " Rs\n";
    }
    cout << endl
         << endl;
    return 0;
}