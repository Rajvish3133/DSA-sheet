class Solution {
public:
    bool check(vector<int>& nums) {
     int n=nums.size();
     vector<int>ans(nums.begin(),nums.end());
     for(int x=0;x<n;x++){
        for(int i=0;i<n;i++){
            nums[(i+x)%n]=ans[i];
        } 
         if(is_sorted(nums.begin(),nums.end())){
            return true;
         }
     }  return false;
    }
};
