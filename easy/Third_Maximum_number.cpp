class Solution {
public:
    int thirdMax(vector<int>& nums) { 
     int n=nums.size();  
     vector<int>ans;
     set<int>s;
      sort(nums.begin(),nums.end());
    for(int i:nums){
        s.insert(i);
    } for(int i:s){
        ans.push_back(i);
    }  
      if(ans.size()<3){
        return ans[ans.size()-1];
      } 
      return ans[ans.size()-3];
    }
};
