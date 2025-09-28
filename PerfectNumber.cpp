#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool perfectNumber(int n){
            int sum = 0;
            for(int i=1; i<=sqrt(n); i++){
                if(n%i == 0)
                    sum = sum + i + (n/i);
            }
            sum = sum - n;
            if(sum==n)
                return true;
            else
                return false;
        }
};