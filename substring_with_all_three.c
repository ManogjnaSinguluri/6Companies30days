int numberOfSubstrings(char * s){
    int x=0,y=0,z=0,r=0,i=0;
    
    int n=strlen(s);
    for(i=0;i<n;i++){
        if(s[i]=='a')
    {
          x++;
     }
    else if(s[i]=='b')
    {
            y++;
    }
    else if(s[i]=='c')
    {
            z++;
    }
    }
for(int i=0;i<=n-3;i++){
    
     int n1=x,n2=y,n3=z;
    int j=n-1;
     while(j>=i+2)
     {
         if(n1==0||n2==0||n3==0){
             break;
         }
         r++;
         if(s[j]=='a'){
             n1--;
         }
         else if(s[j]=='b'){
             n2--;
         }
         else if(s[j]=='c'){
             n3--;
         }
         j--;
        }
    if(s[i]=='a')
    {
          x--;
     }
    else if(s[i]=='b')
    {
            y--;
    }
    else if(s[i]=='c')
    {
            z--;
    }
  }
    return r;
}