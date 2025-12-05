#include <stdio.h>


void printline();
int checkWin();
void system();

char b[]={'0','1','2','3','4','5','6','7','8','9'};

int main()
{

    int player=1,input,status=-1;
    printline();
   

    while (status==-1)
    {
        player=(player%2==0) ? 2 : 1;
        char mark=(player==1) ? 'X' :'O';
        printf("Please enter Number For Player %d\n",player);
        scanf("%d",&input);
    if(input<1 || input>9)
    {
        printf("Invalid input");
    }

    b[input]=mark;
    printline();

    int result=checkWin();

    if(result==1)
    {
        printf("Player %d is the Winner",player);
        break;
    }
    else if(result==0)
    {
        printf("Draw");
        break; 
    }
    player++;
    }
    
 return 0;   
}

void printline()
{
    system("cls");
    printf("\n\n");
    printf("=== TIC TAC TOE ===\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[1],b[2],b[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[4],b[5],b[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[7],b[8],b[9]);
    printf("     |     |     \n");
    printf("\n\n");
}


int checkWin()
{

    if(b[1]==b[2] && b[2]==b[3])
    {
        return 1;
    }
    if(b[1]==b[4] && b[4]==b[7])
    {
        return 1;
    }
    if(b[7]==b[8] && b[8]==b[9])
    {
        return 1;
    }
    if(b[3]==b[6] && b[6]==b[9])
    {
        return 1;
    }
    if(b[1]==b[5] && b[5]==b[9])
    {
        return 1;
    }
    if(b[3]==b[5] && b[5]==b[7])
    {
        return 1;
    }
    if(b[2]==b[5] && b[5]==b[8])
    {
        return 1;
    }
    if(b[4]==b[5] && b[5]==b[6])
    {
        return 1;
    }

    int count=0,i;
    for (i = 1; i <=9; i++)
    {
        if(b[i]=='X' || b[i]=='O')
        {
            count++;
        }
    }
    
    if(count==9)
    {
        return 0;
    }
    return -1;
}
