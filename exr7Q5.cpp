#include <iostream>
using namespace std;
int main()
{
    int i, j, u, x, occurance;
    bool did = 0;
    cout << "How many numbers you will use : ";
    cin >> u;
    int arr[u], temp[u];
    for (i = 0; i < u; i++) // user inputs
    {
        cout << "Enter value : ";
        cin >> arr[i];
    }
    for (i = 0; i < u; i++) // initialized temporary array
        temp[i] = -3311;

    for (i = 0; i < u; i++) // checking & operations
    {
        for (x = 0; x < u; x++)
        {
            if (arr[i] == temp[x])
            {
                did = 1;
                break;
            }
            else
                did = 0;
        }
        if (!did) // will count if not counted previously
        {
            occurance = 0;
            for (j = i; j < u; j++)
            {
                if (arr[i] == arr[j])
                    occurance++;
            }
            temp[i] = arr[i]; // counted value will be added to the temporary array
            cout << endl
                 << arr[i] << " occured " << occurance << " times";
        }
    }
    cout << "\n\n\nPrinting the temporary array :\n"; // temp folder just for fun & checking
    for (i = 0; i < u; i++)
    {
        cout << temp[i] << endl;
    }
    return 0;
}