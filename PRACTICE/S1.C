#include<stdio.h> 
struct student
{
char name[50];
int roll;
float marks;
}s;
int main()
{
printf("Enter info:\n");
printf("Enter name: ");
fgets(s.name, sizeof(s.name), stdin);
printf("Enter roll no: ");
scanf("%d", &s.roll);
printf("Enter marks: ");
scanf("%f", &s.marks);
printf("Displaying Info:\n");
printf("Name: ");
printf("%s", s.name);
printf("Roll no: %d\n", s.roll);
printf("Marks: %.1f\n", s.marks);
return 0;
}
