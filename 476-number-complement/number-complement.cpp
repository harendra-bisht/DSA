class Solution {
public:
    int findComplement(int num) {
        int m = num;
        int mask =0;
        int ans =0;

        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        ans = (~num) & mask ;

        return ans ;
    }
};