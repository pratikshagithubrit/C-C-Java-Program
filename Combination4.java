// Case 4 mutiple inheritance
class Demo 
{
    int i;
    void fun()
    {}
}
class Hello
{
    int i;  //charctristic
    void fun() //behaviour
    {}
}
class Marvellous extends Demo, Hello    // Error
{
}

//not allowed 