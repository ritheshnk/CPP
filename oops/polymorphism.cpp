/*polymorphism means having many forms
there are 2 types of polymorphishm
    1. compile time polymorphism 
    2. run time polymorphism
    compile time polymorphism is when the compiler knows all possible type at compile time and then
    it will generate code for each type
    which can be used to execute the program
    in different ways
    while runtime polymorphism is where we don't know what type of object we have until
    we actually create an instance of that class or interface
    so it's a dynamic way of doing things
    */


//Function overloading under compile time polymorphism
   #include<iostream>
   using namespace std;

   class overloading{
    public:
        void fun()
        {
            cout<<"function with no argument"<<endl;
        }

        void fun(int x)
        {
            cout<<"function  with arguments "<<x<<endl;
        }

        void fun(double y)
        {
            cout<<"function with arguments value floating "<<y<<endl;
        }
   };

   int main()
   {
    overloading ov;
    ov.fun();
    ov.fun(4);
    ov.fun(3.5);
   }