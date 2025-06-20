#include <iostream>
#include <vector> // vector ke liye zaroori
using namespace std;

class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        int first = nums[0];
        int last = nums[nums.size() - 1];
        return first + last;
    }
};

int main() {
    Solution obj;

    // Sample input vector
    vector<int> numbers = {2, 20, 30, 40};

    // Function call with vector passed as argument
    int result = obj.sumOfFirstAndLast(numbers);

    cout << "Sum of first and last: " << result << endl; // Output: 50

    return 0;
}
