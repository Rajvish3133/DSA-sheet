class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n=arr.size();int count=0; vector<int>ans; set<int>s;vector<int>ans1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                ans.push_back(arr[i]);
            }
        }   
          for(int i:arr){
              s.insert(i);
          }  
          for(int i:s){
              ans1.push_back(i);
          }  
            int b=arr.size();
            if(b!=ans1[ans1.size()-1]){
                ans.push_back(b);
                return ans; 
            }
          for(int i=1;i<=b;i++){
              if(ans1[i-1]!=i){
                  ans.push_back(i);
              }
          }
        return ans;
    }
};
