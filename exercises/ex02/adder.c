#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Return a number from user input.
 * -1 is returned if a user inputted invalid value
 * -2 is returned if a user pressed ctrl-d */
int get_number(){
    int num;
    char str_num[11];
    puts("Enter number: ");
    int val = scanf("%10s", str_num);
    num = atoi(str_num);
    if (val == EOF){
        num = -2;
    } else if ((strcmp(str_num,"0") != 0) && num == 0){
        num = -1;
    }

    return num;
}

int main(){
    int arr[100];
    int counter = 0;
    int num;
    int sum = 0;
    while (counter < 100){
        num = get_number();
        if (num == -2){
            printf("Sum is %i\n", sum);
            break;
        }
        if (counter == 0){
            sum = num; 
        } else {
            sum = sum + num;
        }
        counter = counter + 1;
    }
    return 0;
}
