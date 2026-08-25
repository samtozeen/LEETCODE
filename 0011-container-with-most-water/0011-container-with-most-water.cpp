class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> ans;
        int volume;
        int maxvolume=0;
        int n=height.size();
        int left=0;
        int right=n-1;
        for(int i=0;i<n;i++){
            int dis=right-left;
            int width;
            if(height[left]>height[right]){
                width=height[right];
                right--;
            }
            else
            {
                width=height[left];
                left++;
            }
            volume=width*dis;
            if(volume>maxvolume){
                maxvolume=volume;
            }
        }
        return maxvolume;
        
    }
};