#include<iostream>
using namespace std;

class Demo
{
    private:
        int A,B;
    public:
        Demo(int i =0, int j = 0)
        {
            A = i;
            B = j;
        }
        void Display()          //behaviour gateseter(grhnar) settar
        {
            cout<<A<<"\n";
            cout<<B<<"\n";
        }
        friend Demo operator +(Demo, Demo);        //overloading chi operator ahe 
};

// + is an operator overloaded function which accepts 2 parameters and both are objects of Demo class
// this fuhnction returns the object of Demo class

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside + Operator function\n";
    return Demo(obj1.A+obj2.A, obj1.B+obj2.B);
}
int main()
{
    Demo X(10,20);
    Demo Y(30,40);
    Demo Ans;
    Ans = X + Y;        // +(X,Y); /private data access main() accpet karu shkt nhi mhanun display fun lhil
    Ans.Display();
    return 0;
}