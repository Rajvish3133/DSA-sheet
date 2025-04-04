class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n=nums.size();
     vector<int>ans;
     unordered_map<int,int>freq;
     for(int num:nums){
        freq[num]++;
     }
     for(auto it:freq){ 
        if(it.second>=2){
            ans.push_back(it.first);
            ans.push_back(it.first);
        }else{
             ans.push_back(it.first);
        }
     }   sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
       return ans.size();
    }
};
