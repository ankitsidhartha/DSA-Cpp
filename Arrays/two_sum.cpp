#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int required = target - nums[i];

        // Check if the required number was seen before
        if (seen.find(required) != seen.end()) {
            cout << "Indices: " << seen[required] << " and " << i << endl;
            return 0;
        }

        // Store the current number with its index
        seen[nums[i]] = i;
    }

    cout << "No valid pair found" << endl;
    return 0;
}
