//Ammara kalsoom
//153185
//bscs VI
#include<iostream>
using namespace std;

int main()
{
	const int size=100;
	string paraCopy[size];
	string key[4];
	string Ukey[4];
	int j=0;
	int per=0;
	int c=0;
	int b=0;
	string para[size]={"Sunset ", "is ", "the ", "time " ,"of " ,"day " ,"when " ,"our " ,"sky " ,"meets ", "the " ,"outer " ,"space ", "solar " ,"winds. " ,"There ",
	 					"are ", "blue, " ,"pink, ", "and " ,"purple " ,"swirls, " ,"spinning ", "and ", "twisting, ", "like ", "clouds ", "of " ,"balloons ", "caught ", 
						"in " ,"a " ,"blender. "," "};
	/////Setting menu
	Menu:
	int choice=0;
	cout<<"This program is the hard coded an ";
	go:
	{
		exer:
		for(int i=0;i<100;i++)
		{
			paraCopy[i]=para[i];
		}
		
		for(int i=0;i<100;)
		{
			if(paraCopy[i]=="" || paraCopy[i]==" ")
			{
				key[j]=" ";
				break;
			}
			key[j]=paraCopy[i];
			paraCopy[i]="------";
			i=i+9;
			j=j+1;
		}
		int c=0;
			
		for(int g=0;g<100;g++)
		{
			cout<<paraCopy[g];
			if(paraCopy[g]==" ")
			{
				break;
			}
			//paraCopy[i]=para[i];
			if(g==10 ||g==20 ||g==30||g==40||g==50||g==60||g==70||g==80||g==90)
			{
				cout<<endl;
			}
			
		}
		cout<<"Enter answers for blanks:"<<endl;
		for(int i=1;i<=4;i++)
		{
			cout<<i<<"-";
			cin>>Ukey[i];
			cout<<endl;
			if(Ukey[i]==key[i])
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
		goto exer1;
	}
	go1:
	{
		for(int i=0;i<100;i++)
		{
			paraCopy[i]=para[i];
		}
		for(int i=0;i<100;)
		{
			if(paraCopy[i]==" ")
			{
				key[j]=" ";
				break;
			}
			key[j]=paraCopy[i];
			i=i+9;
			j=j+1;
		}	
		exer1:
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
