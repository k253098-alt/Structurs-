#include<stdio.h>
#include<string.h>
int main(){
	typedef struct person{
		char name[30];
		float salary;
		int age;
    }person;
    person a;
    person b;
    
    strcpy(a.name, "Hamza jutt");
    strcpy(b.name, "Bahawal Jutt");
    a.age = 19;
    b.age = 18;
    a.salary = 12.1;
    b.salary = 13.3;
    
    printf("%s \n%d",a.name, b.age);
    
   return 0;
}