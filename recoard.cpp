#include<iostream>
#include<fstream>
using namespace std;
class teacher
{
public:
    char ch2[20];
    int id2;
    char ch3[20];
    void getinfo1()
    {
        cout<<"Enter Teacher Name=";
        cin>>ch2;
        cout<<"Enter ID=";
        cin>>id2;
        cout<<"Enter Course Name=";
        cin>>ch3;
    }
};
class student:public teacher
{
  public:
      char ch[20];
      int id;
      float marks;
      void getinfo()
      {
          cout<<"Enter Student Name=";
          cin>>ch;
          cout<<"Enter ID=";
          cin>>id;
          cout<<"Enter Marks=";
          cin>>marks;
      }
};
class officer:public student
{
public:
    char ch4[20];
    int id3;
    void getinfo2()
    {
        cout<<"Enter Officer Name=";
        cin>>ch4;
        cout<<"Enter ID=";
        cin>>id3;
        ofstream myfile("test.txt");
        myfile<<"Teacher name:"<<ch2<<endl;
        myfile<<"ID:"<<id2<<endl;
        myfile<<"Course:"<<ch3<<endl;
        myfile<<"Student name:"<<ch<<endl;
        myfile<<"ID:"<<id<<endl;
        myfile<<"Mark:"<<marks<<endl;
        myfile<<"Officer name:"<<ch4<<endl;
        myfile<<"ID:"<<id3;
        myfile.close();
    }
    void showstudentInfo()
    {
        cout<<endl<<"Student Name="<<ch<<endl<<"Student ID="<<id<<endl<<"Student Marks="<<marks<<endl<<endl;
    }
    void showteacherInfo()
    {
        cout<<endl<<"Teacher Name="<<ch2<<endl<<"Teacher ID="<<id2<<endl<<"Course Name="<<ch3<<endl<<endl;
    }
    void showofficerInfo()
    {
        cout<<endl<<"Officer Name="<<ch4<<endl<<"Officer ID="<<id3<<endl;
    }
};
int main()
{
    officer ob[3];
    int i;
    cout<<"~~~~~~~~Enter 3 student information~~~~~~~~~~"<<endl<<endl;
    for(i=0;i<3;i++)
    {
        ob[i].getinfo();
    }
    for(i=0;i<3;i++)
    {
        ob[i].showstudentInfo();
    }
    cout<<"~~~~~~~~~~Enter 2 teacher information~~~~~~~~~~"<<endl<<endl;
    for(i=0;i<2;i++)
    {
        ob[i].getinfo1();
    }
    for(i=0;i<2;i++)
    {
        ob[i].showteacherInfo();
    }
    cout<<"~~~~~~~~~~Enter 2 officer information~~~~~~~~~~"<<endl<<endl;
    for(i=0;i<2;i++)
    {
        ob[i].getinfo2();
    }
    for(i=0;i<2;i++)
    {
        ob[i].showofficerInfo();
    }
    return 0;
}
