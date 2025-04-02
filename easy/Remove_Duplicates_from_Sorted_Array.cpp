class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int>s(nums.begin(),nums.end()); 
        int index=0;
        for(int value:s){
            nums[index++]=value;
        }
         return s.size(); 
    }    
};
