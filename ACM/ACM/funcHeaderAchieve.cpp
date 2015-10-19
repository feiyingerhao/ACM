#include"ACM.h"
#include"function.h"
bool Comp(const int &a,const int &b)
{
	return a>b;
}
string convertToString(double x)
{
	ostringstream o;
	if(o<<x)
		return o.str();
	return "convert error";
}
string convertToInt(int x)
{
	ostringstream o;
	if(o<<x)
		return o.str();
	return "convert error";
}
double convertFromString(string s)
{
	istringstream i(s);
	double x;
	if(i>>x)
		return x;
	return 0.0;
}
int convertFromInt(string s)
{
	istringstream i(s);
	int x;
	if(i>>x)
		return x;
	return 0;
}
void returnTwo()
{
	cout<<endl<<endl;
	cout<<"输入0，返回上级，输入1，退出！"<<endl;
	int num;
	cin>>num;
	while(num!=0&&num!=1)
	{
		cout<<"请重新输入(输入0，返回上级，输入1，退出！)"<<endl;
		cin>>num;
	}
	switch(num){
		case 0:part_two_describe();break;
		case 1:exit(0);
	}
}
void readDescribe(string str)
{
   fstream infile(str);
   string temp;
   cout<<"*******************************************************************************"<<endl; 
   while(getline(infile,temp))
   {
		cout<<temp<<endl;
   }
   cout<<"*******************************************************************************"<<endl;
}
string cal_Path(string str1,string str2)
{

	string path="C://Users//haolidong//Documents//Visual Studio 2012//Projects//ACM//Data//"+str1+"-"+str2+".txt";
	string path2="C://Users//haolidong//Documents//Visual Studio 2012//Projects//ACM//Data//"+str1+"-"+str2+"-0.txt";
	readDescribe(path2);
	return path;
}
int gcd(int num1,int num2)
{
	int tmp;
	while(num1%num2)
	{
		tmp=num1;
		num1=num2;
		num2=tmp%num2;

	}
	return num2;
}
bool isPrime(int num)
{
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}
bool listWanshu_single(int num)
{
	int sum=0;
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	return num==sum?true:false;
}
bool symmetricStr(const string s)
{
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-1-i])
		{
			return false;
		}
	}
	return true;
}
void cal_stuAve(student &stu,vector<int> v)
{
	float sum=0;
	float credit_sum=0;
	for (int i = 0; i < v.size(); i++)
	{
		sum=sum+(((stu.score[i]>=60?stu.score[i]:50)-50)/10*v[i]);//大于60才算分数
		credit_sum+=v[i];
	}
	stu.ave=sum/credit_sum;
}
int cal_sort(string s)
{
	int sum=0;
	for (int i = 0; i < s.size()-1; i++)
	{
		for (int j = i+1; j < s.size(); j++)
		{
			if(s[i]>s[j])sum++;
		}
	}
	return sum;
}
bool Comp_trade(const Trade &t1,const Trade &t2)
{
	return t1.bi>t2.bi;
}
bool Comp_Book_Name(const Book &b1,const Book &b2)
{
	if(b1.name!=b2.name)return b1.name<b2.name;
	if(b1.year!=b2.year)return b1.year<b2.year;
	return b1.price<b2.price;
}
bool Comp_book_Year(const Book &b1,const Book &b2)
{
	if(b1.year!=b2.year)return b1.year<b2.year;
	if(b1.name!=b2.name)return b1.name<b2.name;
	return b1.price<b2.price;
}
bool Comp_book_Price(const Book &b1,const Book &b2)
{
	if(b1.price!=b2.price)return b1.price<b2.price;
	if(b1.name!=b2.name)return b1.name<b2.name;
	return b1.year<b2.year;

}
bool CompEx(const excuse &e1,const excuse &e2)
{
	return e1.count>e2.count;
}
vector<int> pt(int a,int b)
{
	vector<int> v;
	bool flag;
	for(int i=a;i<=b;i++)
	{
		if(i!=2&&i%2==0)continue;
		flag=true;
		for (int j = 3; j * j <= i; j++)
		{
			if(i % j == 0)
			{
				flag=false;
				break;
			}
		}
		if(flag==true)
		{
			v.push_back(i);
		}
	}
	return v;
}
bool runnian(short int year)
{
	return ((year%4==0&&year%100!=0)||(year%400==0))?true:false;
}
string string_plus(string s1,string s2)
{
	map<int,string> m;
	for (int i = 0; i < 10; i++)
	{
		m[i]='0'+i;
	}
	int index1,index2,indexD1,indexD2;
	int pos,tmp;
	int i,j,k;
	string str;
	index1 = s1.find(".");
	index2 = s2.find(".");
	indexD1 = s1.length()-index1-1;
	indexD2 = s2.length()-index2-1;
	pos = abs(indexD1-indexD2);
	int flag=0;
	//后面位数大的先上
	if(indexD1>=indexD2)
	{
		for ( i = s1.length()-1,j=0; j < indexD1-indexD2; i--,j++)
		{
			str=s1[i]+str;
		}
		for ( k = s1.length() - pos - 1, i=0; k > index1; k--,i++)
		{

			tmp = (s1[k]-'0')+(s2[s2.length()-1-i]-'0')+flag;
			if(tmp>=10)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
			str=m[tmp%10]+str;			
		}
	}
	if(indexD1<indexD2)
	{
		for ( i = s2.length()-1,j=0; j < indexD2-indexD1; i--,j++)
		{
			str=s2[i]+str;
		}
		for ( k = s2.length() - pos -1, i=0; k > index2; k--,i++)
		{

			tmp = (s2[k]-'0')+(s1[s1.length()-1-i]-'0')+flag;
			if(tmp>=10)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
			str=m[tmp%10]+str;			
		}
	}
	str="."+str;
	//小数部分的加法完成,现在完成整数的加法
	for ( i = index1-1,j=index2-1; i>0 && j >0; i--,j--)
	{
		if(s1[i]==',')
		{
			str=","+str;
			continue;
		}
		tmp = (s1[i]-'0')+(s2[j]-'0')+flag;
		if(tmp>=10)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
		str=m[tmp%10]+str;
	}
	
	if(index1>index2)
	{
		for (; i > 0; i--)
		{
			if(s1[i]==',')
			{
				str=","+str;
				continue;
			}
			tmp=(s1[i]-'0')+flag;
			if(tmp>=10)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
			str=m[tmp%10]+str;	
		}
			
	}
	 if(index1<index2)
	{
		
		for (; j > 0; j--)
		{
			if(s2[j]==',')
			{
				str=","+str;
				continue;
			}
			tmp=(s2[j]-'0')+flag;
			if(tmp>=10)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
			str=m[tmp%10]+str;	
		}
	}
	if(flag==1)
	{
		if(str.find(",")==3)
		{
			str="1,"+str;
		}
		else
		{
			str="1"+str;
		}
	}
	str="$"+str;
	return str;
}
bool Compxulie(const longxulie &l1,const longxulie &l2)
{
	return l1.maxlen>l2.maxlen;
}