class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     
      vector<int>result(nums.size(),0);
      int freq=0;
        for(int i=0;i<nums.size();i++){
             int freq=0;
            for(int j=0;j<nums.size();j++){
            if(j != i &&   nums[j] < nums[i]){
            
          freq++;
            }
            
            }
          result[i]=freq; 
        }
        return result;
    }
};