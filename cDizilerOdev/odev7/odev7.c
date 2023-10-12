#include <stdio.h>

int main(){
    int n;
    printf("Kare Matrisin kac satir ve sutunu olacagini secin: ");
    scanf("%d",&n);
    int r=n,c=n;
    int array[r][c];
    printf("Matrisin Elemanlarini Girin: ");
    for (int i = 0; i < r; i++)
    {
        for (int x = 0; x < c; x++)
        {
            scanf("%d",&array[i][x]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int x = 0; x < c; x++)
        {
            printf("%d ",array[i][x]);
        }
        printf("\n");
    }
    printf("Matrisin Satirlarinin Toplami: ");
    for (int i = 0; i < c; i++)
    {
        int temp;
        for (int y= 0; y < r; y++)
        {
            temp+=array[i][y];
        }
        printf(" %d |",temp);
        temp=0;  
    }
    printf("\n");
    int i=0,x=0,tut=0;
    printf("Matrisin Sutunlarinin Toplami: ");
    while (i < r)
    {
        int temp=0;
        x=0;
        while (x<c)
        {
            temp+=array[x][tut];
            x++;
        }
        printf(" %d |",temp);
        i++ ;
        tut++;
    }   
}
    