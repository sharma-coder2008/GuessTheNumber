#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char ch;
    
    int b_count = 999;

    srand(time(0));

    do
    {
        int num, r_num, count;
        count = 0;
        
        //Generating a random number
        r_num = (rand()%100) + 1;

        //Inputting the number
        printf("\nGuess a number between 1 and 100 to check if it matches the random number : ");
        scanf("%d",&num);

        //Checking whether the number is matched
        if(num == r_num)
        {
            printf("Woo Hoo !!! you guessed the right number at first attempt");
            count = 1;
        }

        while (num != r_num)
        {
            count++;
            if(num < r_num)
            {
                printf("Oops guess a number little higher : ");
            }
            else if(num > r_num)
            {
                printf("Oops guess a number little lower : ");
            }
            scanf("%d",&num);
        }

        printf("Woo Hoo !!! you guessed the right number in %d",count);
        printf(" tries!!");
        
        //best score
        if(b_count>count)
        {
            b_count = count;
            printf("\nBEST SCORE : %d",b_count);
            printf("!!!!");
        }
        else
        {
            printf("\nBEST SCORE : %d",b_count);
        }

        //Checking that whether the player wanna play again
        printf("\nIt was fun wasn't it? Wanna play again?");
        printf("\nEnter Y to play again and N for not playing again : ");
        scanf(" %c",&ch);

        switch(ch) {
            case 'Y'  :
                printf("Woo Hoo let's play again");
                break;

            case 'N' :
                printf("Okkie It was fun Byee byee have a nice day!!!"); 
                break;
        }

    }while(ch == 'Y' || ch == 'y');

    return 0;

}