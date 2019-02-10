#include<iostream>
using namespace std;
int main()
{
        int i,j,k[7];
        cout<<"enter the element of array";
        cin>>j;
        for(i=0; i<j; i++)
                cin>>k[i];
        {
                for(i=0; i<j; i++)
                        cout<< "element of array \n"<< i+1,  k[i];
        }
        return 0;
}
