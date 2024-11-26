

// 1. Given an integer array nums, find the
subarray with the largest sum, and return its sum.
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    // Initialize the current sum and the maximum sum
    int current_sum = nums[0];  // Start with the first element of the array
    int max_sum = nums[0];      // Same for the maximum sum
    
    // Loop through the array starting from the second element
    for (int i = 1; i < nums.size(); i++) {
        // If current_sum + nums[i] is smaller than just nums[i], 
        // then start a new subarray from nums[i] itself
        if (current_sum + nums[i] < nums[i]) {
            current_sum = nums[i];
        } else {
            // Otherwise, keep adding the current number to the subarray
            current_sum = current_sum + nums[i];
        }

        // Update max_sum if current_sum is larger than max_sum
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    // Return the largest sum found
    return max_sum;
}

int main() {
    // Example array
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    // Call the function and display the result
    int result = maxSubArray(nums);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}

// 2.  Given an integer array arr[] of size n, the task is to find the count inversions of the given array.
Two array elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.
Input: arr[] = {7, 2, 6, 3}
Output: 4
Explanation: Given array has 4 inversions: (7, 2), (7, 6), (7, 3), (6, 3)

#include <iostream>
using namespace std;

int countInversions(int arr[], int n) {
    int inversionCount = 0;  // Initialize inversion count to 0

    // Loop through each element using the outer loop
    for (int i = 0; i < n - 1; ++i) {
        // Inner loop checks all elements after the current element
        for (int j = i + 1; j < n; ++j) {
            // If arr[i] > arr[j], it forms an inversion
            if (arr[i] > arr[j]) {
                inversionCount++;  // Increment the inversion count
            }
        }
    }

    return inversionCount;  // Return the total number of inversions
}

int main() {
    int arr[] = {7, 2, 6, 3};  // Input array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array

    // Call the function to count inversions and display the result
    int result = countInversions(arr, n);
    cout << "The number of inversions is: " << result << endl;  // Output: 4

    return 0;
}

// 3. Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Solve it without sorting.
Example:
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5

#include <iostream>
using namespace std;

int countInversions(int arr[], int n) {
	int inversionCount = 0;  // Initialize inversion count to 0

	// Loop through each element using the outer loop
	for (int i = 0; i < n - 1; ++i) {
		// Inner loop checks all elements after the current element
		for (int j = i + 1; j < n; ++j) {
			// If arr[i] > arr[j], it forms an inversion
			if (arr[i] > arr[j]) {
				inversionCount++;  // Increment the inversion count
			}
		}
	}

	return inversionCount;  // Return the total number of inversions
}

int main() {
	int arr[] = {7, 2, 6, 3};  // Input array
	int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array

	// Call the function to count inversions and display the result
	int result = countInversions(arr, n);
	cout << "The number of inversions is: " << result << endl;  // Output: 4

	return 0;
}

// 4. A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and
removing all non-alphanumeric characters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = “A man, a plan, a canal: Panama”
Output: true
Explanation: “amanaplanacanalpanama” is a palindrome.
Example 2:
Input: s = “race a car”;
Output: false

#include <iostream>
#include <cctype>  // for isalnum and tolower functions
using namespace std;

bool isPalindrome(string s) {
    int left = 0;               // Initialize the left pointer
    int right = s.length() - 1; // Initialize the right pointer
    
    // Loop until the left pointer is less than the right pointer
    while (left < right) {
        // Move the left pointer to the next alphanumeric character
        if (!isalnum(s[left])) {
            left++;
        }
        // Move the right pointer to the previous alphanumeric character
        else if (!isalnum(s[right])) {
            right--;
        }
        // If both characters are alphanumeric, compare them
        else {
            // Convert both characters to lowercase and compare
            if (tolower(s[left]) != tolower(s[right])) {
                return false;  // If they are not equal, it's not a palindrome
            }
            // Move both pointers towards the center
            left++;
            right--;
        }
    }
    return true; // If all comparisons are successful, it is a palindrome
}

int main() {
    // Test cases
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";

    // Call the function and display the result for both test cases
    cout << "Is first string a palindrome? " << (isPalindrome(s1) ? "true" : "false") << endl;
    cout << "Is second string a palindrome? " << (isPalindrome(s2) ? "true" : "false") << endl;

    return 0;
}

// 5. Given an array arr[] of size n, return an equilibrium index (if any) or -1 if no equilibrium index
exists. The equilibrium index of an array is an index such that the sum of elements at lower
indexes equals the sum of elements at higher indexes.
Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists.
Examples:
Input: arr[] = {-7, 1, 5, 2, -4, 3, 0}
Output: 4
Explanation: In 1-based indexing, 4 is an equilibrium index, because:
arr[1] + arr[2] + arr[3] = arr[5] + arr[6] + arr[7]
Input: arr[] = {1, 2, 3}
Output: -1
Explanation: There is no equilibrium index in the array.
Input:arr = {1, 3, 5, 2, 2}
Expected Output:2
Explanation: At index 2, the sum of elements on the left (1 + 3 = 4) is equal to the sum of
elements on the right (2 + 2 = 4).

#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int n) {
    // Calculate the total sum of the array
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int left_sum = 0;  // Initialize left sum as 0

    // Traverse the array to find equilibrium index
    for (int i = 0; i < n; i++) {
        // Right sum is total sum minus left sum and current element
        int right_sum = total_sum - left_sum - arr[i];

        // Check if left sum equals right sum
        if (left_sum == right_sum) {
            return i + 1;  // Return 1-based index
        }

        // Update left sum by adding current element
        left_sum += arr[i];
    }

    // If no equilibrium index is found, return -1
    return -1;
}

int main() {
    // Example test cases
    int arr1[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr2[] = {1, 2, 3};
    int arr3[] = {1, 3, 5, 2, 2};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    // Call the function and print the result
    cout << "Equilibrium index for arr1: " << findEquilibriumIndex(arr1, n1) << endl;
    cout << "Equilibrium index for arr2: " << findEquilibriumIndex(arr2, n2) << endl;
    cout << "Equilibrium index for arr3: " << findEquilibriumIndex(arr3, n3) << endl;

    return 0;
}

// 6. Given a sorted array A (sorted in ascending order), having N integers, find if there exists any
pair of elements (A[i], A[j]) such that their sum is equal to X.
a)Using Naive Approach
b)Using Two Pointer Technique
Input: A = [1, 2, 4, 5, 7, 11]
N = 6
X = 9
Expected Output: Yes
(Explanation: The pair (2, 7) sums to 9.)

#include <iostream>
using namespace std;

// Function to find if there exists a pair with sum equal to X using Naive Approach
bool naiveApproach(int A[], int N, int X) {
    // Check each pair using two loops
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == X) {
                return true;  // Pair found
            }
        }
    }
    return false;  // No pair found
}

// Function to find if there exists a pair with sum equal to X using Two Pointer Technique
bool twoPointerApproach(int A[], int N, int X) {
    int left = 0;      // Start pointer
    int right = N - 1; // End pointer

    // Continue searching as long as left pointer is less than right pointer
    while (left < right) {
        int sum = A[left] + A[right];

        if (sum == X) {
            return true;  // Pair found
        } else if (sum < X) {
            left++;  // Increase sum by moving left pointer to the right
        } else {
            right--;  // Decrease sum by moving right pointer to the left
        }
    }
    return false;  // No pair found
}

int main() {
    // Example input
    int A[] = {1, 2, 4, 5, 7, 11};
    int N = 6;  // Size of the array
    int X = 9;  // The sum we need to find

    // Calling naive approach
    if (naiveApproach(A, N, X)) {
        cout << "Yes (Naive Approach)" << endl;  // Output: Yes
    } else {
        cout << "No (Naive Approach)" << endl;
    }

    // Calling two pointer approach
    if (twoPointerApproach(A, N, X)) {
        cout << "Yes (Two Pointer Approach)" << endl;  // Output: Yes
    } else {
        cout << "No (Two Pointer Approach)" << endl;
    }

    return 0;
}

// 8. Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’
consecutive elements in the array(Using Sliding Window Technique)
Input : arr[] = {100, 200, 300, 400}, k = 2
Output : 700
Input : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.
Input : arr[] = {2, 3}, k = 3
Output : Invalid
There is no subarray of size 3 as size of whole array is 2.

#include <iostream>
using namespace std;

void findMaxSum(int arr[], int n, int k) {
    // If k is greater than n, we can't form a subarray of size k
    if (k > n) {
        cout << "Invalid" << endl;
        return;
    }

    // Step 1: Calculate the sum of the first 'k' elements
    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    // Step 2: Initialize the maximum sum with the first 'k' elements sum
    int max_sum = current_sum;

    // Step 3: Slide the window and calculate the sum for subsequent windows
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];  // Add the next element and remove the left-most element
        max_sum = max(max_sum, current_sum);  // Update the maximum sum if needed
    }

    // Step 4: Output the maximum sum
    cout << max_sum << endl;
}

int main() {
    // Test cases
    int arr1[] = {100, 200, 300, 400};
    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int arr3[] = {2, 3};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    int k = 2;  // Subarray size k for arr1
    cout << "Max sum for arr1 with k = 2: ";
    findMaxSum(arr1, n1, k);

    k = 4;  // Subarray size k for arr2
    cout << "Max sum for arr2 with k = 4: ";
    findMaxSum(arr2, n2, k);

    k = 3;  // Subarray size k for arr3 (invalid case)
    cout << "Max sum for arr3 with k = 3: ";
    findMaxSum(arr3, n3, k);

    return 0;
}

// 9. You are given an array of prices where prices[i] is the price of a given stock on an ith day. You
want to maximize your profit by choosing a single day to buy one stock and choosing a
different day in the future to sell that stock. Return the maximum profit you can achieve from
this transaction. If you cannot achieve any profit, return 0
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

#include <iostream>
#include <vector>
#include <algorithm>  // For std::min and std::max

using namespace std;

// Function to calculate the maximum profit
int maxProfit(vector<int>& prices) {
    // If there are less than 2 days, no transaction is possible
    if (prices.size() < 2) {
        return 0;
    }

    // Initialize the minimum price to a large value and maximum profit to 0
    int minPrice = prices[0];
    int maxProfit = 0;

    // Loop through the prices array
    for (int i = 1; i < prices.size(); i++) {
        // Update the minimum price encountered so far
        minPrice = min(minPrice, prices[i]);
        
        // Calculate the profit if we sold at prices[i] and bought at minPrice
        int profit = prices[i] - minPrice;
        
        // Update the maximum profit
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {
    // Example input
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    // Call the maxProfit function and output the result
    cout << "Maximum Profit: " << maxProfit(prices) << endl;

    return 0;
}


// 10. Given an integer array, find the maximum length subarray having a given sum.(USE
HASHMAP Concept)
Input:nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }target = 8
Output:{ -5, 5, 3, 5 }
Subarrays with sum 8 are { -5, 5, 3, 5 },{ 3, 5 },{ 5, 3 }
The longest subarray is { -5, 5, 3, 5 } having length 4.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find the longest subarray with the given sum
vector<int> longestSubarrayWithSum(vector<int>& nums, int target) {
    unordered_map<int, int> sumMap;  // To store first occurrence of each cumulative sum
    vector<int> result;  // To store the longest subarray
    int cumulativeSum = 0;  // To store the cumulative sum
    int maxLength = 0;  // To store the length of the longest subarray
    int startIndex = -1;  // To store the starting index of the longest subarray
    
    // Iterate over the array
    for (int i = 0; i < nums.size(); i++) {
        cumulativeSum += nums[i];  // Update the cumulative sum
        
        // If the cumulative sum equals the target, we have found a valid subarray
        if (cumulativeSum == target) {
            maxLength = i + 1;  // The length of the subarray is i+1 (from 0 to i)
            startIndex = 0;  // Starting from index 0
        }

        // If cumulativeSum - target exists in the map, update the longest subarray
        if (sumMap.find(cumulativeSum - target) != sumMap.end()) {
            int length = i - sumMap[cumulativeSum - target];  // Calculate the length of the subarray
            if (length > maxLength) {
                maxLength = length;
                startIndex = sumMap[cumulativeSum - target] + 1;  // The start index of the subarray
            }
        }

        // Store the first occurrence of the cumulative sum
        if (sumMap.find(cumulativeSum) == sumMap.end()) {
            sumMap[cumulativeSum] = i;  // Store the index of the first occurrence of cumulative sum
        }
    }

    // If no subarray is found, return an empty vector
    if (maxLength == 0) {
        return {};
    }

    // Extract the subarray from the original array
    for (int i = startIndex; i < startIndex + maxLength; i++) {
        result.push_back(nums[i]);
    }

    return result;
}

int main() {
    // Example input
    vector<int> nums = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int target = 8;

    // Call the function to get the longest subarray with the given sum
    vector<int> result = longestSubarrayWithSum(nums, target);

    // Output the result
    if (!result.empty()) {
        cout << "Longest subarray with sum " << target << ": ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No subarray found with sum " << target << endl;
    }

    return 0;
}
