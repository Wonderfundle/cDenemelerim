#include <stdio.h>

void yazdir(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
}

void tersineYazdir(int array[],int n){
    int tut=n-1;
    for (int i = 0; i<tut+1;)
    {
        printf("%d ",array[tut]);
        tut--;
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
    printf("Dizi :");
    yazdir(array,n);
    printf("\nDizinin tersten yazdirilmis hali: ");
    tersineYazdir(array,n);
}