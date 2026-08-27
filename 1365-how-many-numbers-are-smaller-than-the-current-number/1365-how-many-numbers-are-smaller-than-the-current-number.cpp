class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count[101]={};
        for(int x:nums){
            count[x]++;
        }
        for(int i=1;i<=100;i++){
            count[i]+=count[i-1];
        }
        vector<int>ans;
        for(int x:nums){
            ans.push_back(x==0?0:count[x-1]);
        }
        return ans;
    }
};