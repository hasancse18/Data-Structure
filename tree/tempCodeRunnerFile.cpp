int givesum(int x)
{
    //cout<<x<<endl;
    //vector<int>v;
    int n=0;
    while(x)
    {
        //v.push_back(x%10);
        n=n+(x%10);
        x=x/10;
    }
    return n;
}