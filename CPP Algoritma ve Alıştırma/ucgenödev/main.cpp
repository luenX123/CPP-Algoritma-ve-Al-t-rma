#include <iostream>

using namespace std;

int main()
{
   double a,b,c;

   cout<<"1.kenar� uzunlu�unu giriniz"<<endl;
   cin>>a;
   cout<<"2.kenar� uzunlu�unu giriniz"<<endl;
   cin>>b;
   cout<<"3.kenar� uzunlu�unu giriniz"<<endl;
   cin>>c;

   if((a+b>c) && (a+c>b)&& (b+c>a)){
    cout<<"Uzunluklar Bir ��gen Olu�turur."<<endl;
   }
   else{
    cout << "Uzunluklar Bir ��gen Olu�turmaz!";
   }








    return 0;
}
