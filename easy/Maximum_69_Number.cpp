// Approach First T(c)=o(n)
class Solution {       
public:  
    int maximum69Number (int num) { 
        vector<int>ans; int sum=0;
       while(num>0){
    ans.push_back(num%10);
      num=num/10;
       } 
       reverse(ans.begin(),ans.end());          
      for(int i=0;i<ans.size();i++){     
        if(ans[i]==6){
            ans[i]=9;
            break;
        }   
      }
      for(int i=0;i<ans.size();i++){ 
        sum=sum*10+ans[i];
      
      } return sum;
    
    }  
}; 

 //Approach Second.

class Solution {
public:
    int maximum69Number(int num) { 
        string s = to_string(num);  
        
        for (int i = 0; i < s.size(); i++) {  
            if (s[i] == '6') { 
                s[i] = '9';  
                break;  
            }
        }

        return stoi(s);  
    }  
};

