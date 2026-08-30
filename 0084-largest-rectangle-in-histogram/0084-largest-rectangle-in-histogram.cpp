class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
         int n=heights.size();
         int maxarea=0;
        for(int i=0;i<n;i++){
            while(!st.empty()&&heights[i]<heights[st.top()]){
                int left=0;
                int index=st.top();
                st.pop();
                if(!st.empty()){
                    left=st.top();
                }else{
                    left=-1;
                }
                int right=i;
                int width=right-left-1;
                int area=width*heights[index];
                if(area>maxarea){
                    maxarea=area;
                }
               
            }
            st.push(i);
        }
        while(!st.empty()){
                int left=0;
                int index=st.top();
                st.pop();
                if(!st.empty()){
                    left=st.top();
                }else{
                    left=-1;
                }
                int right=n;
                int width=right-left-1;
                int area=width*heights[index];
                if(area>maxarea){
                    maxarea=area;
                }

        }
        return maxarea;
    }
};