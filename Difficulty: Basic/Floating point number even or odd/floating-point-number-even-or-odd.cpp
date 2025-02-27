//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
bool isEven(string s,int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (isEven(s,n))
           cout << "EVEN\n";
        else
           cout << "ODD\n";
        
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends


bool isEven(string s,int n)
{
    int num = 0;
    for(int i=0;i<n;i++){
        if(s[n-i-1] != '0' && s[n-i-1] != '.'){
            num = s[n-i-1];
            break;
        }
    }
    if(num&1) return false;
    else return true;
    
}