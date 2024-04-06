bool checkMember(int n)
{
    int a = 1;
    int b = 2;
    int c = a + b;
    while (true)
    {
        a = b + c;
        if (a > n)
        {
            break;
        }
        b = a + c;
        if (b > n)
        {
            break;
        }
        c = a + b;
        if (c > n)
        {
            break;
        }
    }
    if (n == a || n == b || n == c || n == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}