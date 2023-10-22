task1:
      #include<iostream>
using namespace std;
void printStars(int i);

main()
{
int i;
cout<< "Enter descired number of rows: ";
cin>>i;
printStars(i);
}
void printStars(int i)
{
for(int y=1;y<=i; y++)
{
for(int x=15;x>=y; x--)
{cout<<"*";
}
cout<<endl;
}
}
task 2:
     #include<iostream>
using namespace std;
main()
{
int n;
cout<< "Enter descired number of rows: ";
cin>>n;
for(int i =n/2; i>=1; i--)
{cout<<" ";
cout<<endl;

for(int x=1; x<=i ;x++)
{
for(int j=1;j<=x ;j++)
{
cout<<"*";
}

}}

for(int s = n/2;s>=1; s--)
{
cout<<" ";
cout<<endl;
for(int x =1; x<=s; x++)
{
for(int j=15; j>=x; j--)
{
cout<<"*";
}
cout<<endl;
}
}

task3:
      #include<iostream>
using namespace std;
void amplify(int number);
main()
{
int number;
cout<<"Enter the number to amplify: ";
cin>>number;
amplify(number);
}
void amplify(int number)
{int x;
for(x=1; x<= number; x++)
{if(x%4==0)
{cout<<x*10<<" ,";
}
 else
 { 
 cout<<x<<",";
         
 }
 }
 }
     
      task4:
            #include<iostream>
using namespace std;
int triangle(int n);
main()
{
int n;
cout<<"Enter number of Triangle: ";
cin>>n;
int result=triangle(n);
cout<<"Dots in the Triangle: "<<result;
}
int triangle(int n)
{int dot=0;
for(int i=1; i<=n; i++)
{
  dot=dot+i;
  }    
  return dot;
}    
task5:
      #include<iostream>
using namespace std;
bool isPrime(int number);
main()
{
      int number;
      cout<<"Enter Number: ";
      cin>>number;
      int result=isPrime( number);
      cout<< result;
      }
bool isPrime(int number)
{
	
	
		for(int p=2;p<number;p++)
		{
			int i=number%p;
			if(i==0)
			{
				return 0;
			}
			
		}
	return 1;
}
task 6:
     #include<iostream>
using namespace std;
bool isprime(int number);
int isPrimorial(int number); 
main()
{
      int number;
      cout<<"Enter Number: ";
      cin>>number;
      int result=isPrimorial(number);
      cout<< result;
      }
bool isprime(int number)
{
	
	
		for(int p=2;p<number;p++)
		{
			int i=number%p;
			if(i==0)
			{
				return 0;
			}
			
		}
	return 1;
}

int isPrimorial(int number)  
{
  int p=2;
  int y=0;
  int z=1;
  while(y!=number)
  {if(isprime(p)==true)
  {z=z*p;
  y++;
  }
p++;
}
return z;
}    
task 8:
#include<iostream>
#include<iomanip>
using namespace std;
main()
{int a,b,c,d;
float count;
cout<<fixed;
cout<<setprecision(2);
cout<<"Enter the count of cargo for transportation: ";
cin>>count;
cout<<"Enter the tonage of cargo 1: ";
cin>>a;
cout<<"Enter the tonage of cargo 2: ";
cin>>b;
cout<<"Enter the tonage of cargo 3: ";
cin>>c;
cout<<"Enter the tonage of cargo 4: ";
cin>>d;
float sum=a+b+c+d;
cout<<((a+d)*200+ b*175+ c*120)/sum<<endl;
cout<<(a+d)/sum*100<<"%"<<endl;
cout<<b/sum*100<<"%"<<endl;
cout<<c/sum*100<<"%"<<endl;

}
     
