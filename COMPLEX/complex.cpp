#include<iostream>
using namespace std;

class complex
{
    private:
    /* data */
        int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        void showdata();
        complex add(complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};

void complex::showdata()
{
    cout<<"\na="<<a<<" b="<<b;
}

int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1.add(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    cout<<endl;

    return 0;
}