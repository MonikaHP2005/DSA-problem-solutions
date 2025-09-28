#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int lcm (int a, int b){
            int greatest = max(a,b);
            int smallest = min(a,b);

            for(int i=greatest; i<=a*b; i+=greatest){
                if(i%smallest == 0)
                    return i;
            }
        }
};