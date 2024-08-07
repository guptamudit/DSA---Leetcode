class Solution {
    vector<string> below10={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    vector<string> below20={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    vector<string> below100={"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

public:
    string numberToWords(int num) {
        if(num==0) return "Zero";
        if(num<10) return below10[num];
        if(num<20) return below20[num-10];
        if(num<100) return below100[num/10]+(num%10!=0?" "+below10[num%10]:"");
        if(num<1000) return below10[num/100]+ " Hundred" + (num%100!=0?" "+numberToWords(num%100):"");
        if(num<1000000) return numberToWords(num/1000)+ " Thousand" + (num%1000!=0?" "+numberToWords(num%1000):"");
        if(num<1000000000) return numberToWords(num/1000000)+ " Million" + (num%1000000!=0?" "+numberToWords(num%1000000):"");
        return numberToWords(num/1000000000)+ " Billion" + (num%1000000000!=0?" "+numberToWords(num%1000000000):"");
    }
};