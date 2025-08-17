class Solution {
public:
    int minOperations(int n) {
        //arr = [1,3,5]
        int midelement = n/2;
        int totalOperation = 0;
        for(int i =0; i < n ; i++){
            totalOperation+=abs(i-midelement);
        }
         return totalOperation;
    }
   
};