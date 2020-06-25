// Find HCF
#include <iostream>
using namespace std;
class hcf
{
    int a,b,rem,hcf;
    public : 
    void getdata()
    {
        cout << "Enter first value :";
        cin >> a;
        cout << "Enter second value :";
        cin >> b;
    }
    void find_hcf()
    {
        if(a>b)   
        {
            rem=a%b;
            while (rem!=0)
            {
                a=b;
                b=rem;
                rem=a%b;   
            }
            hcf=b;
        }
        else
        {
            rem=b%a;
            while (rem!=0)
            {
                b=a;
                a=rem;
                rem=b%a;   
            }
            hcf=a;
        }
        
    }
    void display()
    {
        cout<<"HCF of both numbers :"<<hcf;
    }
};

int main()
{
    hcf obj;
    obj.getdata();
    obj.find_hcf();
    obj.display();
    return 0;
}
