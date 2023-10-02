#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        
        Demo(int i =0, int j = 0)
        {
            A = i;
            B = j;
        }
};

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside + Operator function\n";
    return Demo(obj1.A+obj2.A, obj1.B+obj2.B);//(10+30,40+20) inbulit + operator ahe eit  int ha primitive ahe
}

int main()
{
    Demo X(10,20);
    Demo Y(30,40);
    Demo Ans;

    Ans = X + Y;        // +(X,Y); compund operator
    cout<<Ans.A<<"\n";
    cout<<Ans.B<<"\n";
    return 0;
}