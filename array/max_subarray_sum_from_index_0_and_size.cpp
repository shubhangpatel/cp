void solve()
{
  int n;
  cin>>n;
  vector<int>v(n);
  int res=INT_MIN,tempres=0;
  for(int &a:v) cin>>a;
  for(int a=0;a<n;a++)
  {
     tempres+=v[a];
     res=max(res,tempres);
  }
  tempres=0;
  res=INT_MIN;
  for(int a=n-1;a>=0;a--)
  {
    tempres+=v[a];
    res=max(res,tempres);
  }
  cout<<res;
}
