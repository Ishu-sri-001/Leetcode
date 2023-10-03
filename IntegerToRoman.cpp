https://leetcode.com/problems/integer-to-roman/description/

class Solution {
public:
    string intToRoman(int n) 
    {
        string ones[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundreads[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousands[10]={"","M","MM","MMM"};
        
        return thousands[n/1000]+hundreads[(n%1000)/100]+tens[(n%100)/10]+ones[(n%10)];
    }
};
