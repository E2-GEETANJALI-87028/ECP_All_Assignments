#include<stdio.h>

typedef struct student{

	int rollno;
	char name[20];
	float marks;
}stud_t;

void writeData(stud_t , *s);
void readData(stud_t, *s);

int main()
{
	

}

void writeData(stud_t, *s)
{
	FILE *fw = fopen("record.txt","w");

}
