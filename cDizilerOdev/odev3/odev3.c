#include <stdio.h>

void enKucukBul(int array[],int n)
{
    int temp=array[0];
    for (int i = 0; i < n; i++)
    {
        if (temp > array[i])
        {
            temp=array[i];
        }   
    }
    printf("En Kucuk Sayi: %d \n",temp);
}
void enBuyukBul(int array[],int n)
{
    int temp=array[0];
    for (int i = 0; i < n; i++)
    {
        if (temp < array[i])
        {
            temp=array[i];
        }
    }
    printf("En Buyuk Sayi: %d\n",temp);
    
}

int diziyeAl(int array[],int n)
{
    printf("Dizinin Elemanlarini Giriniz: ");   
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
    }
}

int main(){
    int n,x;
    printf("Dizinin Eleman Sayisini Giriniz: ");
    scanf("%d",&n);
    int array[n];
    diziyeAl(array,n);
    enKucukBul(array,n);
    enBuyukBul(array,n);
}