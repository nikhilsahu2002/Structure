#include<stdio.h>
#include<conio.h>
#define max 50
#define limit 3

struct students {
	char name[10];
	int roll_number;
	int student_id;
};
void main()
{
	int i,j;
	struct students student[max];
	clrscr();
		for(i=1;i<=limit;i++)
		{
		printf("\nEnter The student %d name",i);
		scanf("%s ",&student[i].name);
		printf("\nEnter The Student %d roll number",i);
		scanf("%d ",&student[i].roll_number);
		printf("\nEnter The Student %d student ID",i);
		scanf("%d ",&student[i].student_id);
		}
		printf("Enter the roll Number For student data");
		scanf("%d ",&j);
		for(i=1;i<=limit;i++)

		{
			if(student[i].roll_number==j)
			{
				printf("%s \n",student[i].name);
				printf("%d \n",student[i].roll_number);
				printf("%d \n",student[i].student_id);
			}
		}
getch();

}


