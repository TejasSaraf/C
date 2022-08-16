#include<stdio.h>
#include<conio.h> 
#include<stdlib.h>
int main()
{
   
    int i,j,n,s;
int k,l;
int value[9][9];
    int total_row[9];
    int total_col[9];
    printf("'enter the inputs of a soduko,and check whether its correct or not'\n");
printf("\n input no of 'rows x column' \n");

    scanf("\n%d",&k);
    scanf("\t%d",&l);
   
   
   

   
    printf("values\n");
    for(i=0;i<k;i++)
    {
   
        total_row[i]=0;
        for(j=0;j<l;j++)
        {
            scanf("%d",&value[i][j]);
           
            total_row[i]=total_row[i]+value[i][j];
        }
    }
   
   
for(j=0;j<l;j++)
    {
        total_col[j]=0;
        for(i=0;i<k;i++)
        {
           
            total_col[j]=total_col[j]+value[i][j];


        }
    }


for(i=0;i<k;i++)
    {
        printf("\n");
        for(j=0;j<l;j++)
        {
            printf(" \t %d ",value[i][j]);
        }
    }



s=((k*(k+1))/2);
for(n=0;n<k;n++)
{
    if((total_col[n])!=s)
   
       
    printf("\n incorrect i/p's col_%d ",n+1 );
   
    else if((total_row[n])!=s)
   
    printf(" incorrect i/p's row_%d ",n+1);
    else if(total_row[n] && s && total_col[n])
   
    printf("\n correct i/p for both %d  row and col ",n+1);
   
    else if(total_row[n] && s )
   
    printf("\n correct i/p for %d  row  ",n+1);
    else if(s && total_col[n])
   
    printf("\n correct i/p for %d  col ",n+1);
   
   
    else
    {
    }
}
//fflush(stdin);
getch();
getch();
getch();
getch();
getch();
getch();
getch();
getch();
}