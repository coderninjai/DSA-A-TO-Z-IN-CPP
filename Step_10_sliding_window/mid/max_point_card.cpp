// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int size=cardPoints.size()-1;
//         int lsum=0,rsum=0,maxsum=0;
//         for(int i=0;i<k;i++){
//             lsum=lsum+cardPoints[i];

//         }
//         maxsum=lsum;
//         int rpoint=size;
//         for(int i=k-1;i>=0;i--){
//             lsum=lsum-cardPoints[i];
//             rsum=rsum+cardPoints[rpoint];
//             rpoint--;
//             maxsum=max(maxsum,lsum+rsum);
//         }
//         return maxsum;
//     }
// };