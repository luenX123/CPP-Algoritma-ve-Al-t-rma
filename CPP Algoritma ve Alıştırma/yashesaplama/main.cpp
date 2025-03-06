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
        cout<<"Kiþilerin" <<(i+1)<<"doðum yýlýný giriniz: "<<endl;
        cin>>DT[i];
    }

    cout<<"2025'teki yaþlar:"<<endl;
    for (int i = 0; i < 5;i++)
    {   yas[i]=2025 - DT[i];
        cout<<"Kiþilerin"<<(i+1)<<":"<<yas[i]<<"yaþýnda"<<endl;
        tyas+=yas[i];

    }

    sayac = tyas / 5;
    cout<<"\n5 Kiþilerin Ortalama Yaþlarý : "<<sayac<<"yaþýnda"<<endl;


    return 0;

}
