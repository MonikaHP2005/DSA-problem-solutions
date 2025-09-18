#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> FloorandCeil(int a, int b){
        int floorVal, ceilVal, q;
        
        floorVal = a/b;
        if((a^b)<0 && a%b!=0)
            floorVal--;

        ceilVal = a/b;
        if((a^b)>0 && a%b!=0)
            ceilVal++;

        return {floorVal, ceilVal};
    }
};