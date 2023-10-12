#include <stdio.h>

int tekSayilariBul(int array[],int n)
{
    printf("\nDizideki tek sayilar:    ");
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2!=0)
        {
           printf("%d ",array[i]);
        }
    }
    

}

int ciftSayilariBul(int array[],int n)
{
    printf("\nDizideki cift sayilar:    ");
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2==0)
        {
           printf("%d ",array[i]);
        }
    }
}

int diziyeAl(int array[],int n){
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
    tekSayilariBul(array,n);
    ciftSayilariBul(array,n);
}