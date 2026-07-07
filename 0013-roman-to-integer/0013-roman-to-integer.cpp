class Solution {
public:
   int num(char c){
    if(c == 'I') return 1;
      else if(c == 'V') return 5;
       else if(c == 'X') return 10;
        else  if(c == 'L') return 50;
          else   if(c == 'C') return 100;
            else   if(c == 'D') return 500;
              else {

              return 1000; }        

   }
    int romanToInt(string s) {
        int sum = 0;
        int n = s.size();
        int i = 0;
        while(i<n-1){
            if( num(s[i]) < num(s[i + 1])){
                sum -= num(s[i]);
            }

            else{
                sum +=  num(s[i]);
            }
            i++;
        }
         sum = sum + num(s[n-1]);
            
          return sum;
        
    }
};