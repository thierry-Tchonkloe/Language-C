int factorielle(int n)
{
    if(n==0||n==1)
        return 1;
    return n*factorielle(n-1);
}
double esposant(double reel,int nbr2)
{
    if(nbr2==1)
        return reel;
    return reel*esposant(reel,nbr2-1);
}
