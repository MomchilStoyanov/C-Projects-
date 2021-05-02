//Simple C++ program to encrypt and decrypt a string
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
char str[100];
int i, x;
void encript()
{
        for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         cout << "\nEncrypted string: " << str << endl;
}
void decript()
{
             for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

      cout << "\nDecrypted string: " << str << endl;
}
void read()
{

   cout << "Please enter a string:\t";
   cin >> str;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt the string and save.\n";
   cout << "2 = Decrypt the string.\n";
   cin >> x;
}
void save()
{
    // writing on a text file
  ofstream myfile ("example.txt");
  if (myfile.is_open())
  {
    myfile << str << endl;
    myfile << "encrypting string .\n";
    cout<<"Saving done."<<endl;
    myfile.close();
  }
  else cout << "Unable to open file";
}
int main()
{
read();
   //using switch case statements
   switch(x)
   {
      //first case for encrypting a string
      case 1:encript(); save(); break;
      //second case for decrypting a string
      case 2:decript(); break;
      default:
         cout << "\nInvalid Input !!!\n";
   }
   return 0;
}
