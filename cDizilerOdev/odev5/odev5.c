#include  <stdio.h>

int diziyeAl(double array[],int n){
    printf("Dizinin Elemanlarini Giriniz: ");   
    for (int i = 0; i <n; i++)
    {
        scanf("%lf",&array[i]);
    }
}
void swap(int start, int end,double array[])
{
    double temp=array[end];
    array[end]=array[start];
    array[start]=temp;   
}
int main(){
    int n;
    printf("Dizinin Eleman Sayisini Giriniz: ");
    scanf("%d",&n);
    double array[n];
    diziyeAl(array,n);
    int start=0,end=n-1;
    while(start<end)
    {
     swap(start,end,array);
     start++;
     end--;
    }
    for (int i = 0; i <n; i++)
    {
        printf("%.2lf ",array[i]);
    }
}