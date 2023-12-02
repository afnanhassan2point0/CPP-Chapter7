#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of players : ";
    cin >> n;
    int scores[n][n];
    int i, j;
    for (i = 0; i < n; i++) // user inputs
    {
        for (j = 0; j < n; j++)
        {
            cout << "Player :: " << i << j << " Enter score : ";
            cin >> scores[i][j];
        }
    }
    cout << "\n\n Showing the scores matrix \n";
    for (i = 0; i < n; i++) // matrix of scores
    {
        for (j = 0; j < n; j++)
        {
            cout << setw(4) << scores[i][j];
        }
        cout << endl;
    }
    int r, p;
    while (true)
    {
        cout << "\n\nEnter row no : ";
        cin >> r;
        cout << "Enter player no : ";
        cin >> p;
        for (i = 0; i < n; i++)
        {
            if ((i + 1) == r)
            {
                for (j = 0; j < n; j++)
                {
                    if ((j + 1) == p)
                    {
                        cout << "Player : " << j + 1 << " row : " << i + 1 << " score : " << scores[i][j];
                    }
                }
            }
        }
    }
    return 0;
}