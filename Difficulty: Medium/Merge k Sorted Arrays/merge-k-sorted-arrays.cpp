//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends

//User function Template for C++
#
struct Triplet {
    int r, c, val;
    Triplet(int r, int c, int val) : r(r), c(c), val(val) {}
    bool operator>(const Triplet& other) const {
        return val > other.val;
    }
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
         vector<int> result;

        priority_queue<Triplet, vector<Triplet>, greater<Triplet>> pq;

        for (int i = 0; i < K; ++i) {
            if (!arr[i].empty()) {
                pq.emplace(i, 0, arr[i][0]);
            }
        }
        while (!pq.empty()) {
            Triplet current = pq.top();
            pq.pop();

            result.push_back(current.val);
            if (current.c + 1 < arr[current.r].size()) {
                pq.emplace(current.r, current.c + 1, arr[current.r][current.c + 1]);
            }
        }

        return result;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    
cout << "~" << "\n";
}
	return 0;
}






// } Driver Code Ends