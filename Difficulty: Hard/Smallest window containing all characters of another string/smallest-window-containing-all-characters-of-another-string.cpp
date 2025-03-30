//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest window in the string s1 consisting
    // of all the characters of string s2.
    string smallestWindow(string &s1, string &s2) {
        // Your code here
        if(s1.size()<s2.size()) return "";
        int left=0,right=0;
        int minlen=INT_MAX;
        int count=0;
        int start=-1;
        vector<int>freq_s1(256,0),freq_s2(256,0);
        for(char ch: s2){
            freq_s2[ch]++;
        }
        for(right=0;right<s1.size();right++){
            freq_s1[s1[right]]++;
            if(freq_s2[s1[right]]>0 && freq_s1[s1[right]]<=freq_s2[s1[right]]){
                count++;
            }
            while(count==s2.size()){
                int minwindow=right-left+1;
                if(minwindow<minlen){
                    minlen=minwindow;
                    start=left;
                }
                freq_s1[s1[left]]--;
            if(freq_s2[s1[left]]>0 && freq_s1[s1[left]]<freq_s2[s1[left]]){
                count--;
            }
            left++;
            }
            
        }
        return (start==-1)?"":s1.substr(start,minlen);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        Solution obj;
        string str = obj.smallestWindow(s1, s2);
        if (str.size() == 0) {
            cout << "\"\"" << endl;
        } else {
            cout << str << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends