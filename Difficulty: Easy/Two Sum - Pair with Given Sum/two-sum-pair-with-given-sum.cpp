//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int i = 0, j = n-1;
        if(n == 1) return false;
        while(i<j){
            int sum = arr[i] + arr[j];
            if(sum == target) return true;
            else if(sum < target) i++;
            else j--;
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends