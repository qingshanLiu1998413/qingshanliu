#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char a[2000];
    int n;
    char flag;
    int max=0;  //max���ڼ�¼���ִ���������ĸ���� 
    int t=1;   //t���ڼ��� 
    cin>>a;
    n=strlen(a);
    sort(a,a+n);   //����ĸ�������� 
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])   //������ͬ����ĸ���� 
        {
            t++;
        }
        else
        {
            if(max<t)    //�ҳ���ĸ�ظ�����������ĸ 
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



