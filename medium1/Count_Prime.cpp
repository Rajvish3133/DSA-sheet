class Solution {
public:   
    int countPrimes(int n) {     
     //     vector<int>ans; int count=0; 
    //   for(int i=2;i<n;i++){  
    //      count=0;
    //     for(int j=1;j<=i;j++){
    //         if(i%j==0){                // this is the first approach which gives TLE on leetcode(not optimize)
    //             count=count+1;
    //         }      
    //     } if(count==2){
    //         ans.push_back(1);
    //     } if(count>2){
    //         count=0;
    //     }
    //   }  return ans.size();  

       //Second approach(sieve of eratosthenes)  "optimize approach"
       
        vector<int>ans(n,true);
        int count=0;
        for(int i=2;i<n;i++){
            if(ans[i]==true){
                count++; 
            for(int j=i*2;j<n;j=j+i){
                ans[j]=false;
            }
            }
        } 
        return count;
    }
};
