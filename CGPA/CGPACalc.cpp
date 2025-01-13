#include <iostream>
#include <iomanip>

using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
float CG(int marksarr[], int crarr[], int n)
{
    int totalcredits = 0;
    float obtainedcredits = 0;
    for (int i = 0; i < n; i++)
    {
        totalcredits += crarr[i];
    }
    for (int j = 0; j < n; j++)
    {
        obtainedcredits += (((float)marksarr[j] / 10) + 1) * crarr[j];
    }
    return (float)obtainedcredits / totalcredits;
}
int main()
{
    int n;
    int marks, credit;
    int marksarr[100], creditsarr[100];
    cout << "Enter the number of subjects: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Subject " << i + 1 << endl;
        cout << "Enter your marks(out of 100): " << endl;
        cin >> marks;
        marksarr[i] = marks;
        cout << "Enter the credits for subject: " << endl;
        cin >> credit;
        creditsarr[i] = credit;
    }
    cout << "Marks: ";
    printarr(marksarr, n);
    cout << "Credits: ";
    printarr(creditsarr, n);
    cout << "\nYour calculated CGPA is " << fixed << setprecision(2) << CG(marksarr, creditsarr, n)<<".";
}
