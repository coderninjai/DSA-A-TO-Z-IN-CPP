/*
class Solution {
public:
    int candy(vector<int>& ratings) {
        int sum = 1, l = 1;
        int n = ratings.size();

        while (l < n) {
            if (ratings[l] == ratings[l - 1]){

                sum += 1;
                l++;
                continue;
            }

            int peak = 1;
            while (l < n && ratings[l] > ratings[l - 1]) {
                peak += 1;
                sum += peak;
                l++;
            }
            int down = 1;
            while (l < n && ratings[l] < ratings[l - 1]) {
                sum += down;
                l++;
                down += 1;
              
            }
            if (peak < down)
                sum += down - peak;
           
        }
        return sum;
    }
};
*/