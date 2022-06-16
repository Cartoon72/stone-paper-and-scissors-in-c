#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int you, computer,yourscore=0,compscore=0;
int menu()
{

    int ch;

    printf("1.Rock\t");
    printf("2. Paper\t");
    printf("3. Scissor\t");
    printf("4. Exit");
    printf("\nEnter your choice");
    scanf("%d", &ch);
    return (ch);
}
void setup()
{

label:
    computer = rand() % 4;
    if (computer == 0)
    {
        goto label;
    }
    you = menu();
}

void Logic()
{

    switch (you)
    {
    case 1:
        if (computer == 1)
        {
            printf("\n\t -------------\n");
            printf("\t| It's a draw |\n");
            printf("\t -------------\n");
            printf("Both are rock\n");
            
        }
        else if (computer == 2)
        {

            printf("\n\t ------------------------\n");
            printf("\t| Computer Win the match |\n");
            printf("\t ------------------------\n");
            printf("You=rock\tcomputer=paper\n");
            compscore++;
        }
        else
        {
            printf("\n\t -------------------\n");
            printf("\t| You Win the match |\n");
            printf("\t -------------------\n");
            printf("You=rock\tcomputer=scissor\n");
            yourscore++;
        }
        break;

    case 2:
        if (computer == 1)
        {
            printf("\n\t -------------------\n");
            printf("\t| You Win the match |\n");
            printf("\t -------------------\n");
            printf("You=paper\tcomputer=rock\n");
            yourscore++;
        }
        else if (computer == 2)
        {

            printf("\n\t -------------\n");
            printf("\t| It's a draw |\n");
            printf("\t -------------\n");
            printf("Both are paper\n");
        }
        else
        {
            printf("\n\t ------------------------\n");
            printf("\t| Computer Win the match |\n");
            printf("\t ------------------------\n");
            printf("You=paper\tcomputer=scissor\n");
            compscore++;
        }
        break;
    case 3:
        if (computer == 1)
        {
            printf("\n\t ------------------------\n");
            printf("\t| Computer Win the match |\n");
            printf("\t ------------------------\n");
            printf("You=scissor\tcomputer=rock\n");
            compscore++;
        }
        else if (computer == 2)
        {

            printf("\n\t -------------------\n");
            printf("\t| You Win the match |\n");
            printf("\t -------------------\n");
            printf("You=scissor\tcomputer=paper\n");
            yourscore++;
        }
        else
        {
            printf("\n\t -------------\n");
            printf("\t| It's a draw |\n");
            printf("\t -------------\n");
            printf("Both are scissor\n");
        }
        break;
    case 4:
     printf(" -----------------\n");
    printf("|   Final Score   |\n");
    printf(" -----------------\n");
    printf("|  You | Computer |\n");
    printf("|------|----------|\n");
    printf("|   %d  |    %d     |\n", yourscore, compscore);
    printf(" -----------------\n\n");
    printf("Thank you for playing\n");
        exit(0);
    default:
        printf("\nInvalid user choice");
    }
}

int main()
{
    char name[10];
    printf("Welcome to the Rock Paper Scissors\n");
    printf("----------------------------------\n\n");
    printf("Please enter your name ");
    scanf("%s", &name);
    printf("%s\n", name);

    while (1)
    {

        setup();
        Logic();
        getch();
    }

    return 0;
}

//new comment added

