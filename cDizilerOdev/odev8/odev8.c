#include <stdio.h>
#include <math.h>
int diziyeAl(int array[],int n){
    printf("Dizinin Elemanlarini Giriniz: ");   
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
    }
}
void ortalamaAl(int array[],int n)
{
    int toplam=0;
    for (int i = 0; i <n; i++)
    {
        toplam+=array[i];
    }
    int x=toplam/n;
    int fark=0;
    for (int i = 0; i <n ;i++)
    {
        int temp=0;
        temp = array[i]-x;
        fark+=temp*temp;
    }
    float y=0;
    y=sqrt(fark/(n-1));
    printf("Dizinin Standart Sapmasi: %.2f",y);   
}

int main(){
    int n;
    printf("Dizinin Eleman Sayisini Girin: ");
    scanf("%d",&n);
    int array[n];
    diziyeAl(array,n);
    ortalamaAl(array,n);
}