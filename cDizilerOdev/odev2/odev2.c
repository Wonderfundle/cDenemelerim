#include <stdio.h>

int diziyeAl(int array[],int n){
    printf("Dizinin Elemanlarini Giriniz: ");   
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
    }
}

int toplaminiBul(int array[],int n){
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        temp+=array[i];
    }
    printf("Toplam: %d \n",temp);
}
int carpiminiBul(int array[],int n){
    int temp=1;
    for (int i = 0; i < n; i++)
    {
        temp=temp*array[i];
    }
    printf("Carpim: %d \n",temp);
}

int main(){
    int n,x;
    printf("Dizinin Eleman Sayisini Giriniz: ");
    scanf("%d",&n);
    int array[n];
    diziyeAl(array,n);
    toplaminiBul(array,n);
    carpiminiBul(array,n);
}