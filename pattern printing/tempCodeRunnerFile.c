//                 *
//               * * *
//             * * * * * 
//  print    * * * * * * *    by entering the number 
//             * * * * *            of rows
//               * * *
//                 *      

#include <stdio.h>
int main()
{
    int r;
    int nsp=r/2;
    int nst=1;
    int p=r/2+1;
    printf("Enter the number of rows(odd):");
    scanf("%d",&r);
  for(int i=1;i<=r;i++)
  {
    for(int j=1;j<=nsp;j++)
    {
        printf("  ");
    }
    for(int k=1;k<=nst;k++)
    {
        printf("* ");
    }
    if(i<p)
    {
        nsp--;
        nst+=2;}
    else
    {
        nsp++;
        nst-=2;
    }
    printf("\n");
  } 
    return 0;
}