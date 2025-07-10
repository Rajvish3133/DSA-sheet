class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      int n=nums.size(); vector<int>ans;   
      unordered_map<int,int>freq;          // Using Unordered map.
      for(int num:nums){
        freq[num]++;
      } 
       for(auto it:freq){
        if(it.second>=2){
            ans.push_back(it.first);
        }
       }  return ans;
    }
};
