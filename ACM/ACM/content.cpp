#include"ACM.h"
#include"function.h"
void total_describe()
{
	cout<<"******************************************"<<endl;
	cout<<"*第二章 C++ STL泛型编程                  *"<<endl;
	cout<<"*第三章 ACM程序设计基础                  *"<<endl;
	cout<<"*第四章 ACM程序设计实战                  *"<<endl;
	cout<<"******************************************"<<endl;
	cout<<"请输入对应的章节编号进入相应的章节【退出系统请输入0】:"<<endl;

	//
	int num;
	cin>>num;
	while(num!=0&&num!=2&&num!=3&&num!=4){
		cout<<"编号不存在"<<endl;
		cout<<"请输入对应的章节编号进入相应的章节【退出系统请输入0】:"<<endl;
		cin>>num;
	}
	switch(num){
		case 0:exit(0);
		case 2:part_two_describe();break;
		case 3:part_three_describe();break;
		case 4:part_four_describe();break;
	}
}
void part_two_describe()
{

	cout<<"******************************************"<<endl;
	cout<<"*         第二章 C++ STL泛型编程         *"<<endl;
	cout<<"******************************************"<<endl;
	cout<<"*(1) 一个简单的测试案例                 *"<<endl;
	cout<<"*(2) vector向量容器                     *"<<endl;
	cout<<"*(3) string基本字符系列容器             *"<<endl;
	cout<<"*(4) set集合容器                        *"<<endl;
	cout<<"*(5) mutiset多种集合容器                *"<<endl;
	cout<<"*(6) map映照容器                        *"<<endl;
	cout<<"*(7) mutimap多重映照容器                *"<<endl;
	cout<<"*(8) deque双端队列容器                  *"<<endl;
	cout<<"*(9) list双向链表容器                   *"<<endl;
	cout<<"*(10)bitset位集合容器                   *"<<endl;
	cout<<"*(11)stack堆栈容器                      *"<<endl;
	cout<<"*(12)queue队列容器                      *"<<endl;
	cout<<"*(13)priority_queue优先队列容器         *"<<endl;
	cout<<"******************************************"<<endl;
	cout<<"请输入对应的编号进入相应的题目(返回上级输入0):"<<endl;
	int num;
	cin>>num;
	while(num!=0&&num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10&&num!=11&&num!=12&&num!=13){
		cout<<"编号不存在"<<endl;
		cout<<"请输入对应的编号进入相应的题目(返回上级输入0):"<<endl;
		cin>>num;
	}
	switch(num){
		case 0:total_describe();break;	
		case 1:test();break;
		case 2:vector_test();break;
		case 3:string_test();break;
		case 4:set_test();break;
		case 5:multiset_test();break;
		case 6:map_test();break;
		case 7:multimap_test();break;
		case 8:deque_test();break;
		case 9:list_test();break;
		case 10:bitset_test();break;
		case 11:stack_test();break;
		case 12:queue_test();break;
		case 13:priority_queue_test();break;
		}
	}
void part_three_describe()
{
	bool flag=true;
	while(flag)
	{
		cout<<"******************************************"<<endl;
		cout<<"*         第三章 ACM程序设计基础         *"<<endl;
		cout<<"******************************************"<<endl;
		cout<<"*(1) 读入一个参数                        *"<<endl;
		cout<<"*(2) 读入两个参数                        *"<<endl;
		cout<<"*(3) 1!到n!的和                          *"<<endl;
		cout<<"*(4) 等比数列                            *"<<endl;
		cout<<"*(5) 斐波那契数                          *"<<endl;
		cout<<"*(6) 最大公约数                          *"<<endl;
		cout<<"*(7) 最小公倍数                          *"<<endl;
		cout<<"*(8) 平均数                              *"<<endl;
		cout<<"*(9) 对称三位素数                        *"<<endl;
		cout<<"*(10)十进制转化为二进制                  *"<<endl;
		cout<<"*(11)列出完数                            *"<<endl;
		cout<<"*(12)12!的配对                           *"<<endl;
		cout<<"*(13)五位数以内的对称素数                *"<<endl;
		cout<<"*(14)01串排序                            *"<<endl;
		cout<<"*(15)排列对称串                          *"<<endl;
		cout<<"*(16)按绩点排名                          *"<<endl;
		cout<<"*(17)按1的个数排序                       *"<<endl;
		cout<<"******************************************"<<endl;
		cout<<"请输入对应的编号进入相应的题目(返回上级输入0):"<<endl;
		int num;
		cin>>num;
		while(num!=0&&num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&
				num!=10&&num!=11&&num!=12&&num!=13&&num!=14&&num!=15&&num!=16&&num!=17
			){
			cout<<"编号不存在"<<endl;
			cout<<"请输入对应的编号进入相应的题目(返回上级输入0):"<<endl;
			cin>>num;
		}
		switch(num){
			case 0:total_describe();break;
			case 1:readANumber();break;
			case 2:readTwoNumber();break;	
			case 3:jiecheng();break;	
			case 4:dengbi();break;	
			case 5:fibo();break;	
			case 6:zuixiaogongyueshu();break;
			case 7:zuidagongbeishu();break;
			case 8:countAverage();break;
			case 9:SymmetricThreeDigit();break;
			case 10:tenTransTwo();break;
			case 11:listWanshu();break;
			case 12:peidui();break;
			case 13:SymmetricFiveDigit();break;
			case 14:sortForOneZero();break;

				
				
				
				
				
				
				
			//case 3:part_three_describe();break;
			//case 4:part_four_describe();break;
		}
	}
	total_describe();
}
void part_four_describe()
{
	bool flag=true;
	while(flag)
	{
		cout<<"******************************************"<<endl;
		cout<<"*         第四章 ACM程序设计实战         *"<<endl;
		cout<<"******************************************"<<endl;
		cout<<"*(1)Quicksum                              *"<<endl;
		cout<<"*(2)IBM Minus One                         *"<<endl;
		cout<<"*(3)Binary Numbers                        *"<<endl;
		cout<<"*(4)Encoding                              *"<<endl;
		cout<<"*(5)Look and Say                          *"<<endl;
		cout<<"*(6)Abbreviation                          *"<<endl;
		cout<<"*(7)The Seven Percent Solution            *"<<endl;
		cout<<"*(8)Digital Roots                         *"<<endl;
		cout<<"*(9)Box of Bricks                         *"<<endl;
		cout<<"*(10)Geometry Made Simple                 *"<<endl;
		cout<<"*(11)Reverse Text                         *"<<endl;
		cout<<"*(12)Word Reversal*                       *"<<endl;
		cout<<"*(13)A Simple Question of Chemistry       *"<<endl;
		cout<<"*(14)Adding Reversed Numbers              *"<<endl;
		cout<<"*(15)Image Transformation                 *"<<endl;
		cout<<"*(16)Beautiful Meadow                     *"<<endl;
		cout<<"*(17)DNA Sorting                          *"<<endl;
		cout<<"*(18)Daffodil Number                      *"<<endl;
		cout<<"*(19)Error Correction                     *"<<endl;
		cout<<"*(20)Martian Addition                     *"<<endl;
		cout<<"*(21)FatMouse’ Trade                     *"<<endl;
		cout<<"*(22)List the Books                       *"<<endl;
		cout<<"*(23)Head-to-Head Match                   *"<<endl;
		cout<<"*(24)Windows Message Queue                *"<<endl;
		cout<<"*(25)Language of FatMouse                 *"<<endl;
		cout<<"*(26)Palindromes                          *"<<endl;
		cout<<"*(27)Root of the Problem                  *"<<endl;
		cout<<"*(28)Magic Square                         *"<<endl;
		cout<<"*(29)Semi-Prime                           *"<<endl;
		cout<<"*(30)Beautiful Number                     *"<<endl;
		cout<<"*(31)Phone List                           *"<<endl;
		cout<<"*(32)Calendar                             *"<<endl;
		cout<<"*(33)No Brainer                           *"<<endl;
		cout<<"*(34)Quick Change                         *"<<endl;
		cout<<"*(35)Total Amount                         *"<<endl;
		cout<<"*(36)Electrical Outlets                   *"<<endl;
		cout<<"*(37)Speed Limit                          *"<<endl;
		cout<<"*(38)Beat the Spread!                     *"<<endl;
		cout<<"*(39)Champion of the Swordsmanship        *"<<endl;
		cout<<"*(40)Doubles                              *"<<endl;
		cout<<"*(41)File Searching                       *"<<endl;
		cout<<"*(42)Old Bill                             *"<<endl;
		cout<<"*(43)Divisor Summation                    *"<<endl;
		cout<<"*(44)Easier Done Than Said?               *"<<endl;
		cout<<"*(45)Let the Balloon Rise                 *"<<endl;
		cout<<"*(46)The Hardest Problem Ever             *"<<endl;
		cout<<"*(47)Fibonacci Again                      *"<<endl;
		cout<<"*(48)Excuses, Excuses!                    *"<<endl;
		cout<<"*(49)Lowest Bit                           *"<<endl;
		cout<<"*(50)Longest Ordered Subsequence          *"<<endl;
		cout<<"******************************************"<<endl;
		cout<<"请输入对应的编号进入相应的题目(返回上级输入0):"<<endl;
		int num;
		cin>>num;
		while(num<0&&num>50){
			cout<<"编号不存在"<<endl;
			cout<<"请输入对应的编号进入相应的题目(返回上级输入0):"<<endl;
			cin>>num;
		}
		switch(num){
			case 0:flag=false;break;
			case 1:QuickSum();break;
			case 2:IBMMinusOne();break;
			case 3:BinaryNumbers();break;
			case 4:Encoding();break;
			case 5:LookAndSay();break;
			case 6:Abbreviation();break;
			case 7:TheSevenPercentSolution();break;
			case 8:DigitalRoots();break;
			case 9:BoxofBricks();break;
			case 10:GeometryMadeSimple();break;
			case 11:ReverseText();break;
			case 12:WordReversal();break;
			case 13:ASimpleQuestionofChemistry();break;
			case 14:AddingReversedNumbers();break;
			case 15:ImageTransformation();break;
			case 16:BeautifulMeadow();break;
			case 17:DNASorting();break;
			case 18:DaffodilNumber();break;
			case 19:ErrorCorrection();break;
			case 20:MartianAddition();break;
			case 21:FatMouseTrade();break;
			case 22:ListtheBooks();break;
			case 23:HeadToHeadMatch();break;
			case 24:WindowsMessageQueue();break;
			case 25:LanguageofFatMouse();break;
			case 26:Palindromes();break;
			case 27:RootoftheProblem();break;
			case 28:MagicSquare();break;
			case 29:SemiPrime();break;
			case 30:BeautifulNumber();break;
			case 31:PhoneList();break;
			case 32:Calendar();break;
			case 33:NoBrainer();break;
			case 34:QuickChange();break;
			case 35:TotalAmount();break;
			case 36:ElectricalOutlets();break;
			case 37:SpeedLimit();break;
			case 38:BeattheSpread();break;
			case 39:ChampionoftheSwordsmanship();break;
			case 40:Doubles();break;
			case 41:FileSearching();break;
			case 42:OldBill();break;
			case 43:DivisorSummation();break;
			case 44:EasierDoneThanSaid();break;
			case 45:LettheBalloonRise();break;
			case 46:TheHardestProblemEver();break;
			case 47:FibonacciAgain();break;
			case 48:ExcusesExcuses();break;
			case 49:LowestBit();break;
			case 50:LongestOrderedSubsequence();break;
			//case 3:part_three_describe();break;
			//case 4:part_four_describe();break;
		}
	}
	total_describe();
	
}