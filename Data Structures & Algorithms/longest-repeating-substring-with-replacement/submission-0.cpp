class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> store(26);
        int l=0;int r=0;
        int maxOcc=0;
        int ans =0;

        for(int r=0;r<s.size();r++){
            store[s[r]-'A']++;
            maxOcc=max(maxOcc,store[s[r]-'A']);

            while((r-l+1)-maxOcc > k){
                store[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
