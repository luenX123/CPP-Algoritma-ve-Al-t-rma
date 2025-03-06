#include <iostream>

using namespace std;

int main()
{
   double a,b,c;

   cout<<"1.kenarý uzunluðunu giriniz"<<endl;
   cin>>a;
   cout<<"2.kenarý uzunluðunu giriniz"<<endl;
   cin>>b;
   cout<<"3.kenarý uzunluðunu giriniz"<<endl;
   cin>>c;

   if((a+b>c) && (a+c>b)&& (b+c>a)){
    cout<<"Uzunluklar Bir Üçgen Oluþturur."<<endl;
   }
   else{
    cout << "Uzunluklar Bir Üçgen Oluþturmaz!";
   }








    return 0;
}
