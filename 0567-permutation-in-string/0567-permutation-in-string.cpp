class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()){
            return false;
        }
        int freq[26]={0};
        int n=s1.length();
        for(int i=0;i<n;i++){
           freq[s1[i]-'a']++;
        }
        int freq2[26]={0};
        for(int i=0;i<n;i++){
            freq2[s2[i]-'a']++;
        }
        bool match=true;
        for(int i=0;i<26;i++){
            if(freq[i]!=freq2[i]){
                match=false;
                break;
            }
            
        }
        if(match)return true;
        for(int i=n;i<s2.length();i++){
            freq2[s2[i-n]-'a']--;
            freq2[s2[i]-'a']++;
            bool match2=true;
          for(int j=0;j<26;j++){
            if(freq[j]!=freq2[j]){
                match2=false;
                break;
            }
            
        }
        if(match2)return true;
        }
        
     return 0;   
    }
};