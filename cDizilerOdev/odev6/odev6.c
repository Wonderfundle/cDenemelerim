#include <stdio.h>

void yazdir(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }   
}
int diziyeAl(int array[],int n){
    printf("Dizinin Elemanlarini Giriniz: ");   
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
    }
}
void sayiEkle(int x, int y, int array[])
{
    array[y]=x;
}
int main(){
    int n;
    printf("Dizinin Eleman Sayisini Giriniz: ");
    scanf("%d",&n);
    int array[n];
    diziyeAl(array,n);
    int x,y;
    printf("\nEklenecek sayiyi girin: ");
    scanf("%d",&x);
    printf("\nSayinin hangi indise eklenecegini girin: ");
    scanf("%d",&y);
    if (y<0||y>n)
    {
        printf("Negatif Indise veya Olmayan Indise Sayi Eklenemez.");
    }
    else
    {
        sayiEkle(x,y,array);
        yazdir(array,n);
    }
}