//BASE CONVERSION
//BY MOHD DANISH ANSARI
//11BCEO155
#include<math.h>
int dec(long int);
int oct(long int);
void hex(long int);
int dec(long int);
void oct1(int bnum);
void bin(int);
void hex1(int bnum);
int dec2(char[],int);
main()
{
      int c,c1,num;
      long int no;
      char ch[20];
      printf("************************\n\n\tBASE CONVERSION\n\nwhich type of number you want to input???????\n\n");
      printf("1.Binary\n2.Octal\n3.Decimal\n4.Hexadecimal\n\nEnter ur choice......\n");
      scanf("%d",&c);
      switch(c)
      {
               case 1:printf("\nEnter your Binary number....\n");
                      scanf("%ld",&no);
                      printf("\n*********************\n\tConvert to......\n\n1.Octal\n2.Decimal\n3.Hexadecimal\n\nEnter your choice.....\n");
                      scanf("%d",&c1);
                      if(c1==1)
                         num=oct(no);
                      else 
                      if(c1==2)
                         num=dec(no);
                      else if(c1==3)
                         hex(no);
                      else
                      printf("Wrong Choice\n");
                      if(c1==1 || c1==2)
                      printf("The conversion is %d\n",num);
                      break;
               case 2:printf("\nEnter your Octal number....\n");
                      scanf("%ld",&no);
                      printf("\n*********************\n\tConvert to......\n\n1.Binary\n2.Decimal\n3.Hexadecimal\n\nEnter your choice.....\n");
                      scanf("%d",&c1);
                      if(c1==1)
                         {
                         num=dec1(no);
                         bin(num);
                         }
                      else if(c1==2)
                      {
                         num=dec1(no);
                         printf("The conversion is %d\n",num);
                         }
                      else if(c1==3)
                      {
                         num=dec1(no);
                         hex1(num);}
                      else
                      printf("Wrong Choice\n");
                      break;
               case 3:printf("\nEnter your Decimal number....\n");
                      scanf("%ld",&no);
                      printf("\n*********************\n\tConvert to......\n\n1.Binary\n2.Octal\n3.Hexadecimal\n\nEnter your choice.....\n");
                      scanf("%d",&c1);
                      if(c1==1)
                         bin(no);
                      else if(c1==2)
                         oct1(no);
                      else if(c1==3)
                         hex1(no);
                      else
                      printf("Wrong Choice\n");
                      break;
            case 4:printf("\nEnter your Hexadeciaml number....\n");
                      scanf("%s",ch);
                      printf("\n*********************\n\tConvert to......\n\n1.Binary\n2.Octal\n3.Decimal\n\nEnter your choice.....\n");
                      scanf("%d",&c1);
                      if(c1==1)
                      {
                         num=dec2(ch,20);
                         bin(num);}                       
                      else if(c1==2)
                      {
                         num=dec2(ch,20);
                         oct1(num);}
                      else if(c1==3){
                         num=dec2(ch,20);printf("The conversion is %d\n",num);
                         }
                      else
                      printf("Wrong Choice\n");
                      break;
               default :printf("Wrong Choice");
      }
      getch();
}
int dec(long int bnum)
{
    int sum=0,a,i=0;
    while(bnum>0)
    {
                a=bnum%10;
                sum=sum+a*pow(2,i);
                bnum/=10;
                i++;
    }
    return(sum);
}
int oct(long int bnum)
{
    int i=0,sum=0,a,b,c=0,d,e=0;
    while(bnum>0)
    {
                 a=bnum%1000;
                 while(a>0)
                 {
                           b=a%10;
                           sum=sum+b*pow(2,i);
                           a/=10;
                           i++;
                 }
                 c=c*10+sum;
                 sum=0;
                 i=0;
                 bnum/=1000;
    }while(c>0)
    {
               d=c%10;
               e=e*10+d;
               c/=10;
               }
    return e;
}
void hex(long int bnum)
{
     int a,b,i=0,j=0,sum=0;
     char he[10];
     while(bnum>0)
     {
                  a=bnum%10000;
                  while(a>0)
                  {
                            b=a%10;
                           sum=sum+b*pow(2,i);
                           a/=10;
                           i++;
                 }
                 if(sum>=10)
                he[j]=sum+55;
                 else
                 he[j]=sum+48;
                 sum=0;
                 j++;
                 i=0;
                 bnum/=10000;
     }he[j]='\0';printf("The conversion is ");
     for(i=j-1;i>=0;i--)
     printf("%c",he[i]);
     }
int dec1(long int bnum)
{
    int sum=0,a,i=0;
    while(bnum>0)
    {
                a=bnum%10;
                sum=sum+a*pow(8,i);
                bnum/=10;
                i++;
    }
    return(sum);
}
void bin(int bnum)
{
    int a[20],i=0,j;
    while(bnum>0)
    {
                 a[i]=bnum%2;
                 bnum/=2;i++;
                 }printf("conversion is ");
    for(j=i-1;j>=0;j--)
    printf("%d",a[j]);
    }
void oct1(int bnum)
{
    int a[20],i=0,j;
    while(bnum>0)
    {
                 a[i]=bnum%8;
                 bnum/=8;
                 i++;
                 }printf("conversion is ");
    for(j=i-1;j>=0;j--)
    printf("%d",a[j]);
    }
void hex1(int bnum)
{
     int a,i=0,j;
     char he[20];
    while(bnum>0)
    {
                 a=bnum%16;
                 if(a>=10)
                 he[i]=a+55;
                 else he[i]=a+48;
                 bnum/=16;
                 i++;
                 }printf("conversion is ");
    for(j=i-1;j>=0;j--)
    printf("%c",he[j]);
    }
int dec2(char n[],int c)
{
    int sum=0,a,i=0,j=0,k=0;
    for(i=0;n[i]!='\0';i++)
    {j++;}for(i=j-1;i>=0;i--)
    {
                           if(n[i]<58)
    {
                           a=n[i]-48;
                sum=sum+a*pow(16,k);
                k++;
    }else
    {
         a=n[i]-55;
         sum=sum+a*pow(16,k);
                k++;
                }
                }
    return(sum);
}
