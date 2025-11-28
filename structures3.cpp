#include<stdio.h>
#include<string.h>
int main(){
	typedef struct pokemon{
	  int hp;
	  int speed;
	  int attack;
	  char tier;
	  char name[30];	
	}pokemon;
	
	pokemon arr[10];
	arr[0].speed = 50;
	arr[0].attack = 90;
	arr[0].tier = 's';
	arr[0].hp = 70;
	strcpy(arr[0].name, "abc");
	
	arr[1].speed = 40;
	arr[1].attack = 80;
	arr[1].tier = 'g';
	arr[1].hp = 90;
	strcpy(arr[1].name, "bca");
	
	arr[2].speed = 20;
	arr[2].attack = 60;
	arr[2].tier = 'a';
	arr[2].hp = 50;
	strcpy(arr[2].name, "cba");
	
	for(int i=0; i<3; i++){
		printf("%s\n",arr[i].name);
		printf("%d\n",arr[i].hp);
	    printf("%d\n",arr[i].speed);
	    printf("%d\n",arr[i].attack);
	    printf("%c\n",arr[i].tier);
        printf("\n");
	}
	
	
	return 0;
}

//typedef int* p;
//	int x =5, y = 6;
//	p a = &x, b= &y;
//	
//	printf("%p  %p", a, b);