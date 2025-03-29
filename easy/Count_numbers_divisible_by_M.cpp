class Solution {
  public:
    int countDivisibles(int A, int B, int M) {
        int count=0;
        for(int i=A;i<=B;i++){
            if(i%M==0){
                count=count+1;
            }
        } return count;
    }
};
