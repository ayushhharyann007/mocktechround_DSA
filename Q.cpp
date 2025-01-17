#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    if (arr.size() < 2) {
        return -1; 
    }

    int firstLargest = arr[0];    
    int secondLargest = -1;       

    for (int num : arr) {
        if (num > firstLargest) {
            secondLargest = firstLargest; 
            firstLargest = num;           
        } else if (num > secondLargest && num != firstLargest) {
            secondLargest = num;          
        }
    }

    
    return (secondLargest == -1) ? -1 : secondLargest;
}

int main() {
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    vector<int> arr2 = {1, 1, 1, 1, 1};
    vector<int> arr3 = {5}; 
    vector<int> arr4 = {};  

    cout << findSecondLargest(arr1) << endl; 
    cout << findSecondLargest(arr2) << endl; 
    cout << findSecondLargest(arr3) << endl; 
    cout << findSecondLargest(arr4) << endl;

    return 0;
}