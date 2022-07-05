#include<stdio.h>

struct student
{
int rollno;
float marks;
char name[10];
};

int main()
	{
	  struct student s1={ 21,87,"john"};
	  struct student s2={ 22,88,"park"};
	  printf("%d %f %s ",s1.rollno,s2.marks,s1.name);
	  return 0;

}
