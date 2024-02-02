class Solution {
public:
    int maximum69Number(int num)
    {
        vector<int> x;
        int num1 = 0;
        while (num)
        {
            x.push_back(num % 10);
            num /= 10;
        }
        for (int i = x.size() - 1; i >= 0; i--)
        {
            if (x[i] == 6)
            {
                x[i] = 9;
                break;
            }
        }
        for (int i = x.size() - 1; i >= 0; i--)
        {
            num1 = (num1 * 10) + x[i];
        }
        return num1;
    }
};