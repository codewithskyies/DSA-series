// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int j = 0;  // position to place next non-zero element

//     // Move non-zero elements forward
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             arr[j] = arr[i];
//             j++;
//         }
//     }

//     // Fill remaining positions with 0
//     while (j < n)
//     {
//         arr[j] = 0;
//         j++;
//     }

//     cout << "Array after moving zeroes: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

// Function defined OUTSIDE main
void moveZeroes(vector<int>& nums) {
    int i = 0;

    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
