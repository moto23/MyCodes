class Solution {
public:
    int pivotInteger(int n) {
        int x=sqrt((n*(n+1))/2);
        //Checking if (n*(n+1))/2 is a perfect square
        if((n*(n+1))/2==x*x) return x;
        else return -1;
    }
};