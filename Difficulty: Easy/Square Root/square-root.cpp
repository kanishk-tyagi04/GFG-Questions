//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int x) {
    long long start = 0, end = x, mid, square;
    int answer = 0;
    
    while (start <= end) {
        mid = (start + end) / 2;
        square = mid * mid;
        
        if (square == x) {
            return mid;
        } else if (square < x) {
            answer = mid; 
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return answer;
}

        
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends