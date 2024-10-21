 #include <iostream>
 using namespace std;
int main()
{  int a, b;
cout<<"ENter 1st no.: ";
cin>>a;
cout<<"Enter 2nd no.: ";
cin>>b;
  char c;
  cout<<"ENter the operations '+' or '-' or '/' or '*' : ";
  cin>>c;
  if (c=='+')
  cout<<"SUm is :"<<(a+b);
  else if (c=='-')
  cout<<"Difference is: "<< (a-b);
  else if(c=='*')
  cout<<"Product is: "<< (a*b);
  else if(c=='/')
  cout<<"Quotient is : "<< (a/b);
  else
  cout<<"Wrong choice";
     return 0;
} 
