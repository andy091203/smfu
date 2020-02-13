// https://leetcode-cn.com/problems/roman-to-integer
int romanToInt(char * s){
    int out1=0;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]=='I' && s[i+1]=='V')
            out1=out1-1;
        else if (s[i]=='I' && s[i+1]=='X')
            out1=out1-1;
        else if (s[i]=='X' && s[i+1]=='L')
            out1=out1-10;
        else if (s[i]=='X' && s[i+1]=='C')
            out1=out1-10;
        else if (s[i]=='C' && s[i+1]=='D')
            out1=out1-100;
        else if (s[i]=='C' && s[i+1]=='M')
            out1=out1-100;
        else if(s[i]=='I')
            out1=out1+1;
        else if(s[i]=='V') 
             out1=out1+5;
        else if(s[i]=='X')
            out1=out1+10;
        else if(s[i]=='L')
            out1=out1+50;
        else if(s[i]=='C')
            out1=out1+100;
        else if(s[i]=='D')
            out1=out1+500;
        else if(s[i]=='M')
            out1=out1+1000;
    }
    return out1;
}
