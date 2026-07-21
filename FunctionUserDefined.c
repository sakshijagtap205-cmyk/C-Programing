#include<stdio.h>
int Addition (int iNo1, int iNo2)
{
  int isum =0;
  isum = iNo1 + iNo2;
  return isum;
}

int main()
{
 int iValue1 =11 , iValue2=21 , iAns=0;
 iAns = Addition(iValue1 , iValue2);
 printf ("Addition is :%d\n", iAns);
 return 0;

}