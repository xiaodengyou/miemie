bool isPalindrome(int x)
{
    long long  n = 0;
    int i = x;
    for (; i > 0;)
    {
        n = n * 10 + i % 10;
        i = i / 10;
    }
    if (n == x)
        return true;
    else
        return false;
}