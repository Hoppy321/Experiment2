#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int large(double, int);   //large() ����˵�� 
	char c1,c2,c3,c4,d1;         
	double a,b,c,d;        //double��  ��ѧ���ɼ�������0.5���� 
	int x;
	cout<<"********************************"<<endl; 
	cout<<" ��ӭʹ��ѧ���ɼ�����ϵͳ1.1 "<<endl;
	cout<<"С��8   �����2003�� 2020.10.29"<<endl;
	cout<<"********************************"<<endl; 
	cout<<"����4��ͬѧ�Ĵ��źͳɼ�"<<endl;
	cin>>c1>>a>>c2>>b>>c3>>c>>c4>>d;           //����ѧ�����ż��ɼ� 
	cout<<"�ɼ��Ѿ��ɹ�¼��"<<endl;
	cout<<"����ѡ�����¹���"<<endl; 
	cout<<"     *******************************"<<endl; 
	cout<<"     1����ʾ4��ͬѧ�Ĵ��źͳɼ��б�"<<endl;
	cout<<"     2����4��ƽ����                "<<endl;
	cout<<"     3����4���ܷ� "<<endl;
	cout<<"     4����ѯĳͬѧ�ķ���   "<<endl;
	cout<<"     5��ͳ�Ƽ�����      "<<endl;
	cout<<"     6���˳�                       "<<endl;
	cout<<"     *******************************"<<endl; 
	cout<<"     ������(1-6)ѡ��        ";
	cin>>x;  
	switch(x)
	{
		case 1:cout<<" ����1 �ɼ��� ����"<<endl;                         
		       cout<<"ѧ��"<<"     "<<"�ɼ� "<<endl; 
		       cout<<c1<<"        "<<a<<endl;
		       cout<<c2<<"        "<<b<<endl;
		       cout<<c3<<"        "<<c<<endl;
		       cout<<c4<<"        "<<d<<endl;  break;
	    case 2:cout<<"����2 ƽ���� ����"<<endl;
	           cout<<"����ƽ����Ϊ:"<<(a+b+c+d)/4<<endl;  break;
	    case 3:cout<<"����3 �ܷ� ����"<<endl; 
		       cout<<"�����ܷ�Ϊ��"<<a+b+c+d<<endl;   break;
	    case 4:cout<<"����4 ��ѯ�ɼ� "<<endl;
		       cout<<"������ѧ�����ţ�";
		       cin>>d1;
			   if (d1==c1) cout<<a<<endl;
			   else if (d1==c2) cout<<b<<endl;
			   else if (d1==c3) cout<<c<<endl;
			   else cout<<d<<endl;                    break;
		case 5:cout<<"����5 ������ͳ��"<<endl;
		       int h;            
		       cout<<"�������Ծ�����:     "; 
			   cin>>h; 
		       double arr[4];    //����һ������ ����Ϊ4 
		       arr[0]=a;
		       arr[1]=b;
		       arr[2]=c;
		       arr[3]=d;
		       int y,i,r;
	           y=0;
	           h=0.6*h;
		       for (i=0; i<=3; i++)
		       {
			   if ((r=large(arr[i],h)==1)) 
			       y=y+1;
		       }
			   if (y==4)
		          cout<<"������Ϊ100%"<<endl;
		       else if (y==3)
		          cout<<"������Ϊ75%"<<endl;
		       else if (y==2)
		        cout<<"������Ϊ50%"<<endl; 
		       else if (y==1)
		        cout<<"������Ϊ25%"<<endl;
		       else
		        cout<<"��������"<<endl;       break; 
		      
	    case 6: return 0; break;
		 
	
	}
	system("pause");
    return 0;
}

int large(double x, int y)  //�˴��Զ�����һ������ �������� ����ϵͳ�е�ͳ�Ƽ����ʹ��� 
{
	int flag;
	if (x>=y)
	    flag=1;
	else 
	    flag=0;
	return(flag);
}
