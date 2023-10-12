#include <stdio.h>
int diziyeAl(int array[],int n){
    printf("Dizinin Elemanlarini Giriniz: ");   
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
    }
}
void indisKaydir(int array[],int n,int x)
{
    for (int i = 0; i < n; i++)
    {
        array[i]=array[i]+x;
    } 
}
void yazdir(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }   
}
int main(){
    int n,x;
    printf("Dizinin Eleman Sayisini Girin: ");
    scanf("%d",&n);
    int array[n];
    diziyeAl(array,n);
    printf("Dizinin Kac Indis Kaydirilacagini Girin: ");
    scanf("%d",&x);
    indisKaydir(array,n,x);  
    printf("Dizinin Yeni Hali: ")  ;
    yazdir(array,n);
}