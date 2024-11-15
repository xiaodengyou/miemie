#include <stdio.h>
int strStr(char* haystack, char* needle)
{
    char* hay = haystack;
    char* need = needle;
    char* hay1 = haystack;
    char* need1 = needle;
    int count = 0;
    int count1 = 0;
    while (*hay != '\0')
    {
        if (*hay != *need)
        {
            hay++;
            count++;
            continue;
        }
        if (*hay == *need)
        {
            hay1 = hay + 1;
            count1 = count + 1;
            while (1)
            {
                if (*need == '\0')
                    return count;
                if (*need == *hay)
                {
                    need++;
                    hay++;
                    continue;
                }
                else if (*need != *hay)
                {
                    need = need1;
                    hay = hay1;
                    count = count1;
                    break;
                }
            }
        }
    }
    return -1;
}