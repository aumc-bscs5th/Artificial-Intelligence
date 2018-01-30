#include<iostream>
using namespace std;

int main()
{
	const int size=100;
	string anotherparagraph[size];
	string key[4];
	string answer[4];
	int j=0,per=0,c=0,b=0;
	string paragraph[size]={"ALLAH ", "is ", "the ", "name " ,"of " ,"most " ,"Affectionate, " ,"the Merciful. " ,"All " ,"praise ", "unto " ,"ALLAH, " ,"Lord ", "of " ,"all " ,"The ",
	 					"worlds. ", "The most " ,"Affectionate, ", "The " ,"Merciful. " ,"Master " ,"of ", "the ", "day ", "R ", "e ","Requital "," "};

	Menu:
	int choice=0;
	cout<<"This program is the hard coded \n";
	go:
	{
		label:
		for(int i=0;i<100;i++)
		{
			anotherparagraph[i]=paragraph[i];
		}
		
		for(int i=0;i<100;)
		{
			if(anotherparagraph[i]=="" || anotherparagraph[i]==" ")
			{
				key[j]=" ";
				break;
			}
			key[j]=anotherparagraph[i];
			anotherparagraph[i]="------";
			i=i+9;
			j=j+1;
		}
		int c=0;
			
		for(int g=0;g<100;g++)
		{
			cout<<anotherparagraph[g];
			if(anotherparagraph[g]==" ")
			{
				break;
			}
			//anotherparagraph[i]=paragraph[i];
			if(g==10 ||g==20 ||g==30||g==40||g==50||g==60||g==70||g==80||g==90)
			{
				cout<<endl;
			}
			
		}
		cout<<"\n Enter answers for blanks:"<<endl;
		for(int i=1;i<=4;i++)
		{
			cout<<i<<"-";
			cin>>answer[i];
			cout<<endl;
			if(answer[i]==key[i])
			{
				c=c+1;
			}
			else 
			{
				b=b-1;
			}
		}
		cout<<c;
		if(c==1 || c==2|| c==3 ||c==4)
		{
			per=(c*100)/4;
			cout<<c<<" are correct out of 4. you scored "<<per<<"%."<<endl;
		}
		else if(b==0 || b==-1 || b==-2 || b==-3 || b==-4)
		{
			cout<<"0 are correct out of 4. you scored 0%."<<endl;
		}
		int r=-1;
		cout<<"For keywords for blanks type 0."<<endl;
		cin>>r;
		goto label1;
	}
	go1:
	{
		for(int i=0;i<100;i++)
		{
			anotherparagraph[i]=paragraph[i];
		}
		for(int i=0;i<100;)
		{
			if(anotherparagraph[i]==" ")
			{
				key[j]=" ";
				break;
			}
			key[j]=anotherparagraph[i];
			i=i+9;
			j=j+1;
		}	
		label1:
		for(int i=0;i<100;i++)
		{
			if(i==4)
			{
				break;
			}
			cout<<i<<"-"<<key[i]<<endl;
		}
	}
		return 0;
	}
