// https://leetcode-cn.com/problems/palindrome-number/
bool isPalindrome(int x){
    long long x2,n=0,a;
    x2=x;
    if (x < 0){
        return false;
    }
    while (x!=0){
        a=x%10;
        x=x/10;
        n=n*10+a;
    }
    if (n==x2)
    return true;
    else
    return false;
}