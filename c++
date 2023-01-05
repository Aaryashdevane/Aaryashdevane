<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//first program in c++

#include<iostream>
using namespace std;
int main(){
  cout<<"namaste dunia" << endl;
}
//////////output///////////
namaste dunia

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main()
{ int a=110;
  char b='j';
  float d=2.34;
  bool bl=false;
  cout<< a << endl;
    cout<< b << endl;
    cout<< d << endl;
    cout<< bl << endl;
  double g = 2.58;
  cout<< g << endl;
  int size =sizeof(g);
  cout<< "size of  g is "<< size<<endl;

  
}
/////////////output///////////////
110
j
2.34
0
2.58
size of  g is 8

/////////////////////////////////////////////////////////\\\\\\\\\\\////////////////////\\\\\\\\\\\\\\\\\\/////////////////////\\\\\\\\\\\\\\\\\\//////////
#include<iostream>
  using namespace std;

int main ()
{int a ='a';
  char ch=107;
  char ch1=123456;
  cout << a << endl;
  cout << ch << endl;
  cout << ch1 << endl;
}
/////////////////////////oooooutput///////////////////////////////////

97
k
@
[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
#include<iostream>
using namespace std;
int main()
{ int a=4;
  cout<< a/5 << endl;
  float a1=4;
  cout<< a1/5 << endl;
}
output///////////////////
0
0.8
)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))(((((((((())))

#include<iostream>
using namespace std;
 int main ()
{ int a = 2;
  int b = 3;
   bool first= (a=b);
  cout << first << endl;
  bool second = (a>b);
  cout<< second << endl;
  bool third = (a<b);
  cout << third << endl;
  bool fourth = (a<=b);
  cout<< fourth << endl;
  bool fifth = (a!=b);
  cout<< fifth << endl;

}

------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>

using namespace std;

int main(){
int a;
cin >>a;
cout << " the value of a is : "<< a << endl;
if (a>0)
{
  cout << "a is positiive number";
}
else {
cout << " a is negative number ";
  
}
    
}
/////////////output////////////////
54
 the value of a is : 54
a is positiive number 

***********************************************************************************************************************************************************

#include<iostream>
using namespace std;

int main()
{ int a,b;
  cin>>a>>b;
  cout<< " the value of a is \n"<< a <<endl;
  cout<< " the value of b is \n"<< b<<endl;
if (a>b)
{
  cout<< "a is greater "<< endl;
    }
  else 
{ cout<< " b is greater"<<endl;

  }
  }
  ////////output////////
  54
65
 the value of a is 
54
 the value of b is 
65
 b is greater
 ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
 ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
 
 #include<iostream>
using namespace std;
int main(){
int a;
  a= cin.get(); // it will give ascii value of a 
  cout<< " the ascii value of a is "<< a<<endl; 
  
  
}

////////////////output///////////////////////
1
 the ascii value of a is 49
[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]

#include<iostream>
using namespace std;
int main(){
int a,b;
  cout<< " enter the value of a:"<< endl;
  cin>>a;
  cout<<"enter the value of b:"<< endl;
  cin>>b;

  if (a>b)
  { cout<< "a is greater than b"<< endl;
    
    }
  else if (b>a)
  {
    cout<<"b is greater than a"<< endl;
    
  }
  else 
    {
    cout<< " a is 0"<< endl;
    }
}
//////ouutput////////////////////
enter the value of a:
45
enter the value of b:
65
b is greater than a

((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
#include<iostream>
using namespace std;
int main()
{ int a=9;
  if (a==9)
  {
    cout<<"niney\n";
  }
  else if (a>0)
  {
    cout<< "positive\n"; 
    }
  else {
    cout<<"negative\n";
  }
  }
  output///////////////////////
  niney
  [[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
  #include<iostream>
using namespace std;
int main()
{ int a =2;
  int b=a++;
  if (a==3)
  { cout<<"value of a is ;"<<a;
    
    }
else{
  cout<<b;
}
  
}
output/////////////////////////////
value of a is 3

}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{

#include<iostream>
using  namespace std;
int main()
{
  char ch;
  cout<<"enter any character"<< endl;
  cin>>ch;

  if (ch>=65&&ch<=90)
  {
   cout<<"you have entered upper case alphabet"<< endl;
  }
  else if (ch>=97&&ch<=122)
  {
    cout<< "you have entered lower case alphabet"<<endl;
    
  }
else if (ch>=48&&ch<=57)
  {
    cout<<"you have entered a special character or digit";
  }
}
OUTPUT....................................
enter any character
2 
you have entered a special character or digit 

&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
    {
      cout<< i <<" ";
      i=i+1;
      
    }  
}
ouput;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
12345678

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#include<iostream>
using namespace std;
int main()
{
int n;
  cin>>n;
  int i=0;
  int sum=0;
  while (i<=n)
    {
      sum = sum + i ;
      i = i + 1;    
    }
  cout<<"sum ="<<sum<<endl;
}

output........................
100
sum =5050
-----------------------------------------------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

int main ()
{int num,table;
  cout<<"enter any number:"<< endl;
  cin>>num;
  cout<<num<<endl;
  int i=1;
  while (i<=10)
    {
      table= num*i;
      cout<< num <<" * "<< i <<  " = " << table << endl;
      i=i+1;
    }
 
}
output;;;;;;;;;;;;;;;;enter any number:
5
5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50;;;;;;;;;;;;;;;;;;;;;;;;;;

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include<iostream>
using namespace std;
int main()
{int n ;
  cout<<"enter any number"<<endl;
  cin>>n;
  int i =2 ;
  while (i<n)
    { 
      if  ( n%i == 0)
      {cout<<"number is not  prime number"<< i <<endl;
    } 
      
      else {
        cout<<"the number is prime no."<<i<<endl;
      }
      i=i+1;
  }
output;;;;;;;;;;;;;;;;;;;;
enter any number
14
number is not  prime number2
the number is prime no.3
the number is prime no.4
the number is prime no.5
the number is prime no.6
number is not  prime number7
the number is prime no.8
the number is prime no.9
the number is prime no.10
the number is prime no.11
the number is prime no.12
the number is prime no.13
:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
___________________________________________________________________________________________________________________________________________________________
:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include<iostream>
using namespace std;
int main()
{int n;
  cin>>n;
  int i=1;
  while(i<=n)
    { int j=1;
      while(j<=n)
        {
          cout<<"*";
          j=j+1; 
        }
      i=i+1;
      cout<<endl;    
    } 
}
ouput;;;;;;;;;;;
4
****
****
****
****
kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
 #include<iostream> 
using namespace std;
int main()
{int n;
  cin>>n;
  int i=1;
while(i<=n)
  {
    int j = 1;
  while (j<=n)
    {
      cout<<i;
      j= j +1;
      
    }
    cout<<endl;
    i= i + 1;
  }
  
}
output;;;;;;;
4
1111
2222
3333
4444
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#include<iostream> 
using namespace std;
int main()
{int n;
  cin>>n;
  int i=1;
while(i<=n)
  {
    int j = 1;
  while (j<=n)
    {
      cout<<j;
      j= j +1;
      
    }
    cout<<endl;
    i= i + 1;
  }
  
}
output,,,,,,,,,
4
1234
1234
1234
1234
:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#include<iostream> 
using namespace std;
int main()
{int n;
  cin>>n;
  int i= n;
while(i>=1)
  {
    int j = n;
  while (j>=1)
    {
      cout<<j;
      j= j - 1;
      
    }
    cout<<endl;
    i= i - 1;
  }
  ouput;;;;;;;;;;;;;;;
  4
4321
4321
4321
4321
{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
#include <iostream>
using namespace std;
int main()
{int n ;
  cin>>n;
  int i = 1;
  int count = 1;
  while(i<=n)
    {
      int j =1;
      while(j<=n)
        {
          cout<<count;
          count= count +1;
          j = j +1;
          
        }
      cout<<endl;
      i = i+1;
        
    }
    output;;;;;;;;;;;;;;;;
    3
123
456
789
-----------------------------------------------------------------------------------------------------------------------------------------------------------
