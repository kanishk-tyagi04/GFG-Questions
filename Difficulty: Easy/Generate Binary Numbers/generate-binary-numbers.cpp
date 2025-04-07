//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n) {
    // Your code here
    queue<string>q;
    vector<string>result;
    q.push("1");
    for(int i=0;i<n;i++){
        string current=q.front();
        result.push_back(current);
        q.pop();
        q.push(current+"0");
        q.push(current+"1");
    }
    return result;
    
}



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends