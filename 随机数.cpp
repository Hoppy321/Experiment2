#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;\
int main()
{
	int a,b,c;
	srand((unsigned)time(NULL)); 
  a=rand();
  b=rand();
  cout<<a<<"+"<<b<<"=?\n";
  cout<<"Please input your answer:";
  cin>>c;
  cout <<"The right answer is:"<<a<<"+"<<b<<"="<< a+b <<endl;
  cout <<"     Your answer is:"<<a<<"+"<<b<<"="<< c <<endl;
  if (c==a+b) 
        cout<<"Right£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡"<<endl;
  else  
        cout<<"Wrong...... You Stupid."<<endl;
        system("pause");
 	return 0;
}
