//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int end = arr.size()-1;
        int st = 0, mid = 0;
        while(mid <= end){
            if(arr[mid] == 0){
                swap(arr[mid],arr[st]);
                mid++;
                st++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else if(arr[end] == 2){
                end--;
            }
            else if(arr[mid] == 2){
                swap(arr[mid],arr[end]);
                    end--;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends