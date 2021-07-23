#include<stdio.h>
#include<conio.h>
struct student
{
    int marks[10];
    float sum=0;
    float per;
};
int main()
{
    struct student A;
    printf("enter marks of three subjects");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&A.marks[i]);
       A.sum=A.sum+A.marks[i];
    }
    A.per=(A.sum/300)*100;
    printf("Marks scored=%f",A.sum);
    printf("percentage=%f",A.per);
    if(A.per<50)
    {
    	printf("FAILED");
	}
  else if(A.per>50)
    {
    	printf("\njust passed  WITH GRADE- E");
	}
	else if(A.per>60)
	{
		printf("\n D");
	}
	else if(A.per>70)
	{
		printf("\n c");
	}
	else if(A.per>80)
	{
		printf("\n B");
	}
	else {
		printf("\n A");
	}

return 0;
}
