class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans="";
    int ar[2]={0};
        for(auto c:s){
           ar[c-'0']++; 
        }     

     while(ar[1] >1){
         ans +='1';
         ar[1]--;
     }

    while(ar[0] >= 1){
         ans +='0';
         ar[0]--;
     }   
         ans +='1';

return ans;
    }
};