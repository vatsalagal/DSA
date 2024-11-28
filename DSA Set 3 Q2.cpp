#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;  // Input size of the array
    int A[N];
    
    // Read the array elements
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // A set to store the distinct OR values
    unordered_set<int> or_results;

    // For each element in the array, calculate the OR of all subarrays starting from that element
    for (int i = 0; i < N; ++i) {
        int current_or = 0;

        // Traverse all subarrays starting from A[i]
        for (int j = i; j < N; ++j) {
            current_or |= A[j];  // Update the OR for the subarray A[i..j]
            or_results.insert(current_or);  // Insert the OR into the set (duplicates will be ignored)
        }
    }

    // Now, calculate the OR of all distinct OR results
    int final_or = 0;
    for (int or_value : or_results) {
        final_or |= or_value;  // Cumulative OR of all distinct OR values
    }

    // Output the final result
    cout << final_or << endl;

    return 0;
}
