#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter the target: ";
    cin >> target;

    int low = 0;
    int hi = n - 1;

    bool found = false;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (arr[mid] == target)
        {
            found = true;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    if (found)
    {
        cout << "Target found";
    }
    else
    {
        cout << "Target not found";
    }

    return 0;
}