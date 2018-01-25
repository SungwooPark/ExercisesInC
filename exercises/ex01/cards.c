#include <stdio.h>
#include <stdlib.h>

/* Prompts the user for card name and stores the user response in a given 
 * variable
 *
 * card_name: a character array where the user input is stored
 */
void get_card_name(char *card_name){
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
}

/* Determine a numerical value for the given card 
 *
 * card_name: a buffer with a card name
 */
int determine_val(char *card_name){
    int val;
    switch(card_name[0]){
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            val = -1;
            break;
        default:
            val = atoi(card_name);
            if ((val<1) || (val>10)) {
                puts("I don't understand that value!");
            }
            break;
    }
    return val;
}

/* Determine new count value given a current count value and card value
 *
 * count: current count vale
 * val: card value
 */
int compute_count(int count, int val){
    if ((val > 2) && (val < 7)) {
        count++;
    } else if (val == 10) {
        count--;
    }
    return count;
}

int main(){
    char card_name[3];
    int count = 0;
    int val = 0;
    do {
        get_card_name(card_name);
        val = determine_val(card_name);
        count = compute_count(count, val);
        printf("Current count: %i\n", count);
    } while (card_name[0] != 'X');
    return 0;
}


