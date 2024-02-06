class Solution {
public:
    string addStrings(string num1, string num2) {

        if(num1[0] == '0') return num2;
        if(num2[0] == '0') return num1;

        string ans = "";

        int i = num1.length() - 1, j = num2.length() - 1;
        int carry = 0;
        while(i >= 0 || carry || j >= 0) {
            int sum = 0;
            if(i >= 0) {
                sum += (num1[i] - '0');
                i--;
            }
            if(j >= 0) {
                sum += (num2[j] - '0');
                j--;
            }
            sum += carry;
            carry = 0;
            if(sum >= 10) {
                carry = 1;
                sum -= 10;
            }
            ans += to_string(sum);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};