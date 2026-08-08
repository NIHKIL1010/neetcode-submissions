class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> s1(128,0),t1(128,0);
        int uniqe=0;
        for( auto it : t){
            if(!t1[it]) uniqe++;
            t1[it]++;
        }
        int left=0;
        int create=0;
        int bestLength=INT_MAX;
        int bestStart=-1;
        
        for(int right=0;right<s.size();right++){
            s1[s[right]]++;
            //only counts as "matched" once we have enough of this char
            if(t1[s[right]] && s1[s[right]] == t1[s[right]]) create++;

            while(uniqe==create){
                if(right-left+1 < bestLength){
                    bestLength=right-left+1;
                    bestStart=left;
                }
                s1[s[left]]--;
                if(t1[s[left]] && s1[s[left]]<t1[s[left]]) create--;
                left++;
            }

        }
        return bestStart == -1 ? "" : s.substr(bestStart,bestLength);
    }
};
