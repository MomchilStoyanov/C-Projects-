#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int id,bd,pas,n;
double enc,deci,decripti;
void read()
{
 cout<<"Enter ID"<<endl;
 cin>>id;
 cout<<"Enter birth day"<<endl;
 cin>>bd;
 cout<<"Enter password"<<endl;
 cin>>pas;
}

double encript()
{
    enc=0+ id*5.152+59/7.65*bd+8.254/11*3.256/pas/45+4.65458;
}
void savetoken()
{
n++;
  ofstream myfile ("encript+n.txt");
  if (myfile.is_open())
  {
    myfile << enc;
    myfile << "your encripted password.\n";
    myfile.close();
    cout<<"Encription & saving done"<<endl;
  }
  else cout << "Unable to open file";
}
/*void decript()
{
     deci=id/5.152-59*7.65/bd-8.254*11/3.256*pas*45-4.65458;
     decripti=dec-id-bd;
}
*/
int main()
{
    read();
    encript();
    savetoken();
//    decript();
    return 0;
}
