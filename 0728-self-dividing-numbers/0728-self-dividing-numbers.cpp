class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> num;
        for(int i=left;i<=right;i++){
            int temp = i;
            int temp1 = i;
            int count=0;
            int flag =0;
            while(temp1!=0){
                int n = temp1%10;
                if(n==0){
                    flag =1;
                    break;
                }
                temp1 = temp1/10;
            }
            if(flag==0){
            while(temp!=0){
                int n = temp%10;
                if(i%n!=0){
                    count=1;
                    break;
                }
                temp = temp/10;
            }
            
            if(count==0){
                num.push_back(i);
            }
            }
        }
        return num;
    }
};