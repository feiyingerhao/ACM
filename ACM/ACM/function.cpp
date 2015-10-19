#include"ACM.h"
#include"function.h"
#include"globalVar.h"
void xinjian()
{
	
	for (int i = 1; i <= 50; i++)
	{
		
		string s = "C://Users//haolidong//Documents//Visual Studio 2012//Projects//ACM//Data//4-"+convertToString(i)+".txt";
		FILE *fp=fopen(s.c_str(),"w");
	}
	for (int i = 1; i <= 50; i++)
	{
		
		string s = "C://Users//haolidong//Documents//Visual Studio 2012//Projects//ACM//Data//4-"+convertToString(i)+"-0.txt";
		FILE *fp=fopen(s.c_str(),"w");
	}
	
}
//第二章
void test()
{
	test_describe();
	vector<int> v;
	int i;
	for(i=0;i<10;i++)
	{
		v.push_back(i);
	}
	for(vector<int>::iterator it=v.begin();it != v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<accumulate(v.begin(),v.end(),0)<<endl;
	returnTwo();
}
void vector_test()
{
	vector_describe();
	vector<int> v(3);
	v[0]=2;
	v[1]=7;
	v[2]=9;
	cout<<"使用下标访问vector:"<<endl;
	cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
	
	cout<<"使用迭代器访问vector："<<endl;
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"使用迭代器追加元素:"<<endl;
	//在最前面插入元素8，在第二个元素前插入新元素1，在向量尾部插入元素3，
	v.insert(v.begin(),8);
	v.insert(v.begin()+2,1);
	v.insert(v.end(),3);
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"使用迭代器删除元素："<<endl;
	//删除收元素，删除第一到第三区间的元素（=<   <）
	v.erase(v.begin());
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	v.erase(v.begin()+1,v.begin()+3);
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"正序排序"<<endl;
	sort(v.begin(),v.end());
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"自定义反向排序"<<endl;
	v.insert(v.end(),9);
	v.insert(v.end(),3);
	v.insert(v.end(),2);
	sort(v.begin(),v.end(),Comp);
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"输出向量的大小"<<endl;
	cout<<v.size()<<endl;
	//向量为空的话，输出1（为真）
	cout<<"清空向量后判断向量是否为空:"<<endl;
	v.clear();
	cout<<v.empty()<<endl;
	returnTwo();

}
void string_test()
{
	string_describe();
	string s1,s2,s3;
	char ss[5000];
	scanf("%s",&ss);
	s1="hello";
	s2=ss;
	cout<<"string的两种复制方法:"<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	
	cout<<"string尾部添加字符和字符串:"<<endl;
	s1=s1+'H';
	cout<<s1<<endl;
	s1=s1+"LD";
	cout<<s1<<endl;
	s1.append("HLD");
	cout<<s1<<endl;
	
	cout<<"string插入字符:"<<endl;
	string::iterator it=s1.begin();
	s1.insert(it+1,'p');
	
	cout<<"两个相同的字符串相减的值为0:"<<endl;
	cout<<s1[0]-'h'<<endl;
	
	cout<<"删除string元素:"<<endl;
	s1.erase(it+1);
	cout<<s1<<endl;
	
	cout<<"输出字符串的长度:"<<endl;
	cout<<s1.length()<<endl;
	
	cout<<"判断string是否为空:"<<endl;
	cout<<s1.empty()<<endl;
	
	cout<<"替换字符串:"<<endl;
	//从第三个开始的连续三个替换为haolidong
	s1.replace(3,3,"haolidong");
	cout<<s1<<endl;

	cout<<"搜索string对象的元素或子串:"<<endl;
	s1="hao li dong";
	cout<<s1.find('h')<<endl;
	cout<<s1.find("h")<<endl;
	cout<<s1.find("hao")<<endl;
	cout<<s1.find("asd")<<endl;
	
	cout<<"字符串的反转:"<<endl;
	reverse(s1.begin(),s1.end());
	cout<<s1<<endl;
	
	cout<<"字符串对象作为vector对象:"<<endl;
	vector<string> v;
	v.push_back("hao");
	v.push_back("li");
	cout<<v[1]<<endl;;
	cout<<v[1][1]<<endl;

	cout<<"字符串的数字化处理:"<<endl;
	s1="1234568790";
	int sum=0;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]=='0')sum+=0;
		else if(s1[i]=='1')sum+=1;
		else if(s1[i]=='2')sum+=1;
		else if(s1[i]=='3')sum+=1;
		else if(s1[i]=='4')sum+=1;
		else if(s1[i]=='5')sum+=1;
		else if(s1[i]=='6')sum+=1;
		else if(s1[i]=='7')sum+=1;
		else if(s1[i]=='8')sum+=1;
		else if(s1[i]=='9')sum+=1;
	}
	cout<<sum<<endl;

	cout<<"string对象与scanf:"<<endl;
	char sa[100],sb[100],sc[100];
	sscanf("hao li dong","%s %s %s",sa,sb,sc);
	s1=sa;
	s2=sb;
	s3=sc;
	cout<<s1<<" "<<s2<<" "<<s3<<endl;

	cout<<"string与数值相互转化:"<<endl;
	cout<<convertToString(123)+"1"<<endl;
	cout<<convertFromString("123")+1.0<<endl;
	returnTwo();
	
}
void set_test()
{
	set_describe();
	//set不能插入相同的元素
	set<int> s;
	s.insert(8);
	s.insert(1);
	s.insert(12);
	s.insert(6);
	set<int>::iterator it;
	set<int>::reverse_iterator rit;
	cout<<"set的中序遍历:"<<endl;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<endl;
	}
	for(rit=s.rbegin();rit!=s.rend();rit++)
	{
		cout<<*rit<<endl;
	}
	cout<<"set元素的删除:"<<endl;
	s.erase(6);
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<endl;
	}
	s.insert(6);
	it=s.find(6);
	if(it!=s.end())
		cout<<*it<<endl;
	else
		cout<<"not found"<<endl;

	set<int,myComp> s1;
	s1.insert(8);
	s1.insert(1);
	s1.insert(12);
	s1.insert(6);
	set<int,myComp>::iterator myit;
	for(myit=s1.begin();myit!=s1.end();myit++)
	{
		cout<<*myit<<" ";
	}
	cout<<endl;

	set<Info> s2;
	Info info;
	info.name="Jack";
	info.score=80.5;
	s2.insert(info);
	info.name="Tom";
	info.score=20.5;
	s2.insert(info);
	info.name="Jin";
	info.score=90.5;
	s2.insert(info);
	set<Info>::iterator infoit;
	for(infoit=s2.begin();infoit!=s2.end();infoit++)
	{
		cout<<(*infoit).name<<" "<<(*infoit).score<<endl;
	}
	returnTwo();
}
void multiset_test()
{
	multiset_describe();
	cout<<"multiset 元素的插入:"<<endl;
	multiset<string> ms;
	ms.insert("abc");
	ms.insert("123");
	ms.insert("111");
	ms.insert("aaa");
	ms.insert("abc");
	multiset<string>::iterator it;
	for(it=ms.begin();it!=ms.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"元素的删除:"<<endl;
	ms.erase("abc");
	for(it=ms.begin();it!=ms.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"元素的查找:"<<endl;
	it=ms.find("111");
	if(it!=ms.end())
		cout<<*it<<endl;
	else
		cout<<"not found"<<endl;
	returnTwo();
}
void map_test()
{
	map_describe();
	cout<<"插入元素:"<<endl;
	map<string,float> m;
	m["Jack"]=98.5;
	m["Bomi"]=96.0;
	m["Kate"]=97.5;
	map<string,float>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<"反向遍历元素："<<endl;
	map<string,float>::reverse_iterator rit;
	for(rit=m.rbegin();rit!=m.rend();rit++)
	{
		cout<<(*rit).first<<" "<<(*rit).second<<endl;
	}
	cout<<"删除元素:"<<endl;
	m.erase("Jack");
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<"查找元素"<<endl;
	it=m.find("Kate");
	if(it!=m.end())
		cout<<(*it).first<<" "<<(*it).second<<endl;
	else
		cout<<"not found"<<endl;
	cout<<"重新定义排序（从大到小）:"<<endl;
	map<int,char,myComp> m2;
	map<int,char,myComp>::iterator m2it;
	m2[25]='m';
	m2[28]='k';
	m2[10]='x';
	m2[30]='a';
	for(m2it=m2.begin();m2it!=m2.end();m2it++)
	{
		cout<<(*it).first<<":"<<(*it).second<<endl;
	}
	map<Info,int> m3;
	map<Info,int>::iterator m3it;
	Info info;
	info.name="Jack";
	info.score=80.5;
	m3[info]=25;
	info.name="Tom";
	info.score=20.5;
	m3[info]=10;
	info.name="Jin";
	info.score=90.5;
	m3[info]=30;
	for(m3it=m3.begin();m3it!=m3.end();m3it++)
	{
		cout<<(*m3it).second<<":"<<(*m3it).first.name<<" "<<(*m3it).first.score<<endl;
	}
	cout<<"map实现数字分离:"<<endl;
	map<char,int> m4;
	map<int,char> m5;
	m4['0']=0;
	m4['1']=1;
	m4['2']=2;
	m4['3']=3;
	m4['4']=4;
	m4['5']=5;
	m4['6']=6;
	m4['7']=7;
	m4['8']=8;
	m4['9']=9;

	m5[0]='0';
	m5[1]='1';
	m5[2]='2';
	m5[3]='3';
	m5[4]='4';
	m5[5]='5';
	m5[6]='6';
	m5[7]='7';
	m5[8]='8';
	m5[9]='9';
	/*这个和上面的是等价的
	for(int i=0;i<10;i++)
	{
		m4['0'+i]=i;
	}
	for(int i=0;i<10;i++)
	{
		m4[i]='0'+i;
	}
	*/
	string sa="12345";
	int sum=0;
	for(int i=0;i<sa.length();i++)
	{
		sum+=m4[sa[i]];
	}
	cout<<"sum="<<sum<<endl;

	int num1=5;
	cout<<"5"<<endl;
	string s="the num is ";
	cout<<s+m5[num1]<<endl;//不能cout<<"5"+m5[num1]<<endl;
	returnTwo();

}
void multimap_test()
{
	multimap_describe();
	cout<<"元素的插入:"<<endl;
	multimap<string,double> m;
	m.insert(pair<string,double>("Jack",300.5));
	m.insert(pair<string,double>("Kity",200));
	m.insert(pair<string,double>("Memi",600));
	m.insert(pair<string,double>("Jack",400));
	multimap<string,double>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<"删除元素:"<<endl;
	m.erase("Jack");
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	it=m.find("Jack");
	if(it!=m.end())
		cout<<(*it).first<<" "<<(*it).second<<endl;
	else
		cout<<"not found"<<endl;
	returnTwo();

}
void deque_test()
{
	deque_describe();
	deque<int> d;
	deque<int>::iterator dit;
	deque<int>::reverse_iterator rdit;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_front(10);//会将前面的1覆盖
	d.insert(d.begin()+1,111);//会将2覆盖
	for(int i=0;i<d.size();i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
	cout<<"迭代器的方式遍历:"<<endl;
	for(dit=d.begin();dit!=d.end();dit++)
	{
		cout<<(*dit)<<" ";
	}
	cout<<endl;

	cout<<"迭代器的反向遍历:"<<endl;
	for(rdit=d.rbegin();rdit!=d.rend();rdit++)
	{
		cout<<(*rdit)<<" ";
	}
	cout<<endl;
	cout<<"前面删除元素:"<<endl;
	d.pop_front();
	for(dit=d.begin();dit!=d.end();dit++)
	{
		cout<<(*dit)<<" ";
	}
	cout<<endl;

	cout<<"中间删除元素:"<<endl;
	d.erase(d.begin()+1);
	for(dit=d.begin();dit!=d.end();dit++)
	{
		cout<<(*dit)<<" ";
	}
	cout<<endl;
	cout<<"清空元素:"<<endl;
	d.clear();
	cout<<d.size()<<endl;
	returnTwo();
	
}
void list_test()
{
	list_describe();
	list<int> l;
	list<int>::iterator it;
	list<int>::reverse_iterator rit;
	cout<<"插入元素:"<<endl;
	l.push_back(2);
	l.push_back(1);
	l.push_back(5);
	l.push_front(8);
	//链表的迭代器只能进行++或者是--的操作，不能进行+n操作
	for(it=l.begin();it!=l.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;

	for(rit=l.rbegin();rit!=l.rend();rit++)
	{
		cout<<(*rit)<<" ";
	}
	cout<<endl;
	
	cout<<"元素的删除:"<<endl;
	l.remove(1);
	for(it=l.begin();it!=l.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
	l.pop_front();
	for(it=l.begin();it!=l.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
	it=find(l.begin(),l.end(),5);
	if(it!=l.end())
		cout<<(*it)<<endl;
	else
		cout<<"not found"<<endl;
	l.push_back(1);
	l.push_back(3);
	l.push_back(4);
	l.push_back(1);
	l.push_back(1);
	cout<<"排序:"<<endl;
	for(it=l.begin();it!=l.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
	cout<<"剔除连续重复的元素【请注意是连续重复】:"<<endl;
	l.unique();
	for(it=l.begin();it!=l.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
	returnTwo();

}
void bitset_test()
{
	bitset_describe();
	bitset<10> b,b2;
	cout<<"元素的设置:"<<endl;
	b[1]=1;
	b[6]=1;
	b[9]=1;
	for(int i=b.size()-1;i>=0;i--)
	{
		cout<<b[i];
	}
	cout<<endl;
	b.set();//将元素全部设置为1
	for(int i=b.size()-1;i>=0;i--)
	{
		cout<<b[i];
	}
	cout<<endl;
	b.reset(1);
	for(int i=b.size()-1;i>=0;i--)
	{
		cout<<b[i];
	}
	cout<<endl;
	b.set(2,0);
	for(int i=b.size()-1;i>=0;i--)
	{
		cout<<b[i];
	}
	cout<<endl;
	returnTwo();
}
void stack_test()
{
	stack_describe();
	stack<int> s;
	cout<<"stack常用方法:"<<endl;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(9);
	cout<<s.top()<<endl;
	cout<<s.empty()<<endl;
	while(s.empty()!=true)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	returnTwo();
}
void queue_test()
{
	queue_describe();
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(9);
	cout<<q.size()<<endl;
	cout<<q.empty()<<endl;
	cout<<q.front()<<endl;
	cout<<q.back()<<endl;
	while(q.empty()!=true)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	returnTwo();
}
void priority_queue_test()
{
	priority_queue_describe();
	priority_queue<int> pq;
	priority_queue<Info> pq1;
	priority_queue<int,vector<int>,myComp> pq2;//显式说明内部的结构是vector
	Info info;
	pq.push(1);
	pq.push(2);
	pq.push(3);
	pq.push(9);
	cout<<"priority_queue的输入、删除和遍历:"<<endl;
	cout<<pq.size()<<endl;
	while(pq.empty()!=true)
	{
		cout<<pq.top()<<endl;
		pq.pop();
	}
	cout<<endl;

	info.name="Jack";
	info.score=68.5;
	pq1.push(info);
	info.name="Bomi";
	info.score=18.5;
	pq1.push(info);
	info.name="Peti";
	info.score=90;
	pq1.push(info);
	cout<<"重载<的优先级队列:"<<endl;
	while(pq1.empty()!=true)
	{
		cout<<pq1.top().name<<":"<<pq1.top().score<<endl;
		pq1.pop();
	}
	pq2.push(3);
	pq2.push(4);
	pq2.push(2);
	pq2.push(7);
	while(pq2.empty()!=true)
	{
		cout<<pq2.top()<<" ";
		pq2.pop();
	}
	cout<<endl;
	returnTwo();
}
//第三章
void readANumber()
{
	ifstream cin(cal_Path("3","1"));
	int n;
	while(cin>>n)
	{
		cout<<n*n<<endl;
	}
}
void readTwoNumber()
{
	ifstream cin(cal_Path("3","2"));
	int m,n;
	while(cin>>m>>n)
	{
		cout<<m-n<<endl;
	}
}
void jiecheng()
{
	ifstream cin(cal_Path("3","3"));
	int n;
	while(cin>>n)
	{
		int sum=0;
		int tmp=1;
		for(int i=1;i<=n;i++)
		{
			tmp=tmp*i;
			sum+=tmp;
		}
		cout<<sum<<endl;

	}
}
void dengbi()
{
	
	ifstream cin(cal_Path("3","4"));
	int num;
	double q;
	double sum;
	cout.precision(3);
	while(cin>>num>>q)
	{
		if(num==1)
		{
			cout<<num*q<<endl;
		} else {
			sum=(1-pow(q,num+1))/(1-q);
			//加入fixed以后才是小数的后面三位
			cout<<fixed<<sum<<endl;
		}
	}
}
void fibo()
{
	ifstream cin(cal_Path("3","5"));
	int num;
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	for(int i=3;i<=47;i++)
	{
		v.push_back(v[i-2]+v[i-3]);
	}
	while(cin>>num)
	{
		cout<<v[num]<<endl;
	}
}
void zuixiaogongyueshu()
{
	ifstream cin(cal_Path("3","6"));
	int num1,num2;
	while(cin>>num1>>num2)
	{
		cout<<gcd(num1,num2)<<endl;
	}
}
void zuidagongbeishu()
{
	ifstream cin(cal_Path("3","7"));
	int num1,num2;
	while(cin>>num1>>num2)
	{
		cout<<num1*num2/gcd(num1,num2)<<endl;
	}
}
void countAverage()
{
	ifstream cin(cal_Path("3","8"));
	int num1,num2;
	cout.precision(3);
	while(cin>>num1)
	{
		double sum=0.0;
		for(int i=0;i<num1;i++)
		{
			cin>>num2;
			sum+=num2;
		}
		cout<<fixed<<sum/num1<<endl;
	}
}
void SymmetricThreeDigit()
{
	ifstream cin(cal_Path("3","9"));
	int num;
	while(cin>>num)
	{
		if(num>=100&&num<=999&&(num/100==num%10)&&isPrime(num))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}
void tenTransTwo()
{
	ifstream cin(cal_Path("3","10"));
	int num;
	while(cin>>num)
	{
		string str;
		int num1=abs(num);
		
		do{
			
			str=((num1-num1/2*2)==1?'1':'0')+str;
			num1=num1/2;

		}while(num1!=0);
		cout<<num<<(num>=0?"-->":"-->-")<<str<<endl;
		str.clear();
	}
}
void listWanshu()
{
	ifstream cin(cal_Path("3","11"));
	int num;
	while(cin>>num)
	{
		cout<<num<<":";
		for(int i=2;i<=num;i++)
		{
			if(listWanshu_single(i)==true)
			{
				cout<<" "<<i;
			}
		}
		cout<<endl;
	}
}
void peidui()
{
	ifstream cin(cal_Path("3","12"));
	int num;
	int count=0;
	vector<int> v;
	int num12=2*3*4*5*6*7*8*9*10*11*12;
	while(cin>>num)
	{
		v.push_back(num);
	}
	for(int i=0;i<v.size()-1;i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(num12/v[i]==v[j])
			{
				count++;
				v.erase(v.begin()+i);
				v.erase(v.begin()+j-1);
				i=0;
				break;
			}
		}
	}
	cout<<count<<endl;
}
void SymmetricFiveDigit()
{
	ifstream cin(cal_Path("3","13"));
	int num;
	vector<int> v;
	while(cin>>num)
	{		
		
		bool flag=true;
		int num_copy=num;
		//把每一个数字输入到vector中
		while(num!=0)
		{
			v.push_back(num%10);
			num=num/10;

		}
		for (int i = 0; i < v.size()/2; i++)
		{
			if(v[i]!=v[v.size()-1-i])
			{
				flag=false;
				break;
			}
		}
		cout<<((flag==true&&isPrime(num_copy))?"Yes":"No")<<endl;
		v.clear();
	}
}
void sortForOneZero()
{
	ifstream cin(cal_Path("3","14"));
	string s;
	multiset<string,myCompForZeroOne> ms;
	multiset<string,myCompForZeroOne>::iterator mit;
	while(cin>>s)
	{
		ms.insert(s);
	}
	for (mit = ms.begin(); mit != ms.end(); mit++)
	{
		cout<<(*mit)<<endl;
	}
}
void symmetricStrSort()
{
	ifstream cin(cal_Path("3","15"));
	string s;
	multiset<string,strComp> ms;
	multiset<string,strComp>::iterator mit;
	while(cin>>s)
	{
		if(symmetricStr(s))ms.insert(s);
	}
	for (mit = ms.begin(); mit != ms.end(); mit++)
	{
		cout<<(*mit)<<endl;
	}
}
void jidianSort()
{
	ifstream cin(cal_Path("3","16"));
	int num;
	student stu;
	vector<int> v;
	multiset<student,jidian_Sort> vstu;
	multiset<student,jidian_Sort>::iterator mit;
	cin>>num;//输入的是班级号
	for(int i=0;i<num;i++)
	{
		int course_num;
		cin>>course_num;
		int credit;
		for (int j = 0; j < course_num; j++)
		{
			cin>>credit;
			v.push_back(credit);
		}
		int stu_num;
		cin>>stu_num;//输入学生的数目
		string name;
		for (int k = 0; k <stu_num; k++)
		{
			cin>>name;
			stu.name=name;
			float course_score;
			for (int j = 0; j < course_num; j++)
			{
				cin>>course_score;
				stu.score.push_back(course_score);
			}
			cal_stuAve(stu,v);
			vstu.insert(stu);
			stu.score.clear();
		}
		cout<<"class "<<num<<":"<<endl;
		for (mit=vstu.begin();mit!=vstu.end();mit++)
		{
			cout<<fixed<<setprecision(2);
			cout<<left<<setw(11);
			cout<<(*mit).name<<"\t"<<(*mit).ave<<endl;;
			//cout<<(*mit).score<<endl;
		}
	}

}
void sortByOne()
{
	ifstream cin(cal_Path("3","17"));
	string s;
	multiset<string,strCompTwo> ms;
	multiset<string,strCompTwo>::iterator mit;
	while (cin>>s)
	{
		ms.insert(s);
	}
	for (mit = ms.begin(); mit != ms.end(); mit++)
	{
		cout<<(*mit)<<endl;
	}
}
//第四章
void QuickSum()
{
	
	ifstream cin(cal_Path("4","1"));
	char ch[256];
	while (cin.getline(ch,256))
	{
		if(ch[0]=='#')break;
		int sum=0;
		for (int i = 0; ch[i]!='\0'; i++)
		{
			if(ch[i]!=' ')sum+=(ch[i]-'A'+1)*(i+1);
		}
		cout<<sum<<endl;
	}
}
void IBMMinusOne()
{
	ifstream cin(cal_Path("4","2"));
	map<char,char> m;
	for(int i=0;i<25;i++)
	{
		m['A'+i]='A'+i+1;
	}
	m['Z']='A';
	
	int num;
	string  s;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>s;
		cout<<"String #"<<i+1<<endl;
		for (int j = 0; j < s.length(); j++)
		{
			cout<<m[s[j]];
		}
		cout<<endl<<endl;
	}
}
void BinaryNumbers()
{
	ifstream cin(cal_Path("4","3"));
	vector<int> v;
	int num,pos,record;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		int count;
		pos=record=0;
		v.clear();
		cin>>count;
		do
		{
			v.push_back(count%2);
			
			if(count%2==1)
			{
				pos=record;
			}
			count/=2;
			record++;
		} while (count!=0);
		for (int j = 0; j < v.size(); j++)
		{
			if(j==pos)
			{
				cout<<j;
			}
			else
			{
				if(v[j]==1)
				{
					cout<<j<<" ";
				}
			}
		}
		cout<<endl;
	}
}
void Encoding()
{
	ifstream cin(cal_Path("4","4"));
	int num;
	string s;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>s;
		int count=1;
		for (int j = 1; j < s.length(); j++)
		{
		
			if(s[j]!=s[j-1])
			{
				if(count!=1)cout<<count;
				cout<<s[j-1];			
				count=1;
			}
			else
			{
				count++;
			}
			if(j==s.length()-1)
			{
				if(count!=1)cout<<count;
				cout<<s[j];
			}
		}
		cout<<endl;
	}
}
void LookAndSay()
{
	ifstream cin(cal_Path("4","5"));
	int num;
	string s;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>s;
		int count=1;
		for (int j = 1; j < s.length(); j++)
		{
		
			if(s[j]!=s[j-1])
			{
				cout<<count<<s[j-1];	
				count=1;
			}
			else
			{
				count++;
			}
			if(j==s.length()-1)
			{
				cout<<count<<s[j];
			}
		}
		cout<<endl;
	}
}
void Abbreviation()
{
	ifstream cin(cal_Path("4","6"));
	int num;
	string s1,s2;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		int numA,numB;
		cin>>numA;
		string s1_Abb;
		string s2_Abb;
		for (int j = 0; j < numA; j++)
		{
			cin>>s1;
			s1_Abb=s1_Abb+s1[0];
		}
		cin>>numB;
		for (int j = 0; j < numB; j++)
		{
			cin>>s2;
			s2_Abb=s2_Abb+s2[0];
		}
		if(s1_Abb.compare(s2_Abb)==0)
		{
			cout<<"SAME";
		}
		else
		{
			cout<<"DIFFERENT";
		}
		cout<<endl;
		s1_Abb.clear();
		s2_Abb.clear();
	}
}
void TheSevenPercentSolution()
{
	ifstream cin(cal_Path("4","7"));
	char ch[256];
	while (cin.getline(ch,256))
	{
		if(ch[0]=='#')break;
		for (int i = 0; ch[i]!='\0'; i++)
		{
			if(ch[i]==' ')cout<<"%20";
			else if(ch[i]=='!')cout<<"%21";
			else if(ch[i]=='$')cout<<"%24";
			else if(ch[i]=='%')cout<<"%25";
			else if(ch[i]=='(')cout<<"%28";
			else if(ch[i]==')')cout<<"%29";
			else if(ch[i]=='*')cout<<"%2a";
			else cout<<ch[i];
		}
		cout<<endl;
	}
}
void DigitalRoots()
{
	ifstream cin(cal_Path("4","8"));
	string s;
	int sum;
	while (cin>>s)
	{
		if(s[0]=='0')break;
		sum=0;
		for (int p=0;sum>=10||sum==0;p++)
		{
			if(p!=0)
			{
				s=convertToInt(sum);
				sum=0;
			}
			for (int i = 0; i < s.length(); i++)
			{
				sum=sum+(s[i]-'0');
			}
		}
		cout<<sum<<endl;

	}
}
void BoxofBricks()
{
	ifstream cin(cal_Path("4","9"));
	int num;
	int count=0;
	vector<int> v;
	for (int count=1;cin>>num;count++)
	{
		if(num==0)break;
		int sum,ave,tmp_num,abs_sum;
		sum=ave=abs_sum=0;
		for (int i = 0; i < num; i++)
		{
			cin>>tmp_num;
			v.push_back(tmp_num);
			sum+=tmp_num;
		}
		ave=sum/num;
		for (int i = 0; i < num; i++)
		{
			abs_sum+=abs(v[i]-ave);
		}
		cout<<"Set #"<<count<<endl;
		cout<<"The minimum number of moves is "<<abs_sum/2<<endl;
	}
}
void GeometryMadeSimple()
{
	ifstream cin(cal_Path("4","10"));
	int a,b,c;
	cout.precision(3);
	for (int count=1;cin>>a>>b>>c;count++)
	{
		if(a==0&&b==0&&c==0)break;
		cout<<"Triangle #"<<count<<endl;
		if(a==-1)
		{
			if(c-b>0)
			{
				cout<<"a = "<<fixed<<sqrt(c*c-b*b);
			}
			else
			{
				cout<<"Impossible.";
			}
			
		}
		else if(b==-1)
		{
			if(c-a>0)
			{
				cout<<"b = "<<fixed<<sqrt(c*c-a*a);
			}
			else
			{
				cout<<"Impossible.";
			}
		}
		else if(c==-1)
		{
			cout<<"c = "<<fixed<<sqrt(a*a+b*b);
		}
		cout<<endl;
	}
}
void ReverseText()
{
	ifstream cin(cal_Path("4","11"));
	char ch[256];
	string s;
	int i=0;
	while(cin.getline(ch,256))
	{
		if(i==0)
		{
			i=1;
			continue;
		}
		s=ch;
		reverse(s.begin(),s.end());
		cout<<s<<endl;
	}

}
void WordReversal()
{
	ifstream cin(cal_Path("4","12"));
	int num;
	char ch[256];
	string s,subs;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		int count;
		cin>>count;
		int count_tmp=0;
		while((cin.getline(ch,256)))
		{
			if(count_tmp==0)
			{
				count_tmp=1;
				continue;
			}
			s=ch;
			for (int j = 0,start=0; j < s.length(); j++)
			{
				if(s[j]==' ')
				{
					subs=s.substr(start,j-start);
					reverse(subs.begin(),subs.end());
					cout<<subs<<" ";
					start=j+1;
				}
				if(j==s.length()-1)
				{
					subs=s.substr(start,j-start+1);
					reverse(subs.begin(),subs.end());
					cout<<subs;
				}
			}
			cout<<endl;
		}
	}
}
void ASimpleQuestionofChemistry()
{
	ifstream cin(cal_Path("4","13"));
	double num,before;
	cout.precision(2);
	for (int i=0;cin>>num;i++)
	{
		if(num==999)break;
		if(i==0)
		{
			before=num;
		}
		else
		{
			cout<<fixed<<num-before<<endl;
			before=num;
		}

	}
	cout<<"End of Output"<<endl;
}
void AddingReversedNumbers()
{
	ifstream cin(cal_Path("4","14"));
	int num;
	string s1,s2,tmp;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>s1>>s2;
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		tmp=convertToInt(convertFromInt(s1)+convertFromInt(s2));
		reverse(tmp.begin(),tmp.end());
		cout<<convertFromInt(tmp)<<endl;
	}
}
void ImageTransformation()
{
	ifstream cin(cal_Path("4","15"));
	int row,col,num;
	int RGB[256][256]={0};
	int count=1;
	while (cin>>row>>col)
	{
		if(row==0&&col==0)break;
		for (int k = 0; k < 3; k++)
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cin>>num;
					RGB[i][j]+=num;
				}
			}
		}
		cout<<"Case "<<count<<":"<<endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if(j==col-1)
				{
					cout<<RGB[i][j]/3<<endl;
					RGB[i][j]=0;
				}
				else
				{
					cout<<RGB[i][j]/3<<",";
					RGB[i][j]=0;
				}
			}
		}
		count++;
	}
}
void BeautifulMeadow()
{
	ifstream cin(cal_Path("4","16"));
	int sum,num;
	int row,col;
	int Meadow[256][256]={0};
	while (cin>>row>>col)
	{
		if(row==0&&col==0)break;
		bool flag=true;
		sum=0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin>>num;
				Meadow[i][j]=num;
				sum=sum+num;
			}
		}
		if(sum==col*row)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					if(i==row-1&&j!=col-1)
					{
						if(Meadow[i][j]==0&&Meadow[i][j+1]==0)
						{
							flag=false;
							break;
						}
					}
					if(j==col-1&&i!=row-1)
					{
						if(Meadow[i][j]==0&&Meadow[i+1][j]==0)
						{
							flag=false;
							break;
						}
					}
					if(j!=col-1&&i!=col-1)
					{
						if((Meadow[i][j]==0&&Meadow[i+1][j]==0)||(Meadow[i][j]==0&&Meadow[i][j+1]==0))
						{
							flag=false;
							break;
						}
					}
				}
				if(flag==false)break;
			}
			if(flag==false)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		
	}

}
void DNASorting()
{
	ifstream cin(cal_Path("4","17"));
	int num,rows,cols;
	string s;
	DNA dna;
	multiset<DNA,DNA_sort> m;
	multiset<DNA,DNA_sort>::iterator mit;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>rows>>cols;
		for (int j = 0; j < cols; j++)
		{
			cin>>s;
			dna.sum=cal_sort(s);
			dna.dnalist=s;
			m.insert(dna);
		}
		for (mit = m.begin();mit!=m.end(); mit++)
		{
			cout<<(*mit).dnalist<<endl;
		}
	}


}
void DaffodilNumber()
{
	ifstream cin(cal_Path("4","18"));
	int num;
	int a;
	int b;
	int c;
	while (cin>>num)
	{
		if(num<100&&num>999)break;
		a=num/100;
		b=(num/10)%10;
		c=num%10;
		if(num==pow(a,3)+pow(b,3)+pow(c,3))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
void ErrorCorrection()
{
	ifstream cin(cal_Path("4","19"));
	int mat[256][256];
	int num,digit,sum;
	vector<int> row,col;
	while(cin>>num)
	{
		if(num==0)break;
		row.clear();
		col.clear();
		for (int i = 0; i < num; i++)
		{
			sum=0;
			for (int j = 0; j < num; j++)
			{
				cin>>digit;
				mat[i][j]=digit;
				sum=sum+digit;
			}
			if(sum%2!=0)row.push_back(i+1);
		}
		for (int j = 0; j < num; j++)
		{
			sum=0;
			for (int i = 0; i < num; i++)
			{
				sum=sum+mat[i][j];
			}
			if(sum%2!=0)col.push_back(j+1);
		}
		if(row.size()==0&&col.size()==0)
		{
			cout<<"OK"<<endl;
		}
		if(row.size()==1&&col.size()==1)
		{
			cout<<"Change bit ("<<row[0]<<","<<col[0]<<")"<<endl;
		}
		if(row.size()>1||col.size()>1)
		{
			cout<<"Corrupt"<<endl;
		}
	}
	

}
void MartianAddition()
{
	ifstream cin(cal_Path("4","20"));
	string s,s1,s2;
	map<int,char> m1;
	map<char,int> m2;
	for (int i = 0; i < 10; i++)
	{
		m1[i]='0'+i;
		m2[i+'0']=i;
	}
	for(int i=10;i<20;i++)
	{
		m1[i]='a'+i-10;
		m2[i-10+'a']=i;
	}
	while (cin>>s1>>s2)
	{
		if(s1.length()<s1.length())
		{
			s=s1;
			s1=s2;
			s2=s;
		}
		int jinwei=0;
		for (int i = s2.length()-1,k=s1.length()-1; i >=0; i--,k--)
		{
			if(m2[s1[k]]+m2[s2[i]]+jinwei>=20)
			{
				s1[k]=m1[m2[s1[k]]+m2[s2[i]]+jinwei-20];
				jinwei=1;
			}
			else
			{
				s1[k]=m1[m2[s1[k]]+m2[s2[i]]+jinwei];
				jinwei=0;
			}
		}
		for (int i = s1.length()-s2.length()-1; i >= 0; i--)
		{
			if(m2[s1[i]]+jinwei>=20)
			{
				s1[i]=m1[m2[s1[i]]+jinwei-20];
				jinwei=1;
			}
			else
			{
				s1[i]=m1[m2[s1[i]]+jinwei];
				jinwei=0;
			}
		}
		if(jinwei==1)
		{
			s1="1"+s1;
		}
		cout<<s1<<endl;

	}
}
void FatMouseTrade()
{
	ifstream cin(cal_Path("4","21"));
	Trade t1;
	vector<Trade> v;
	int num;
	double F,A;
	double total,finaltrade;
	cout.precision(3);
	while (cin>>total>>num)
	{
		if(total==-1&&num==-1)break;
		v.clear();
		for (int i = 0; i < num; i++)
		{
			cin>>F>>A;
			t1.F=F;
			t1.A=A;
			t1.bi=F/A;
			v.push_back(t1);
		}
		sort(v.begin(),v.end(),Comp_trade);
		finaltrade=0;
		for (int j = 0; j < v.size() && total>0; j++)
		{
			if(total>=v[j].A)
			{
				finaltrade = finaltrade + v[j].F;
				total=total-v[j].A;
			}
			else
			{
				finaltrade = finaltrade + total * v[j].F / v[j].A;
				total = 0;
			}
		}
		cout<<fixed<<finaltrade<<endl;
	}

}
void ListtheBooks()
{
	ifstream cin(cal_Path("4","22"));
	Book b;
	vector<Book> v;
	int num;
	string sortst;//排序的标准
	string name;
	int year;
	double price;
	while (cin>>num)
	{
		if(num==0)break;
		v.clear();
		for (int i = 0; i < num; i++)
		{
			cin>>name>>year>>price;
			b.name=name;
			b.year=year;
			b.price=price;
			v.push_back(b);
		}
		cin>>sortst;
		if(sortst.compare("Name")==0)sort(v.begin(),v.end(),Comp_Book_Name);
		if(sortst.compare("Year")==0)sort(v.begin(),v.end(),Comp_book_Year);
		if(sortst.compare("Price")==0)sort(v.begin(),v.end(),Comp_book_Price);
		for (int i = 0; i < v.size(); i++)
		{
			cout<<v[i].name<<" "<<v[i].year<<" "<<v[i].price<<endl;
		}
		cout<<endl;
	}
}
void HeadToHeadMatch()
{
	ifstream cin(cal_Path("4","23"));
	int num;
	int count;
	while (cin>>num)
	{
		if(num==0)break;
		count=0;
		while (num!=1)
		{
			if(num%2==0)
			{
				num=num/2;
			}
			else
			{
				num=num/2+1;
			}
			count++;
		}
		cout<<count<<endl;
	}
}
void WindowsMessageQueue()
{
	ifstream cin(cal_Path("4","24"));
	multiset<order,order_sort> m;
	order o;
	string ordername,name;
	int parameter;
	int priority;
	while (cin>>ordername)
	{
		if(ordername.compare("GET")==0)
		{
			if(m.size()==0)
			{
				cout<<"EMPTY QUEUE!"<<endl;
			}
			else
			{
				cout<<(*m.begin()).name<<" "<<(*m.begin()).parameter<<endl;
				m.erase(m.begin());
			}
		}
		if(ordername.compare("PUT")==0)
		{
			cin>>name>>parameter>>priority;
			o.name=name;
			o.parameter=parameter;
			o.priority=priority;
			m.insert(o);
		}
	}


}
void LanguageofFatMouse()
{
	ifstream cin(cal_Path("4","25"));
	string s;
	char s1[256],s2[256];
	map<string,string> m;
	map<string,string>::iterator mit;
	while (getline(cin,s))//gets后面必须为char*   sscanf s.c_str()  char* char*
	{
		
		if(s=="")break;
		sscanf(s.c_str(),"%s %s",s1,s2);
		m[s2]=s1;
	}
	while(cin>>s)
	{
		mit=m.find(s);
		if(mit!=m.end())cout<<m[s]<<endl;
		else
			cout<<"en"<<endl;
	}

}
void Palindromes()
{
	ifstream cin(cal_Path("4","26"));
	char s[5000];
	int i,length,left,right,center,count;
	while (cin>>s)
	{
		length=strlen(s);
		count=0;
		for (int i = 0; i < length-1; i++)
		{
			center = (length-1-i)/2+i;//i表示中间字符串的偏移
			if((length-1-i)%2==0)//中间的间隔有偶数个，实则为奇数串
			{
				left=center-1;//i表示中间字符串的偏移
				right=center+1;
			}
			else
			{
				left=center;
				right=center+1;
			}
			while (right<=length-1)
			{
				if(s[left]==s[right])
				{
					count++;
					left--;
					right++;
				}
				else
				{
					break;
				}
			}
		}
		for (int i = length-2; i >= 1; i--)
		{
			center = i/2;
			if(i%2==0)
			{
				left=center-1;
				right=center+1;
			}
			else
			{
				left=center;
				right=center+1;
			}
			while (left>=0)
			{
				if(s[left]==s[right])
				{
					count++;
					left--;
					right++;
				}
				else
				{
					break;
				}
			}
		}
		cout<<count+length<<endl;
	}
}
void Palindromes2()
{
	/*
		首先从第二个开始遍历到倒数的第二个，然后第二个和左右两边的分别组成一个三个的，然后5个的，依次判断
		然后第二个和左边的组成2个，然后2，4，6依次判断，最后由于最后一个和最后第二个的情况被漏掉了
		所以最后的时候加上了一个判断
	*/
	ifstream cin(cal_Path("4","26"));
	char s[5000];
	int i,length,left,right,center,count;
	while (cin>>s)
	{
		length=strlen(s);
		count=0;
		for (int i = 1; i < length-1; i++)
		{
			left=i-1;
			right=i+1;
			while (left>=0&&right<=length-1)
			{
				if(s[left]==s[right])
				{
					count++;
					left--;
					right++;
				}
				else
				{
					break;
				}
			}
			left=i-1;
			right=i;
			while (left>=0&&right<=length-1)
			{
				if(s[left]==s[right])
				{
					count++;
					left--;
					right++;
				}
				else
				{
					break;
				}
			}
		}
		if(s[length-1]==s[length-2])
		{
			count++;
		}
		cout<<count+length<<endl;

	}
}
void RootoftheProblem()
{
	ifstream cin(cal_Path("4","27"));
	double B,N;
	while (cin>>B>>N)
	{
		if(B==0&&N==0)break;
		int tmp;
		tmp=pow(B,1/N);
		if((B-pow(tmp,N))<=(pow(tmp+1,N)-B))
			cout<<tmp<<endl;
		else
			cout<<tmp+1<<endl;
	}
}
void MagicSquare()
{
	ifstream cin(cal_Path("4","28"));
	int num;
	int digit;
	int a[10][10];
	while (cin>>num)
	{
		if(num==0)break;
		bool flag=true;
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < num; j++)
			{
				cin>>digit;
				a[i][j]=digit;
			}
		}

		for (int i = 0; i < num*num-1; i++)
		{
			for (int j = i+1; j < num*num; j++)
			{
				if(a[i/num][i-(i/num)*num]==a[j/num][j-(j/num)*num])
				{
					flag=false;
					break;
				}
			}
			if(flag==false)break;
		}
		int sum=0;
		int fsum;
		for (int i = 0; i < num && flag==true; i++)
		{
			fsum=0;
			for (int j = 0; j < num; j++)
			{
				if(i==0)
				{
					sum=sum+a[i][j];
				}
				else
				{
					fsum=fsum+a[i][j];
				}
			}
			if(i!=0&&sum!=fsum)
			{
				flag=false;
				break;
			}
		}
		for (int j = 0; j < num && flag==true; j++)
		{
			fsum=0;
			for (int i = 0; i < num; i++)
			{
				fsum=fsum+a[i][j];
			}
			if(sum!=fsum)
			{
				flag=false;
				break;
			}
		}
		fsum=0;
		for (int i = 0; i < num && flag==true; i++)
		{
			fsum=fsum+a[i][i];
		}
		if(sum!=fsum)
		{
			flag=false;
		}
		fsum=0;
		for (int i = 0; i < num && flag==true; i++)
		{
			fsum=fsum+a[num-1-i][i];
		}
		if(sum!=fsum)
		{
			flag=false;
		}
		if(flag==true)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
void SemiPrime()
{
	ifstream cin(cal_Path("4","29"));
	vector<int> v;
	set<int> s;
	set<int>::iterator sit;
	int p,num;
	v=pt(2,500000);
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			p=v[i]*v[j];
			if(p<=1000000)
			{
				s.insert(p);
			}
			else
			{
				break;
			}
		}
	}
	while(cin>>num)
	{
		sit=s.find(num);
		if(sit!=s.end())
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}
void BeautifulNumber()
{
	ifstream cin(cal_Path("4","30"));
	int a[100000];
	int i=0;
	int j=3;
	while (true)
	{
		if(j%3==0||j%5==0)
		{
			a[i++]=j;
			if(i==100000)break;
		}
		j++;
	}
	int num;
	while(cin>>num)
	{
		cout<<a[num-1]<<endl;
	}
}
void PhoneList()
{
	ifstream cin(cal_Path("4","31"));
	vector<string> v;
	string s;
	int num,count;
	bool flag;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>count;
		v.clear();
		flag=true;
		for (int j = 0; j < count; j++)
		{
			cin>>s;
			v.push_back(s);
		}
		sort(v.begin(),v.end());
		for (int p = 1; p < v.size(); p++)
		{
			if(v[p].find(v[p-1])==0)
			{
				flag=false;
				break;
			}
		}
		if(flag==true)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

}
void Calendar()
{
	ifstream cin(cal_Path("4","32"));
	vector<cal_info> v;
	cal_info cif;
	map<int,string> m;
	bool flag;
	int week=6;
	int day=0;
	m[1]="Monday";
	m[2]="Tuesday";
	m[3]="Wednesday";
	m[4]="Thursday";
	m[5]="Friday";
	m[6]="Saturday";
	m[7]="Sunday";
	for (int i = 2000; i < 10000; i++)
	{
		flag=runnian(i);
		for (int j = 1; j <= 12; j++)
		{
			for (int k = 1; k <= 31; k++)
			{
				if(j==4||j==6||j==9||j==11)
				{
					if(k>30)break;
				}
				else if(j==2)
				{
					if(flag==true)
					{
						if(k>29)break;
					}
					else
					{
						if(k>28)break;

					}
				}
				cif.year=i;
				cif.month=j;
				cif.day=k;
				if(week==8)week=1;
				cif.week=week;
				week++;
				v.push_back(cif);
			}
		}
	}
	int n;
	while (cin>>n)
	{
		if(n==-1)break;
		cout<<v[n].year<<"-";
		if(v[n].month<10)cout<<"0"<<v[n].month<<"-";
		else
		cout<<v[n].month<<"-";
		if(v[n].day<10)cout<<"0"<<v[n].day<<" ";
		else
		cout<<v[n].day<<" ";
		cout<<m[v[n].week]<<endl;
	}
}
void NoBrainer()
{
	ifstream cin(cal_Path("4","33"));
	int a,b,num;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>a>>b;
		if(a<b)
		{
			cout<<"NO BRAINS"<<endl;
		}
		else
		{
			cout<<"MMM BRAINS"<<endl;
		}
	}
}
void QuickChange()
{
	ifstream cin(cal_Path("4","34"));
	int total,num;
	int quarter,dime,nickel;
	cin>>num;
	for (int i = 1; i <= num; i++)
	{
		cin>>total;
		quarter = total / 25;
		total = total - quarter * 25; 
		dime = total / 10;
		total = total - dime * 10;
		nickel = total / 5;
		total = total - nickel * 5;
		cout<<num<<" "<<quarter<<" QUARTER(S), "<<dime<<" DIME(S), "<<nickel<<" NICKEL(S), "<<total<<" PENNY(S)"<<endl;

	}
}
void TotalAmount()
{
	ifstream cin(cal_Path("4","35"));
	string s1,s2;
	int num;
	while (cin>>num)
	{
		if(num==0)break;
		if(num==1)
		{
			cin>>s1;
			cout<<s1<<endl;
			continue;
		}
		cin>>s1>>s2;
		s1=string_plus(s1,s2);
		for (int i = 2; i < num; i++)
		{
			cin>>s2;
			s1=string_plus(s1,s2);
		}
		cout<<s1<<endl;
	}
}
void ElectricalOutlets()
{
	fstream cin(cal_Path("4","36"));
	int num,number,sum,tmp;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>number;
		sum=0;
		for (int j = 0; j < number; j++)
		{
			cin>>tmp;
			sum+=tmp;
		}
		cout<<sum+1-number<<endl;
	}

}
void SpeedLimit()
{
	fstream cin(cal_Path("4","37"));
	int num,speed,time,timebefore,mile;
	while(cin>>num)
	{
		if(num==-1)break;
		speed=timebefore=mile=0;
		for (int i = 0; i < num; i++)
		{
			cin>>speed>>time;
			mile+=speed*(time-timebefore);
			timebefore=time;
		}
		cout<<mile<<" miles"<<endl;
	}
	
}
void BeattheSpread()
{
	fstream cin(cal_Path("4","38"));
	int num,score1,score2,scoreplus,scoreminu;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>scoreplus>>scoreminu;
		if((scoreminu>scoreplus)||(scoreminu+scoreplus)%2!=0||(scoreplus-scoreminu)%2!=0)
		{
			cout<<"impossible"<<endl;
		}
		else
		{
			score1=(scoreplus+scoreminu)/2;
			score2=(scoreplus-scoreminu)/2;
			cout<<score1<<" "<<score2<<endl;
		}
		
	}
}
void ChampionoftheSwordsmanship()
{
	fstream cin(cal_Path("4","39"));
	int num,sum;
	while (cin>>num)
	{
		if(num==0)break;
		if(num==1)
		{
			cout<<"impossible"<<endl;
			continue;
		}
		sum=0;
		while (num!=1)
		{
			if(num==2)
			{
				sum++;
				break;
			}
			else
			{
				sum=sum+num/3;
				num=num/3+num%3;
			}
			
		}
		cout<<sum<<endl;
	}
}
void Doubles()
{
	fstream cin(cal_Path("4","40"));
	set<int> v;
	set<int>::iterator it;
	int num;
	while (cin>>num)
	{
		if(num==-1)break;
		if (num!=0)
		{
			v.insert(num);
		}
		if(num==0)
		{
			int sum=0;
			for (it = v.begin(); it != v.end(); it++)
			{
				if(v.find((*it)*2)!=v.end())sum++;
			}
			cout<<sum<<endl;
			v.clear();
		}

		

	}
}
void FileSearching()
{
	fstream cin(cal_Path("4","41"));
	vector<string> v,vans;
	string s,sans;
	string beforein,afterin,beforeout,afterout;
	int inputnum,ans;
	int c=0;
	while (cin>>inputnum)
	{
		if(c>0)
		{
			cout<<endl;
		}
		c++;
		for (int i = 0; i < inputnum; i++)
		{
			cin>>s;
			v.push_back(s);
		}
		cin>>ans;
		for (int i = 0; i < ans; i++)
		{
			cin>>sans;
			int tmp=sans.find("*");
			beforeout=sans.substr(0,tmp);
			afterout=sans.substr(tmp+1,sans.length()-tmp);
			if(beforeout.length()==0&&afterout.length()!=0)
			{
				for (int i = 0; i < v.size(); i++)
				{
					if(v[i].find(afterout)!=-1)
					{
						vans.push_back(v[i]);
					}
				}
			}
			if(beforeout.length()!=0&&afterout.length()==0)
			{
				for (int i = 0; i < v.size(); i++)
				{
					if(v[i].find(beforeout)!=-1)
					{
						vans.push_back(v[i]);
					}
				}
			}
			if(beforeout.length()!=0&&afterout.length()!=0)
			{
				for (int i = 0; i < v.size(); i++)
				{
					if(v[i].find(beforeout)!=-1&&v[i].find(afterout)!=-1&&v[i].find(beforeout)<v[i].find(afterout))
					{
						vans.push_back(v[i]);
					}
				}
			}
			if(vans.size()==0)
			{
				cout<<"FILE NOT FOUND"<<endl;
			}
			else
			{
				for (int j = 0; j < vans.size()-1; j++)
				{
					cout<<vans[j]<<",";
				}
				cout<<vans[vans.size()-1]<<endl;
			}
			vans.clear();
			
		}
		v.clear();
	}
	
}
void OldBill()
{
	fstream cin(cal_Path("4","42"));
	int num,N,X,Y,Z,digit,number;
	bool flag;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>N>>X>>Y>>Z;
		digit=X*1000+Y*100+Z*10;
		flag=false;
		for (int i = 9; i > 0; i--)
		{
			for (int j = 9; j >= 0; j--)
			{
				number=i*10000+digit+j;
				if(number%N==0)
				{
					cout<<i<<" "<<j<<" "<<number/N<<endl;
					flag=true;
					break;
				}
			}
			if(flag==true)
			{
				break;
			}
		}
		if(flag==false)
		{
			cout<<"0"<<endl;
		}
	}

}
void DivisorSummation() 
{
	fstream cin(cal_Path("4","43"));
	int d=sqrt(500000);
	int num,n;
	for (int i = 2; i < 500000; i++)
	{
		m[i]=1;
	}
	for (int i = 2; i <= d; i++)
	{
		m[i*i]+=i;
		for (int j = i+1; j <= (500000/d); j++)
		{
			m[i*j]+=i+j;
		}
	}
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>n;
		cout<<m[n]<<endl;
	}

}
void EasierDoneThanSaid()
{
	fstream cin(cal_Path("4","44"));
	string s;
	int numY,numF;
	bool flag;
	while (cin>>s)
	{
		if(s=="end")break;
		numY=numF=0;
		flag=true;
		if(s.find("a")!=-1||s.find("e")!=-1||s.find("i")!=-1||s.find("o")!=-1||s.find("u")!=-1)
		{
			for (int i = 0; i < s.length(); i++)
			{
				if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
				{
					numY++;
					numF=0;
				}
				else
				{
					numF++;
					numY=0;
				}
				if(numY==2||numF==2)
				{
					if(s[i]=='e'||s[i]=='o')
					{
						continue;
					}
					else
					{
						if(s[i]==s[i-1])
						{
							flag=false;
							break;
						}
						else
						{
							continue;
						}
						
					}
				}
				if(numY==3||numF==3)
				{
					flag=false;
					break;
				}
			}
		}
		else
		{
			flag=false;
		}
		if(flag==true)
		{
			cout<<"<"<<s<<"> is acceptable."<<endl;
		}
		else
		{
			cout<<"<"<<s<<"> is not acceptable."<<endl;
		}
	}
}
void LettheBalloonRise()
{
	fstream cin(cal_Path("4","45"));
	map<string,int> m;
	map<string,int>::iterator mit;
	int num,second;
	string s,first;
	while (cin>>num)
	{
		if(num==0)break;
		for (int i = 0; i < num; i++)
		{
			cin>>s;
			if(m[s]==-1)
			{
				m[s]=1;
			}
			else
			{
				m[s]=m[s]+1;
			}
			
		}
		 mit = m.begin();
		 first=(*mit).first;
		 second=(*mit).second;
		 mit++;
		for (; mit !=m.end(); mit++)
		{
			if((*mit).second>second)
			{
				first=(*mit).first;
				second=(*mit).second;
			}
		}
		cout<<first<<endl;
		m.clear();
	}
}
void TheHardestProblemEver()
{
	fstream cin(cal_Path("4","46"));
	string s;
	char ss[256];
	map<char,char> m;
	m['A']='V';
	m['B']='W';
	m['C']='X';
	m['D']='Y';
	m['E']='Z';
	m['F']='A';
	m['G']='B';
	m['H']='C';
	m['I']='D';
	m['J']='E';
	m['K']='F';
	m['L']='G';
	m['M']='H';
	m['N']='I';
	m['O']='J';
	m['P']='K';
	m['Q']='L';
	m['R']='M';
	m['S']='N';
	m['T']='O';
	m['U']='P';
	m['V']='Q';
	m['W']='R';
	m['X']='S';
	m['Y']='T';
	m['Z']='U';
	while (cin.getline(ss,256))
	{
		s=ss;
		if(s=="START"||s=="END")continue;
		if(s=="ENDOFINPUT")break;
		for (int i = 0; i < s.length(); i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				cout<<m[s[i]];
			}
			else
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	}

}
void FibonacciAgain()
{
	ifstream cin(cal_Path("4","47"));
	int num;
	v[0]=7%3;
	v[1]=11%3;
	for (int i = 2; i < 1000000; i++)
	{
		v[i]=(v[i-1]+v[i-2])%3;
	}
	while (cin>>num)
	{
		if(v[num]==0)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
}
void ExcusesExcuses()
{
	ifstream cin(cal_Path("4","48"));
	int keyNum,sentenceNum,count,i,start,setnum=0;
	vector<string> v;
	vector<excuse> vi;
	excuse ex;
	string s,subs;
	char ss[256];
	bool flag;
	while (cin>>keyNum>>sentenceNum)
	{
		vi.clear();
		v.clear();
		setnum++;
		if(setnum>1)cout<<endl;
		for (int i = 0; i < keyNum; i++)
		{
			cin>>s;
			for (int k = 0; k < s.length(); k++)
			{
				if(s[k]>='A'&&s[k]<='Z')s[k]=s[k]+32;
			}
			v.push_back(s);
		}
		i=0;
		cin.getline(ss,71);
		while ((i++<sentenceNum)&&cin.getline(ss,80))
		{
			s=ss;
			ex.str=s;
			//cout<<"hld:"<<ex.str<<endl;
			ex.count=0;
			start=0;
			flag=true;
			for (int j = 0; j < s.length(); j++)
			{
				if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))
				{
					if(flag==true)
					{
						start=j;
						flag=false;
					}
				}
				else
				{
					flag=true;
					if(j-start<=1)
					{
						start=j;
					}
					else
					{
						subs=s.substr(start,j-start);
						for (int k = 0; k < subs.length(); k++)
						{
							if(subs[k]>='A'&&subs[k]<='Z')subs[k]=subs[k]+32;
						}
						for (int p = 0; p < v.size(); p++)
						{
							if(subs.compare(v[p])==0)
							{
								ex.count++;
								break;
							}
						}
					}
				}
			
			}
			vi.push_back(ex);
		}
		sort(vi.begin(),vi.end(),CompEx);
		cout<<"Excuse Set #"<<setnum<<endl;
		for (int q = 0; q < v.size(); q++)
		{
			if(vi[q].count==vi[0].count)
			{
				cout<<vi[q].str<<endl;
			}
			else
			{
				break;
			}
		}
		
	}
}
void LowestBit()
{
	ifstream cin(cal_Path("4","49"));
	int num,i;
	vector<int> v;
	while (cin>>num)
	{
		if(num==0)break;
		while (num!=0)
		{
			v.push_back(num%2);
			num=num/2;
		}
		for ( i = 0; i < v.size(); i++)
		{
			if(v[i]==1)break;
		}
		cout<<pow(2,i)<<endl;
		v.clear();
	}
}
void LongestOrderedSubsequence()
{
	ifstream cin(cal_Path("4","50"));
	int num,count,digit;
	vector<longxulie> v;
	longxulie l;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		cin>>count;
		for (int j = 0; j < count; j++)
		{
			cin>>digit;
			l.num=digit;
			l.maxlen=1;
			v.push_back(l);
			if(j==0)continue;
			int m=0;
			for (int k = 0; k < v.size()-1; k++)
			{
				if(v[k].num<v[v.size()-1].num)
				{
					if(v[k].maxlen>m)m=v[k].maxlen;
				}
			}
			v[v.size()-1].maxlen=m+1;
			
		}
		sort(v.begin(),v.end(),Compxulie);
		cout<<v[0].maxlen<<endl;
	}
}
//其他的章节
