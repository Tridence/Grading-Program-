#include <iostream>

using namespace std;

int main()
{
    char grade=' ';
    float mark;
    cout<<" Enter the Mark\t";
    cin>>mark;
    if((mark>=70)&& (mark<=100))
{
grade= 'A';
}
    else if((mark>=60)&&(mark<=70))
    {
        grade='B';
}
else if ((mark>=50)&&(mark<60))
{
    grade='C';
}
else if ((mark>=40)&&(mark<50))
{
    grade='D';
}
else if ((mark>=0)&&(mark<40))
{
    grade='E';
}
else
    {
        cout<<"Error Wrong Input"<<endl;
}
cout<<"Grade" <<grade<<endl;
    return 0;
}
