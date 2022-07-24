// Count number of 1 Bits i.e. change number into binary and count no. of 1

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){     
            if(n&1){      1&1= 1 =true
                count++;
            }
            n=n>>1; //right shifting    //checking last bit by shifting
        }
        return count;
    }
};
