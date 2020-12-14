#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float arr[100], sum=0.0, average;

    cout << "Enter array size : ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! array size should be in range of (1 to 100)." << endl;
        cout << "Enter the array size again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout <<"arr["<< i + 1 << "] : ";
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}