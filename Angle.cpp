#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
        double getAngle(string& s){
            int hours = stoi(s.substr(0,2));
            int minutes = stoi(s.substr(3,2));

            if(hours>12)
                hours = hours-12;
            
            double hour_angle = (hours*30) + (minutes*0.5);
            double min_angle = minutes*6;

            double angle = abs(hour_angle-min_angle); 

            if(angle>180)
                angle = 360-angle;
            return angle;
        }
};