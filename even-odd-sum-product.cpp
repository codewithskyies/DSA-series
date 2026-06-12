#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int oddSum = 0;
    int evenProduct = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)   // even index
        {
            evenProduct *= arr[i];
        }
        else              // odd index
        {
            oddSum += arr[i];
        }
    }

    cout << "Sum of odd index elements = " << oddSum << endl;
    cout << "Product of even index elements = " << evenProduct << endl;

    return 0;
}
