#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string decToBinary(int n){
            string binary;
            while(n>0){
                int bit = n%2;
                n=n/2;
                binary.push_back('0'+ bit);
            }

            reverse(binary.begin(), binary.end());
            return binary;
        }
};