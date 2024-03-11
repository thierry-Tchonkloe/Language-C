int fibo(int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int geome(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
            return 3*geome(n-1);
    }
}
int arithm(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
            return 7+arithm(n-1);
    }
}
