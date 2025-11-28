#include<stdio.h>
#include<string.h>
int main(){
	struct book{
		char name[30];
		float price;
		int pages;
    }a,b,c;
    
    struct specialbook{
    	int goldpage;
    	struct book x;
	};
    
    strcpy( a.name, "physics\n");
    a.price = 500.5;
    a.pages = 346;
    b.price = 800.0;
    b.pages = 468;
    strcpy(c.name, "bio book\n");
    strcpy( b.name, "math\n");
    printf(" %s", a.name);
    printf(" %s", b.name);
    printf(" %s", c.name);
    return 0;
}

//    struct pokeman
//    {
//        int hp;
//        int speed;
//        int attack;
//        char tier;
//    } pikacho, charizard, mewtwo;
//    //struct pokeman pikacho;
//    
//        pikacho.attack = 60;
//        printf("Enter the speed of pikacho :");
//        scanf("%d" ,&pikacho.speed);
//        //pikacho.speed = 50;
//        pikacho.hp = 75;
//        pikacho.tier = 'a';
//        printf("%d" , pikacho.speed);
//    
//    //struct pokeman charizard;
//    
//        charizard.attack = 130;
//        charizard.hp = 60;
//        charizard.speed = 125;
//        charizard.tier = 'b';
//    