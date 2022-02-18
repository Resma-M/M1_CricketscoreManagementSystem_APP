//Learnprogramo - programming made simple
#include"declaration.h"
#include"welcome.h"
#include"menu.h"
#include"newscoresheet.h"
#include"filing.h"
#include"final.h"
int main()
{
    system("color f1");
    int a,key;
    char b,ch;
    FILE *fnew;

    char lastinput;
    while (TRUE)
    {
        initializeconsolehandles();
        welcome();
        system("cls");
        menu();
        locate(32,9);
        ch=getch();
        switch(ch)
        {
            case '1':
            fileopen(ch);
            case '2':
            fileopen(ch);
            getch();
            case '3':
            system ("cls");
            exit(0);
        }
        void date ( )
{
    time_t now;
    struct tm *tm_now;
    char buff[BUFSIZ];
    now = time ( NULL );
    tm_now = localtime ( &now );
    strftime ( buff, sizeof buff, "%a %d %m %Y", tm_now );
    strcpy(gamedetailA.date,buff);

}
void limitinput(int n)
{
    int i,j;
    char array[100];
    for(i=0;; i++)
    {
        if(i>=n)
            array[i]=getch();
        else
            array[i]=getche();
        if(array[i]=='\b')
        {
            if(i>(n-1))
                printf("\b \b");
            else
                printf(" \b");
            if(i>=n)
                i=n-1-1;
            else
            {
                for(j=1;; j++)
                {
                    if(i==n-j)
                    {
                        if(i==0)
                            i=-1;
                        else
                            i=n-(j+1)-1;
                        break;
                    }
                }
            }
        }
        if(array[i]=='\r')
            break;
    }
    int number=0;
    for(i=0; i!=n; i++)
    {
        if(array[i]=='\r')
        {
            output[i]='\0';
            break;
        }
        output[i]=array[i];
    }
}
int limitedinput(int n)
{
    int a,i,j,array[100];
start:
locate(11,6);
    for(i=0;; i++)
    {
        if(i>=n)
            array[i]=getch();
        else
            array[i]=getche();
        if(array[i]=='\b')
        {
            if(i>(n-1))
                printf("\b \b");
            else
                printf(" \b");
            if(i>=n)
                i=n-1-1;
            else
            {
                for(j=1;; j++)
                {
                    if(i==n-j)
                    {
                        if(i==0)
                            i=-1;
                        else
                            i=n-(j+1)-1;
                        break;
                    }
                }
            }
        }
        if(array[i]=='\r')
            break;
    }
    int number=0;
    for(i=0; i!=n; i++)
    {
        if(array[i]=='\r')
            break;
        if(isdigit(array[i])!=0)
        {
            (int) array[i];
            number=number*10+(array[i]-48);
        }
        else
        {
            locate(15,6);
            printf("  Invalid input.");
            goto start;
        }
    }
    locate(15,6);
    printf("                  ");
    return number;
}
    }
}

