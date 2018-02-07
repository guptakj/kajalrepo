#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice,option=-1;

    int *x,*p,*y;
    int n,a,b,i;
     while(option)
    {
    printf("Enter size of array:");
    scanf("%d",&n);
    x=(int*)malloc(n *sizeof(int));
    printf("input array values");
    for(p=x;p<x+n;p++)
    {
        scanf("%d",p);
    }

    printf("1.insert\n2.delete\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
    printf("Enter element to be inserted");
    scanf("%d",&a);
 printf("Enter its place ");
    scanf("%d",&b);
    y=(int*)realloc(x,(n+1)*sizeof(int));

  for(i=n;i>b-1;i--)
  {

    *(y+i)=*(y+i-1);

  }
  *(y+b-1)=a;
     for(p=x;p<x+n+1;p++)
    {
        printf("%d ",*p);
        printf("address:%u\n",p);
    }
    break;
        case 2:
          printf("Enter place to be deleted:");
    scanf("%d",&a);
    for(i=a-1;i<n-1;i++)
    {
     *(x+i)=*(x+i+1);
    }
     for(p=x;p<x+n-1;p++)
    {
        printf("%d ",*p);
        printf("address:%u\n",p);
    }
    break;
        case 3:
            return;

    }
    printf("Do you want to enter more(0/1)?");
    scanf("%d",&option);
    }
    return 0;
}
