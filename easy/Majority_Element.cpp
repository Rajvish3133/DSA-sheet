// problem=>https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size(); 
       unordered_map<int,int>freq;
       for(int num:nums){ 
          freq[num]++;
       }                           // O(n)
       for(auto it:freq){
      if(it.second>n/2){   
        return it.first;
      }
       }  return -1;   

       
    //  int freq=0;
    //    for(int i=0;i<n;i++){
    //      freq=0;
    //     for(int j=0;j<n;j++){
    //         if(nums[i]==nums[j]){         //  brute force approach=> o(n^2)
    //             freq=freq+1;
    //         }
    //     }  if(freq>n/2) return nums[i];
    //    }   return -1;
    }
};
