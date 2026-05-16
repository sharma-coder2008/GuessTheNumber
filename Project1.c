#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char ch;
int num, r_num, count;   
int b_count = 999;


//Generating a random number
void random()
{
    srand(time(0));
    r_num = (rand()%100) + 1;
}


//Inputting the number
void input()
{
    printf("\nGuess a number between 1 and 100 to check if it matches the random number : ");
    scanf("%d",&num);
}


//Checking whether the number is matched
void check()
{
    if(num == r_num)
    {
        count = 1;
    }
    else
    {
        count++;
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
}


//Generating the score and the best score
void score()
{
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
}


//Checking that whether the player wanna play again
void repeat()
{
    printf("\nIt was fun wasn't it? Wanna play again?");
    printf("\nEnter Y to play again and N for not playing again : ");
    scanf(" %c",&ch);

    switch(ch) 
    {
        case 'Y'  :
            printf("Woo Hoo let's play again");
            break;

        case 'N' :
            printf("Okkie It was fun Byee byee have a nice day!!!"); 
            break;
    }
}


//Calling all the functions in the main function
int main()
{
    do
    {
        count = 0;

        //Generating a random number
        random();

        //Inputting the number
        input();

        //Checking whether the number is matched
        check();

        //Generating the score and the best score
        score();

        //Checking that whether the player wanna play again        
        repeat();
        
    }while(ch == 'Y' || ch == 'y');

    return 0;

}
