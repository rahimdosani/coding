#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for( int i=2;i<=sqrt(n);i++)
    {
        if(i%n==0)
        {
            cout<<"Non-prime"<<endl;
            break;
        }
        else
        {
            cout<<"Prime"<<endl;
            
        }

}
return 0;
}