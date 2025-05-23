//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
    if (mat.empty()) return mat; // Handle empty matrix

    int rows = mat.size();        // Rows count
    int cols = mat[0].size();     // Columns count
    
    k = k % cols;  // Optimize k

    for (int i = 0; i < rows; i++) {
        vector<int> temp;  // Temporary array for storing rotated row
        
        // Pehle k elements ko alag rakho
        for (int j = k; j < cols; j++) {
            temp.push_back(mat[i][j]);
        }
        // Baki bache hue elements ko last mein add karo
        for (int j = 0; j < k; j++) {
            temp.push_back(mat[i][j]);
        }

        // Wapas row mein copy kar do
        mat[i] = temp;
    }
    
    return mat;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
        cout << "~\n";
    }
}

// } Driver Code Ends