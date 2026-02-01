#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    int left = 0;
    int right = nums.size() - 1;

    // Swap elements from both ends until they meet
    while (left < right) {
        swap(nums[left], nums[right]);
        left++;
        right--;
    }

    cout << "Reversed Array: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
