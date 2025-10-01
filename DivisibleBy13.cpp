#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool divBy13(string &s){
            int remainder =0;
            for(char c: s){
                int digit = c - '0';
                remainder = (remainder*10 + digit) % 13;
            }
            if(remainder == 0)
                return true;
            else
                return false;
        }
};
