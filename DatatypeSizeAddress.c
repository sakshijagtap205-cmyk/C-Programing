#include<stdio.h>

int iMarks = 89;

int main()

{
    char cvalue = 'S';
    int iValue = 11;
    float fvalue = 90.78f;
    double dValue = 98.564323;

   printf("Size of character is : %lu\n",sizeof(cvalue));
    printf("Size of integer is : %lu\n",sizeof(iValue));
    printf("Size of flaot is : %lu\n",sizeof(fvalue));
    printf("Size of double is : %lu\n",sizeof(dValue));
    
    printf("Address of cValue is : %lu\n",&cvalue);
    printf("Address of iValue is : %lu\n",&iValue);
    printf("Address of fValue is : %lu\n",&fvalue);
    printf("Address of dValue is : %lu\n",&dValue);

    return 0;
}





