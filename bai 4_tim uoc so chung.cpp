/*tim uoc chung cua 2 so dung vong lap do-while*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int m,n,a,b,tg;
    printf("nhap so thu I:");scanf("%d",&m);
    printf("nhap so thu II:");scanf("%d",&n);
    a=m;b=n;
    if(a<b)
    {
           tg=a;
           a=b;
           b=tg;
    }
    
    //Sửa chữa lần đầu
    while(b!=0)
    {
           tg=a%b;
           a=b;
           b=tg;
    }
    printf("uoc so chung lon nhat cua %d va %d la: %d",m,n,a);
    getch();
    return 0;
}
