#include<iostream>
using namespace std;
int dectobin(int n)
{   
    int ans=0;
    int p=1;
    while(n>0)
    {
        int last_bit=n&1;
        ans+=p*last_bit;
        p*=10;
        n=n>>1;
    }
    return ans;
}
int main()
{
    
    cout<<dectobin(5)<<endl;
    cout<<dectobin(10)<<endl;
    cout<<dectobin(15)<<endl;
    cout<<dectobin(25)<<endl;
    cout<<dectobin(55)<<endl;
    
    return 0;
}