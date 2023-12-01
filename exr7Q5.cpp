#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int i, j, occ, passed = -3311;
    for (i = 0; i < 10; i++)
    {
        cout << " value : ";
        cin >> arr[i];
    }
    for (i = 0; i < 10; i++)
    {
        // if (arr[j] == passed)
        //     continue;
        occ = 0;
        for (j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j])
                occ++;
        }
        // if (occ > 1)
        //     passed = arr[j];
        cout << endl;
        cout << arr[i] << " occurs " << occ << " times in the array";
    }
    return 0;
}