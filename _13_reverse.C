// Reverse
#include <iostream>
using namespace std;
class reverse
{
    int a,x;
    public : 
    void getdata()
    {
        cout << "Enter the value of a :";
        cin >> a;
    }
    reverse(){}
    reverse(int b)
    {
        a=b;
        x=0;
        while (b>0)
        {
            int y=b%10;
            x=x*10 +y;
            b=b/10;
        }
    }
    void display_reverse()
    {
        cout<<"Reverse of given no. :"<<x;
    }
};

int main()
{
    int c;
    cout<<"Enter a number :";
    cin>>c;
    reverse obj;
    obj=c;
    obj.display_reverse();
    return 0;
}
