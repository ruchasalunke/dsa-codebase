class Solution {
  public:
    char getMaxOccuringChar(string& s)
    {
        char maxchar='a';
        int maxf=0;
        for(char ch='a'; ch<='z'; ch++)
        {
            int freq=0;
            for(char c:s)
            {
                if(c==ch)
                    freq++;
            }
            if(freq>maxf)
            {
                maxf=freq;
                maxchar=ch;
            }
        }
        return maxchar;
    }
};
