class Solution {
  public:
    int binary_to_decimal(string str) {
        int decimal = 0;
        int power = 1;
        for(int i=str.length()-1;i>=0;--i)
        {
            if(str[i]=='1')
            {
                decimal += power;
            }
            power=power*2;
        }
        return decimal;
    }
};