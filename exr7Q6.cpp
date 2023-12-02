#include <iostream>
using namespace std;
int main()
{
    int i, u, gradeA = 0, gradeB = 0, gradeC = 0, gradeF = 0;
    float tMarks, percentage;
    cout << "Enter no of students : ";
    cin >> u;
    cout << "Enter Total Marks : ";
    cin >> tMarks;
    int student[u];
    cout << endl;
    for (i = 0; i < u; i++)
    {
        cout << "Enter marks of student " << i + 1 << " :: ";
        cin >> student[i];
        percentage = student[i] / tMarks * 100;
        if (percentage > 79)
            gradeA++;
        else if (percentage > 59)
            gradeB++;
        else if (percentage > 39)
            gradeC++;
        else
            gradeF++;
    }
    cout << "\n Here are the results details : \n";
    cout << "\n Grade A :: " << gradeA;
    cout << "\n Grade B :: " << gradeB;
    cout << "\n Grade C :: " << gradeC;
    cout << "\n Grade F :: " << gradeF;
    cout << endl
         << endl;
    return 0;
}