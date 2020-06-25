// Find LCM
#include <iostream>
using namespace std;
class LCM
{
    int a,b,i;
    public : 
    void getdata()
    {
        cout << "Enter first value :";
        cin >> a;
        cout << "Enter second value :";
        cin >> b;
    }
    void find_LCM()
    {
        for(i=a>b?a:b; i<=a*b; i+=a>b?a:b)
        if (i%a==0 && i%b==0)
        {
            break;
        }
    }
    void display()
    {
        cout<<"LCM of both numbers :"<<i;
    }
};

int main()
{
    LCM obj;
    obj.getdata();
    obj.find_LCM();
    obj.display();
    return 0;
}
