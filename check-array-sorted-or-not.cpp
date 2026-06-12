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

    bool isSorted = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}






// #include <iostream>
// using namespace std;

// int main()

// {

//     int n;

//     cout <<" Enter the size of an array:";

//     cin >>n;

//     int arr[n];
//     cout << " Enter the element of an array:";
//     for ( int i=0; i < n; i++)

//     cin >>  arr[i];



    


// }