#include <stdio.h>
#include <stdlib.h>

int main()
{int x=1; int y=2; int z=3;
int *px=&x,*py=&y,*pz=&z;
printf("first case :");
printf("\n%d %d %d\n",x,y,z);
printf("%p %p %p\n",px,py,pz);
printf("%d %d %d\n",*px,*py,*pz);
printf("swapping pointers :\n");
printf("second case :");
int *temp=pz;
pz = px;
px = py;
py = temp;
printf("\n%d %d %d\n",x,y,z);
printf("%p %p %p\n",px,py,pz);
printf("%d %d %d\n",*px,*py,*pz);
return 0;
}



