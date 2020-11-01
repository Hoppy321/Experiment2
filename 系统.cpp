#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int large(double, int);   //large() 函数说明 
	char c1,c2,c3,c4,d1;         
	double a,b,c,d;        //double型  因学生成绩可能有0.5存在 
	int x;
	cout<<"********************************"<<endl; 
	cout<<" 欢迎使用学生成绩管理系统1.1 "<<endl;
	cout<<"小组8   计算机2003班 2020.10.29"<<endl;
	cout<<"********************************"<<endl; 
	cout<<"输入4个同学的代号和成绩"<<endl;
	cin>>c1>>a>>c2>>b>>c3>>c>>c4>>d;           //输入学生代号及成绩 
	cout<<"成绩已经成功录入"<<endl;
	cout<<"现请选择以下功能"<<endl; 
	cout<<"     *******************************"<<endl; 
	cout<<"     1、显示4个同学的代号和成绩列表"<<endl;
	cout<<"     2、求4人平均分                "<<endl;
	cout<<"     3、求4人总分 "<<endl;
	cout<<"     4、查询某同学的分数   "<<endl;
	cout<<"     5、统计及格率      "<<endl;
	cout<<"     6、退出                       "<<endl;
	cout<<"     *******************************"<<endl; 
	cout<<"     请输入(1-6)选择：        ";
	cin>>x;  
	switch(x)
	{
		case 1:cout<<" 功能1 成绩表 如下"<<endl;                         
		       cout<<"学生"<<"     "<<"成绩 "<<endl; 
		       cout<<c1<<"        "<<a<<endl;
		       cout<<c2<<"        "<<b<<endl;
		       cout<<c3<<"        "<<c<<endl;
		       cout<<c4<<"        "<<d<<endl;  break;
	    case 2:cout<<"功能2 平均分 如下"<<endl;
	           cout<<"四人平均分为:"<<(a+b+c+d)/4<<endl;  break;
	    case 3:cout<<"功能3 总分 如下"<<endl; 
		       cout<<"四人总分为："<<a+b+c+d<<endl;   break;
	    case 4:cout<<"功能4 查询成绩 "<<endl;
		       cout<<"请输入学生代号：";
		       cin>>d1;
			   if (d1==c1) cout<<a<<endl;
			   else if (d1==c2) cout<<b<<endl;
			   else if (d1==c3) cout<<c<<endl;
			   else cout<<d<<endl;                    break;
		case 5:cout<<"功能5 及格率统计"<<endl;
		       int h;            
		       cout<<"请输入试卷满分:     "; 
			   cin>>h; 
		       double arr[4];    //定义一个数组 长度为4 
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
		          cout<<"及格率为100%"<<endl;
		       else if (y==3)
		          cout<<"及格率为75%"<<endl;
		       else if (y==2)
		        cout<<"及格率为50%"<<endl; 
		       else if (y==1)
		        cout<<"及格率为25%"<<endl;
		       else
		        cout<<"无人生还"<<endl;       break; 
		      
	    case 6: return 0; break;
		 
	
	}
	system("pause");
    return 0;
}

int large(double x, int y)  //此处自定义了一个函数 作用如下 用于系统中的统计及格率功能 
{
	int flag;
	if (x>=y)
	    flag=1;
	else 
	    flag=0;
	return(flag);
}
