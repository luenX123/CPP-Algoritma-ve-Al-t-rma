#include <iostream>

using namespace std;

int main()
{
    int DT [5];
    int yas [5];
    int tyas = 0;
    int sayac = 0 ;

    for (int i = 0;i < 5 ;i++)
    {
        cout<<"Ki�ilerin" <<(i+1)<<"do�um y�l�n� giriniz: "<<endl;
        cin>>DT[i];
    }

    cout<<"2025'teki ya�lar:"<<endl;
    for (int i = 0; i < 5;i++)
    {   yas[i]=2025 - DT[i];
        cout<<"Ki�ilerin"<<(i+1)<<":"<<yas[i]<<"ya��nda"<<endl;
        tyas+=yas[i];

    }

    sayac = tyas / 5;
    cout<<"\n5 Ki�ilerin Ortalama Ya�lar� : "<<sayac<<"ya��nda"<<endl;


    return 0;

}
