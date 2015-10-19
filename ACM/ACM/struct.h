struct myComp
{
	bool operator()(const int &a,const int &b)
	{
		return a>b;//从小到大使用大于
	}
};
struct Info
{
	string name;
	float score;
	bool operator < (const Info &a) const 
	{
		//小到大
		return score > a.score;
	}
	
};
struct myCompForZeroOne
{
	//括号的话，从小到大是小于
	bool operator()(const string &s1,const string &s2)
	{
		if(s1.size()!=s2.size())return s1.size()<s2.size();
		int s1_count=count(s1.begin(),s1.end(),'1');
		int s2_count=count(s2.begin(),s2.end(),'1');
		if(s1_count!=s2_count)return s1_count<s2_count;
		return s1<s2;//直接的ASCII的比较
	}
};
struct strComp
{
	//括号的话，从小到大是小于
	bool operator()(const string &s1,const string &s2)
	{
		if(s1.size()!=s2.size())return s1.size()<s2.size();
		return s1<s2;//直接的ASCII的比较
	}
};
struct strCompTwo
{
	//括号的话，从小到大是小于
	bool operator()(const string &s1,const string &s2)
	{
		int s1_count=count(s1.begin(),s1.end(),'1');
		int s2_count=count(s2.begin(),s2.end(),'1');
		if(s1_count!=s2_count)return s1_count<s2_count;
	}
};
struct  student
{
	string name;
	vector<float> score;
	float ave;
	
};
struct jidian_Sort
{
	bool operator()(const student &stu1,const student &stu2)
	{
		if(stu1.ave!=stu2.ave)return stu1.ave > stu2.ave;
		return stu1.name<stu2.name;
	}
		
};
struct DNA
{
	string dnalist;
	int sum;
};
struct DNA_sort
{
	bool operator()(const DNA &dna1,const DNA &dna2)
	{
		return dna1.sum<dna2.sum;
	}
};
struct Trade
{
	double F;
	double A;
	double bi;
};
struct Book
{
	string name;
	int year;
	double price;
};
struct order
{
	string name;
	int parameter;
	int priority;
};
struct order_sort
{
	bool operator()(const order &o1,const order &o2)
	{
		return o1.priority<o2.priority;
	}
};
struct cal_info
{
	short int year;
	short int month;
	short int day;
	short int week;
};
struct excuse
{
	string str;
	int count;
};
struct longxulie
{
	int maxlen;
	int num;
};
