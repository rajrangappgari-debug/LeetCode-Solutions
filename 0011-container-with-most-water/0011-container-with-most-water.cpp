class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0,rp=height.size()-1;  //lp=leftpoint(that bars of graph) & rp=rightpoint
        while(lp<rp){
            int water=rp-lp;
            int ht=min(height[lp],height[rp]);  //ht=height
            int currentwater=water*ht;
            maxwater=max(maxwater,currentwater);

            height[lp]<height[rp] ?lp++ :rp--;

        }
        return maxwater;
    
    }
};