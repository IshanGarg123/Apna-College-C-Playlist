#include<stdio.h>

int main()
{
    /* for(int i=0;i<=10;i=i+1)
    {
        printf("%d ",i);
    }
    */

   // increment operator 
   // i++ ++i
   int i=1;
   printf("%d \n",i++);
   // i++ = use then increase;
   // i++ = post inc

   int j=1;
   printf("%d \n",++j);
   // ++i = increase then use;
   // ++i = pre inc
   // --i = pre dec
   // i-- = post dec
   int k=1;
   printf("%d \n",--k);

   int l=1;
   printf("%d \n",l--);

   for(float i=1.0;i<=5.0;i++)
   {
        printf("%f \n",i);
   }

   for(char a='a';a<='z';a++)
   {
        printf("%c \n",a);
   }

   /*
   infinite loop
   for(int i=0;;i++)
   {
        printf("%d \n",i);
   }
   */

    return 0;
}