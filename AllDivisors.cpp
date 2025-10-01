#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int>printDivisors(int n){
            vector<int> ans;
            for(int i=1; i<=sqrt(n); i++){
                int j=n/i;
                if(n%i == 0){
                    ans.push_back(i);
                    if(j!=i)
                        ans.push_back(j);
                }
            }
            return ans;
        }
};