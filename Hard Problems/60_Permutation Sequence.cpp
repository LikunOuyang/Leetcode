class Solution {
public:
    string getPermutation(int n, int k) {
        if (n==1){
            return "1";
        }
        int factorial  = 1;
        for(int i=0;i<n-1;i++){
            factorial  *= i+1;
        }
        int prefix = (k - 1) / factorial  + 1;
        int residual = (k - 1) % factorial  + 1;
        string suffix = getPermutation(n - 1, residual);
        for(auto& it:suffix){
            if (int(it)-48 >= prefix){
                it = char(int(it) + 1);
            }
        }
        return char(prefix+48) + suffix;
    }
};