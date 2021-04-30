#include<stdio.h>
struct employee
{
	int empno;
	char empname[30];
	char department[30];
	float salary;
};
int main()
{
	struct employee emp[20];
	int i,n;
	printf("Enter number of employees:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Employee ID:\n");
		scanf("%d",&emp[i].empno);
		printf("Employee Name:\n");
		scanf("%s",&emp[i].empname);
		printf("Department:\n");
		scanf("%s",&emp[i].department);
		printf("Salary:\n");
		scanf("%f",&emp[i].salary);
	}
    printf("-----------------------\n");
    printf("ID\tName\tDepartment\tSalary\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\t%s\t%s\t%f\n",emp[i].empno,emp[i].empname,emp[i].department,emp[i].salary);
	}
    return 0;
}
