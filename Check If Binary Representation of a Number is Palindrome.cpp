#include <bits/stdc++.h> 
bool checkPalindrome(long long N)
{
    string binary = "";
    while(N>0)
    {
        binary += (N%2);
        N /= 2;
    }
    int left=0;
    int right=binary.size()-1;
    while(left<right)
    {
        if(binary[left] != binary[right])
            return false;
        left++;
        right--;    
    }
    return true;
}
