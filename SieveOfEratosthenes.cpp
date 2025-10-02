#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> sieve(int n){
            vector<int> ans;
            for(int i =2; i<=n; i++){
                int count = 0;
                for(int j=2; j<=sqrt(i); j++){
                    if(i%j==0){
                        count++;
                        break;
                    }
                    else
                        continue;
                }
                if(count==0)
                    ans.push_back(i);
            }
            return ans;
        }
};