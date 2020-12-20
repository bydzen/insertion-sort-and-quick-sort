#include <iostream>

using namespace std;

void quick_sort(int[],int,int);
int partition(int[],int,int);

int main()
{
    cout << "-->> Program Mengurutkan dan Mencari Rata-Rata Data Nilai <<--\n\n\n";

    cout << "NAMA        : Arga Bimantara" << endl;
    cout << "NIM         : 1303194072" << endl;

    int n,i,total;
    float rata;
    total=0;
    n = 8;
    int a[]={75,40,61,69,80,100,50,86}; /*Data Array Nilai*/

    cout<<"\nData Nilai sebelum pengurutan:\n"; /*Program menampilkan data array sebelum terurut*/

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    quick_sort(a,0,n-1);
    cout<<"\n\nData Nilai setelah dilakukan quick sort:\n"; /*Program menampilkan data array yang sudah diurutkan dengan quicksort*/

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\n";

    quick_sort(a,0,n-1);
    cout<<"Range Nilai yang didapatkan:\n"; /*Program menampilkan data array yang sudah diurutkan dengan quicksort untuk dicari Range Nilainya*/
    for(i=0;i<n;i++){
        if (a[i] < 100 && a[i] >= 80)
            cout<<"A"<<" ";
        if (a[i] < 80 && a[i] >= 70)
            cout<<"AB"<<" ";
        if (a[i] < 70 && a[i] >= 65)
            cout<<"B"<<" ";
        if (a[i] < 65 && a[i] >= 60)
            cout<<"C"<<" ";
        if (a[i] < 60 && a[i] >= 50)
            cout<<"D"<<" ";
        if (a[i] < 50 && a[i] >= 0)
            cout<<"E"<<" ";
    }

     cout<<"\n\n";

     quick_sort(a,0,n-1);
     /*Program menampilkan data array yang sudah diurutkan dengan quicksort untuk menemukan hasil Rata-Rata Nilainya*/
     for(i=0; i<n; i++){
        total = total + a[i];
    }
        rata = total/n;
        cout << "Hasil rata-rata seluruh nilai adalah : " << rata<<" ";
        if (rata < 100 && rata >= 80)
            cout<<"(A)"<<" ";
        if (rata < 80 && rata >= 70)
            cout<<"(AB)"<<" ";
        if (rata < 70 && rata >= 65)
            cout<<"(B)"<<" ";
        if (rata < 65 && rata >= 60)
            cout<<"(C)"<<" ";
        if (rata < 60 && rata >= 50)
            cout<<"(D)"<<" ";
        if (rata < 50 && rata >= 0)
            cout<<"(E)"<<" ";

    return 0;
}

void quick_sort(int a[],int l,int u) /*Program mengecek setiap array data dari array ke-0 sampai ke-N*/
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}

int partition(int a[],int l,int u) /*Fungsi Swap Data atau pertukaran data dengan perbandingan antara data pivot dengan data (i) dan (j)*/
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
