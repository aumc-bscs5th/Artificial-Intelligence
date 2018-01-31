#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
fstream inFile;

inFile.open("paragfile.txt");

if(inFile.fail())
{

    cout<<"Your File didn't work"<<endl;
}
else{
    string s;

    while(getline(inFile,s))
    {
     cout<<s<<endl;


    }
    }
inFile.close();

}
