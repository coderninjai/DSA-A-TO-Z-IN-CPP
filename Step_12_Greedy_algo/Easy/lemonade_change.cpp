/*
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0;
        int n=bills.size();


        for( int i=0;i<n;i++){
            if(bills[i]==5){
                f++;
            }else if (bills[i]==10){
                if(f){
                    t++;
                    f--;
                }else{
                    return false;
                }
            }else{
                if(t>=1&&f>=1){
                    f-=1;
                    t-=1;
                }else if (f>=3){
                    f-=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
*/