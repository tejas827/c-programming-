#include<stdio.h>
int main()
{
    float sal,da,hra,tax,bs;
    int eid;
    char ename[100];
    FILE *fp;

    fp=fopen("salaryslip.txt","w");

    printf("enter employee details=");
    printf("/nID :");
    scanf("%d",&eid);
    printf("/n name:");
    scanf("%s",&ename);
    printf("\n salary=");
    scanf("%f",&bs);
    printf("\n DA=");
    scanf("%f",&da);
    printf("\n HRA=");
    scanf("%f",&hra);
    printf("\n tax =");
    scanf("%f",&tax);
    sal=bs+((bs*(hra+da-tax))/100);
    fprintf(fp,"\n\t--------------Employee salary slip-------------");
    fprintf(fp,"\n\tID           : %d",eid);
    fprintf(fp,"\n\tName         : %s",ename);
    fprintf(fp,"\n\tDA (%%)      :%f",da);
    fprintf(fp,"\n\tHRA (%%)     :%f",hra);
    fprintf(fp,"\n\tTAX (%%)     :%f",tax);
    fprintf(fp,"\n\ttotal salary :%.2f",sal);
    return 0;
}