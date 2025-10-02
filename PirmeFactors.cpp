#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> primeFactors(int n){
        vector<int> ans;
            if(n%2 == 0){
                ans.push_back(2);
                while(n%2 == 0)
                    n=n/2;
            }

            for(int i=3; i*i<=n; i=i+2){
                if(n%i == 0){
                    ans.push_back(i);
                    while(n%i == 0)
                        n=n/i;
                }
            }

            if(n>1)
                ans.push_back(n);
        }
};