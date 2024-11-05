
// 1. Program to count total number of negative numbers in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int negativeCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Total number of negative numbers in the array: " << negativeCount << endl;

    return 0;
}


// 2. Program to find the max of 5 integers.
#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    int maxNumber = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}


// 3. Program to merge two sorted arrays.
#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " sorted elements for the first array:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " sorted elements for the second array:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int mergedArr[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, mergedArr);

    cout << "Merged array:" << endl;
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}

// 4. Program to reverse the order of 7 integers.
#include <iostream>
using namespace std;

int main() {
    int arr[7];
    cout << "Enter 7 integers:" << endl;

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 7 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[7 - i - 1];
        arr[7 - i - 1] = temp;
    }

    cout << "Reversed array:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// 5. Program to check if the array is a palindrome.
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is in palindrome order." << endl;
    } else {
        cout << "The array is not in palindrome order." << endl;
    }

    return 0;
}

// 6. Program to search a number in an array and return the first occurrence.
#include <iostream>
using namespace std;

int main() {
    int n, searchNumber, index = -1;

    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> searchNumber;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNumber) {
            index = i;
            break;
        }
    }

    cout << "Index of first occurrence: " << index << endl;

    return 0;
}

// 7. Program to print all unique numbers in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique numbers in the array:" << endl;
    bool foundUnique = false;

    
    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
            foundUnique = true;
        }
    }

    if (!foundUnique) {
        cout << "No unique numbers found." << endl;
    }

    cout << endl;

    return 0;
}


// 8. Program to count the frequency of each number in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements of the array (values between 0 to 100):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int frequency[101] = {0};

    
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    
    cout << "Frequency of each number in the array:" << endl;
    for (int i = 0; i <= 100; i++) {
        if (frequency[i] > 0) {
            cout << i << ": " << frequency[i] << endl;
        }
    }

    return 0;
}



// 9. Program to count total number of duplicate numbers in an array.
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    int duplicateCount = 0;
    for (const auto& pair : frequency) {
        if (pair.second > 1) {
            duplicateCount++;
        }
    }

    cout << "Total number of duplicate numbers: " << duplicateCount << endl;

    return 0;
}


// 10. Function to print a parallelogram pattern.
#include <stdio.h>

void printParallelogram(int rows, int cols) {

    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        
        for (int k = 0; k < cols; k++) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    printParallelogram(rows, cols);

    return 0;
}


// 11. Function to print a right triangle pattern.
#include <stdio.h>

void printRightTriangle(int rows) {
    
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int rows;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    printRightTriangle(rows);

    return 0;
}


// 12. Function to print a half-diamond pattern.
#include <stdio.h>

void printHalfDiamond(int cols) {
    
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = cols - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int cols;
    
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    printHalfDiamond(cols);

    return 0;
}


// 13. Function to print a diamond pattern (only odd number of rows allowed).
#include <stdio.h>

int printDiamond(int rows) {
    if (rows % 2 == 0) {
        printf("Error: The number of rows must be an odd number.\n");
        return 0;
    }

    int n = (rows + 1) / 2;

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        printf("\n");
    }

    
    for (int i = n - 1; i >= 1; i--) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 1;
}

int main() {
    int rows;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    if (printDiamond(rows)) {
        printf("Diamond pattern printed successfully.\n");
    }

    return 0;
}



// 14. Function to print alternating pattern of ascending and descending numbers.
#include <stdio.h>

void printPattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            
            for (int j = 1; j <= cols; j++) {
                printf("%d", j);
            }
        } else {
            
            for (int j = cols; j >= 1; j--) {
                printf("%d", j);
            }
        }
        
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    printPattern(rows, cols);

    return 0;
}


// 15. Function to print a bordered pattern with 1's and 0's inside.
#include <stdio.h>

void printPattern(int rows, int cols) {
    
    if (rows < 1 || cols < 1) {
        printf("Error: The number of rows and columns must be at least 1.\n");
        return;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    printPattern(rows, cols);

    return 0;
}

// 16. Function to print a pattern with increasing and fixed numbers.
#include <stdio.h>

void printPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        
        for (int j = i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        
        for (int k = rows; k > i + 1; k--) {
            printf("%d", rows);
        }
        
        printf("\n");
    }
}

int main() {
    int rows;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    printPattern(rows);

    return 0;
}
