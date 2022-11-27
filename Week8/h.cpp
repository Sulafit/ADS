#include <bits/stdc++.h>
using namespace std;
 
// function to find the stem (longest common
// substring) from the string array
string findstem(vector<string> arr)
{
    // Determine size of the array
    int n = arr.size();
 
    // Take first word from array as reference
    string s = arr[0];
    int len = s.length();
 
    string res = "";
 
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            // generating all possible substrings
            // of our reference string arr[0] i.e s
            string stem = s.substr(i, j);
            int k = 1;
            for (k = 1; k < n; k++) {
                // Check if the generated stem is
                // common to all words
                if (arr[k].find(stem) == std::string::npos)
                    break;
            }
 
            // If current substring is present in
            // all strings and its length is greater
            // than current result
            if (k == n && res.length() < stem.length())
                res = stem;
        }
    }
 
    return res;
}
 
// Driver code
int main()
{
    int n;
    cin >> n;
    vector <string> arr;
    for(int i = 0 ; i < n;i++){
        string k;

        cin >>k;
        arr.push_back(k);

    }
 
    // Function call
    string stems = findstem(arr);
    cout << stems << endl;
}
 
// This code is co