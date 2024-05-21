// rp
// ps
// rs
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int fgame(char you,char comp){
    if(you==comp){
        return 0;
    }
    if(you == 'r' && comp == 'p'){
        return -1;
    }
    else if(you == 'p' && comp == 'r'){
        return 1;
    }
    if(you == 'p' && comp == 's'){
        return -1;
    }
    else if(you == 's' && comp == 'p'){
        return 1;
    }
    if(you == 'r' && comp == 's'){
        return 1;
    }
    else if(you == 's' && comp == 'r'){
        return -1;
    }
}
int main()
{
    char you,comp;
    int result;
    int num;
    srand(time(0));
    num = rand()%100+1;
    if(num <33){
        comp = 'r';
    }
    else if(num>33 && num<66){
        comp = 'p';
    }
    else{
        comp = 's';
    }
    printf("Enter 'r' for rock , 'p' for paper , 's' for scissors \n");
    scanf("%c",&you);
    result = fgame(you,comp);
    printf("You choose %c and comp choose %c\n",you,comp);
    if(result == 0){
        printf("match draw\n");
    }
    else if(result == 1){
        printf("You win\n");
    }
    else{
        printf("You loose\n");
    }
    return 0;
}