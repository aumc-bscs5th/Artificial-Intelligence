#include <iostream>
#include <typeinfo>
#include <cstring>
using namespace std;

int main()
{
    char str[3000];

    cout << "Enter a Paragraph as an input:" << endl;

    cin.getline(str,3000);

    char* point;

    point = strtok(str,".");

    while(point!=NULL)
    {
        cout<<point<<endl;

        point = strtok(NULL,".");

    }

    if(point=NULL)
        {
            cout<<"The string you entered is Null"<<endl;
        }
}

