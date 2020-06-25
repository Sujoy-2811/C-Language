// Find Roots of quadratic equation
#include <iostream>
#include<math.h>
using namespace std;
class root
{
    int a,b,c;
    double d;
    float x,y;
    public : 
    void getdata()
    {
        cout<<"Enter the coefficient of x^2 :";
        cin>>a;
        cout<<"Enter the coefficient of x :";
        cin>>b;
        cout<<"Enter the value o constant :";
        cin>>c;
    }
    void display_roots()
    {
        d=b*b-4*a*c;
        if (d<0)
        {
            cout<<"Roots are imaginary";
        }
        else if(d==0)
        {
            x=-b/(2.0*a);
            cout<<"Both roots are same \nRoots are :"<<x;
        }
        else
        {
            x=(-b+sqrt(d))/(2*a);
            y=(-b-sqrt(d))/(2*a);
            cout<<"Roots are "<<x<<" and"<<y;
        }
        
    }
};

int main()
{
    root obj;
    obj.getdata();
    obj.display_roots();
    return 0;
}