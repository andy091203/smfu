// https://leetcode-cn.com/problems/roman-to-integer
int romanToInt(char * s){
    // char s[] = "LVIII\0";
    // char s[] = {'L', 'V', 'I', 'I', 'I', '\0'};
    int sum = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i+1] != '\0'){
            bool f = true;
            if (s[i] == 'I' && s[i+1] == 'V')
                sum = sum + 4;
            else if (s[i] == 'I' && s[i+1] == 'X')
                sum = sum + 9;
            else if (s[i] == 'X' && s[i+1] == 'L')
                sum = sum + 40;
            else if (s[i] == 'X' && s[i+1] == 'C')
                sum = sum + 90;
            else if (s[i] == 'C' && s[i+1] == 'D')
                sum = sum + 400;
            else if (s[i] == 'C' && s[i+1] == 'M')
                sum = sum + 900;
            else
                f = false;
            if (f) {
                i = i + 1;
                continue;
            }
        }
        if (s[i] == 'I')
            sum = sum + 1;
        if (s[i] == 'V')
            sum = sum + 5;
        if (s[i] == 'X')
            sum = sum + 10;
        if (s[i] == 'L')
            sum = sum + 50;
        if (s[i] == 'C')
            sum = sum + 100;
        if (s[i] == 'D')
            sum = sum + 500;
        if (s[i] == 'M')
            sum = sum + 1000;
    }
    return sum;
}