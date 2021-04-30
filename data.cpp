#include <iostream>
using namespace std;
struct CDate
{
    int m_day;
    int m_month;
    int m_year;
    void print();
    void read();
    int daysinmonth();
    bool isleapyear();
    void readam();
    CDate nextDate();
    CDate adddays(int d);
    int cmp(CDate d);
    bool isafter(CDate d);
    bool isbefore(CDate d);
};
void CDate::read()
{
    cin>>m_day>>m_month>>m_year;
}
void CDate::readam()
{
    cin>>m_month>>m_day>>m_year;
}
void CDate::print()
{
    if(m_day<10) cout<<0;
    cout<<m_day<<".";
    if(m_month<10)cout<<0;
    cout<<m_month<<"."<<m_year;
}
int CDate::daysinmonth()
{
    if(m_month==1||m_month==3||m_month==5||m_month==7||m_month==8||m_month==10||m_month==12) return 31;
    else if(m_month==4||m_month==6||m_month==9||m_month==11) return 30;
       else if(isleapyear())return 29;
}
bool CDate::isleapyear()
{
    if(m_year%4!=0)return false;
    else{
        if(m_year%400==0)return true;
        else if(m_year%100==0)return false;
        else return true;
    }
}
CDate CDate::nextDate()
{

    CDate b;
    b.m_day=m_day;
    b.m_month=m_month;
    b.m_year=m_year;
    b.m_day++;
    if(b.m_day>daysinmonth())
    {
        b.m_day=1;
        b.m_month++;
    }
    if(b.m_month>12)
    {
        b.m_month=1;
        b.m_year++;
    }
    return b;
}
CDate CDate::adddays(int d)
{
    CDate date;
    date.m_day=m_day;
    date.m_month=m_month;
    date.m_year=m_year;
    for(int i=0;i<d;i++)
        date=date.nextDate();
    return date;
}
int CDate::cmp(CDate d)
{
    if(m_year<d.m_year)return -1;
    if(m_year>d.m_year)return 1;
    if(m_month<d.m_month)return -1;
    if(m_month>d.m_month)return 1;
    if(m_day<d.m_day)return -1;
    if(m_day<d.m_day)return 1;
    return 0;
}
bool CDate::isafter(CDate d)
{
    if(cmp(d)==-1)return true;
    else return false;
}
    bool CDate::isbefore(CDate d)
    {
        return (cmp(d)==1);
    }
int main ()
{
    CDate d,d1,d2;
   /* cout<<"1. Normal mode"<<endl;
    cout<<"2. American mode"<<endl;
    cout<<"3. How many days are in this month"<<endl;
    cout<<"4. Print"<<endl;
    cout<<"0. Exit"<<endl;
int ch*/int b;
//cin>>ch;
/*while(b!=9)
{
    cin>>b;
    switch(ch)
    {*/
        /*case 1: */cout<<"dd.mm.yyyy"<<endl;d.read();
        cin>>b;
    /*case 2: cout<<"mm.dd.yyyy"<<endl; d.readam();
    /*case 3: */cout<<d.daysinmonth()<<endl;
    d1=d.adddays(b);

    /*case 4: */d1.print();
    /*case 0: break;

    //}
//}
*/
d1.read();
d2.read();
if(d1.isbefore(d2))cout<<"before";
else if(d1.isafter(d2))cout<<"after";
else cout<<"equal";
   return 0;
}
