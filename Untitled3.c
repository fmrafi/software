#include<stdio.h>
int main()
{
        int a,b,c[10];
        printf("enter the value of an array=");
        scanf("%d",&b);
        for(a=0; a<b; a++)
                scanf("%d",&c[a]);
        {
                for(a=0; a<b; a++)
                        if(a>4)
{
         break;
}


                        printf(" %d element is= %d \n",a+1, c[a]);
        }
        return 0;

}

