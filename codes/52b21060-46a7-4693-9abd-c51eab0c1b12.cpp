#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> sortedSquaredArray(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    int left = 0, right = n - 1;
    int position = n - 1;
    
    while (left <= right) {
        int leftSquare = arr[left] * arr[left];
        int rightSquare = arr[right] * arr[right];
        
        if (leftSquare > rightSquare) {
            result[position] = leftSquare;
            left++;
        } else {
            result[position] = rightSquare;
            right--;
        }
        position--;
    }
    
    return result;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    vector<int> result = sortedSquaredArray(arr);
    
    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}