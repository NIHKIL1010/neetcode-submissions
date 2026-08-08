class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        vector<int>s11(26,0);
        vector<int>s22(26,0);
        for(auto it :s1){
            s11[it-'a']++;
        }
        int left=0,right=0;
        for(right;right<s2.size();right++){
            s22[s2[right]-'a']++;

            if(right-left+1 > s1.size()){
                s22[s2[left]-'a']--;
                left++;
            }

            if(right-left+1 == s1.size() && s11==s22){
                return true;
            }
        }
        return false;
    }
};
