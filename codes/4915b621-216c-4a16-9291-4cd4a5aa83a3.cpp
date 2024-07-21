#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Dictionary to store the value and its index
    unordered_map<int, int> num_to_index;
    
    // Iterate through the list of numbers
    for (int index = 0; index < nums.size(); ++index) {
        // Calculate the complement
        int complement = target - nums[index];
        
        // Check if the complement is already in the dictionary
        if (num_to_index.find(complement) != num_to_index.end()) {
            // If found, return the indices of the two numbers
            return {num_to_index[complement], index};
        }
        
        // Otherwise, add the number and its index to the dictionary
        num_to_index[nums[index]] = index;
    }
    
    // If no solution is found, return an empty vector
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;  // Output: [0, 1]
    return 0;
}