class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int m = s.size();
        int largest = 0;
        int slargest = 0;

        for( char c : s){
          int digit = c - '0';
           if(digit >= largest){
            slargest = largest;
            largest = digit;
            
           }
          else  if( (digit < largest) && (digit > slargest)){
            slargest = digit;
           }
            
        }
       
 
       return largest * slargest; 
    }
};