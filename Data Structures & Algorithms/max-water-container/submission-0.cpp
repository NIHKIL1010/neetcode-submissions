class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size() - 1;
        int area=0;
        //area=min(l,r)*(r-l);
        while(l<r && l<heights.size() && r>=0){
            int currarea=min(heights[l],heights[r])*(r-l);
            area=max(area,currarea);

            if(heights[l]<heights[r]){
                l++;
            }else if(heights[l]>heights[r]){
                r--;
            }else{
                l++;
            }

        }
        return area;
    }
};
