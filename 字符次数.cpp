#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char a[2000];
    int n;
    char flag;
    int max=0;  //max用于记录出现次数最多的字母次数 
    int t=1;   //t用于计数 
    cin>>a;
    n=strlen(a);
    sort(a,a+n);   //将字母进行排序 
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])   //计算相同的字母次数 
        {
            t++;
        }
        else
        {
            if(max<t)    //找出字母重复次数最多的字母 
            {
                flag=a[i];
                max=t;
            }
            t=1;
        }
     } 
    cout<<flag<<" "<<max; 

    return 0;
}



