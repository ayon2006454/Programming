#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int random_number = rand() % 100 + 1;

    int n;
    int attempts=1;

    printf("GUESS THE NUMBER:\n");
    scanf("%d",&n);
    while(n<random_number){
        printf("higher number please\n");
        scanf("%d",&n);
        attempts++;
    }
while(n>random_number){
    printf("lower number please\n");
    scanf("%d",&n);
    attempts++;
}
if(n=random_number){
    printf("you entered the correct number\n");
    printf("the number of your attempts is %d\n",attempts);
}
    return 0;
}
