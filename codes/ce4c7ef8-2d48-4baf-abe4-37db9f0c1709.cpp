#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map; // to store the value and its index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i};
        }
        num_map[nums[i]] = i;
    }
    return {}; // this line will never be reached because the problem guarantees exactly one solution
}

int main() {
    vector<pair<vector<int>, int>> test_cases = {
        {{2, 7, 11, 15}, 9},
        {{3, 2, 4}, 6}
    };

    for (const auto& test : test_cases) {
        const vector<int>& nums = test.first;
        int target = test.second;
        vector<int> result = twoSum(nums, target);
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    }

    return 0;
}