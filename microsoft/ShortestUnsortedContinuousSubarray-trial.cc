// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to traverse and
// // print the array
// int findUnsortedSubarray(vector<int> &nums)
// {
//     int i, j, start, end;
//     cout << "Array: ";
//     for (i = 1; i < nums.size(); i++)
//     {
//         if (nums[i] < nums[i + 1] && nums[i] < nums[i - 1])
//         {
//             start = i;
//         }
//     }

//     for (j = nums.size(); j > 0; j--)
//     {
//         if (nums[j] > nums[j + 1] && nums[j] > nums[j - 1])
//         {
//             end = j;
//         }
//     }

//     return end - start + 1;
// }


// #include <iostream>
// #include <algorithm>
// #include <climits>
// #include<vector>

// using namespace std;

// int findUnsortedSubarray(vector<int>& nums) {
//     int start = 0, end = nums.size() - 1;
//     while (start < end && nums[start] <= nums[start + 1]) start++;
//     while (start < end && nums[end] >= nums[end - 1]) end--;

//     int minVal = INT_MAX, maxVal = INT_MIN;
//     for (int i = start; i <= end; i++) {
//         minVal = min(minVal, nums[i]);
//         maxVal = max(maxVal, nums[i]);
//     }

//     while (start > 0 && nums[start - 1] > minVal) start--;
//     while (end < nums.size() - 1 && nums[end + 1] < maxVal) end++;

//     return end - start + 1;
// }

// int main() {
//     vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
//     cout << findUnsortedSubarray(nums) << endl;

//     nums = {1, 3, 5, 2, 4, 6, 7};
//     cout << findUnsortedSubarray(nums) << endl;

//     nums = {1, 2, 3, 4, 5, 6, 10};
//     cout << findUnsortedSubarray(nums) << endl;

//     nums = {2, 1};
//     cout << findUnsortedSubarray(nums) << endl;

//     nums = {3, 1, 2};
//     cout << findUnsortedSubarray(nums) << endl;

//     return 0;
// }
