class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>miss;
        int n=1;
        int i=0;
        while(miss.size()<k){
          if(i<arr.size()&&n==arr[i]){
             n++;
             i++;
          }else{
             miss.push_back(n);
             n++;
            }
            }
         return miss[k-1];
    }
};