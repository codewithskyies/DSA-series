#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(nums) / sizeof(nums[0]);

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {
            cout << "Indices: " << mp[complement] << " and " << i << endl;
            return 0;
        }

        mp[nums[i]] = i;
    }

    cout << "No solution found";
    return 0;
}
