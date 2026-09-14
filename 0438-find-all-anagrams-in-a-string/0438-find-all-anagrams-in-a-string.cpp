class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>freqp(26,0);
        vector<int>freqs(26,0);
        vector<int>ans;
        for(int i=0;i<p.size();i++){
            freqp[p[i]-'a']++;
        }
        int left=0;
        for(int right=0;right<s.size();right++){
            freqs[s[right]-'a']++;
            if(right-left+1>p.size()){
                freqs[s[left]-'a']--;
                left++;
            }
            if(right-left+1==p.size()&&freqs==freqp){
                ans.push_back(left);
            }
        }
       return ans; 
    }
};