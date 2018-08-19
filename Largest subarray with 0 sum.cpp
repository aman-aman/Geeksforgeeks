int maxLen(int a[],int n)
{
  //Your code here
  map<int,int > mp;
  int sum=0,maxlen=0;
  for(int i=0;i<n;i++)
  {
      sum+=a[i];
      if(sum==0)
            maxlen=i+1;
      if(mp.find(sum)!=mp.end())
      {
          maxlen=max(maxlen,i-mp[sum]);
      }
      else
            mp[sum]=i;
  }
  
  return maxlen;
}
