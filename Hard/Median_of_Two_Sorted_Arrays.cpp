class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int m=nums1.size();  int n=nums2.size();
       vector<int>ans;
       for(int i:nums1){
        ans.push_back(i);
       }
       for(int i:nums2){
        ans.push_back(i);
       }
       sort(ans.begin(),ans.end());
       int r=ans.size();
       int st=0,end=r-1;
       int p=(st+end)/2;
       if(ans.size()%2!=0){
        return ans[p];
       }else{
         return (ans[p]+ans[p+1])/(double)2;
       }
    }
};
