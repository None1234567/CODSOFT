#include<iostream>
using namespace std;
int main()
{
    int r,m;
cout<<"HERE IS THE GRADING SYSTEM\n";
cout<<"Enter the roll number of student\n";
cin>>r;
cout<<"Enter the marks of student\n";
cin>>m;
if(m>=90)
{
    cout<<"Grade is A of roll No."<<m;
}
else if(m>=80)
{
cout<<"Grade is B of roll No."<<m;
}
 else if(m>=70)
{
    cout<<"Grade is C of roll No."<<m;
}   
else
{
cout<<"Grade earned by rollno. less than 60% So can't be declared";
}
return 0;
}
