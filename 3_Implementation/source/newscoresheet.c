//learnprogramo - programming made simple
void date();//to store todays date//
void printt();//for printing the output//
void filewrite();//for writing to the file//
void fileread();//for accessing from the file//
void fileopen(char);
void limitinput(int);
int limitedinput(int);
FILE *newfile,*filelist;
char filenamewithdirectory[50];//to pass the filename with its directory location//
char output[100];
void newscoresheet()
{
    system("color f4");
    int j,ln,number;
    char text[50],ch;
    system("cls");
    locate(20,8);
    char filename[20],array[100];
    char extension[]=".txt";
    char filenamewithdirectory[]="Files//";
    char filenamecheck[20];
    char filenamecheckvar;
    int i=0,flag=1,n=15;
    system("cls");
    initializeconsolehandles();
    printt();
    flag=0;
    while(1)
    {
        if(flag==0)
        {
            fflush(stdin);
            locate(13,0);
            fflush(stdin);
            limitinput(n);
            strcpy(gamedetailA.competition,output);
            flag=1;
            n=20;
        }
        if (flag==1)
        {
            locate(42,0);
            limitinput(n);
            strcpy(gamedetailA.venue,output);
            fflush(stdin);
            flag=2;
            n=10;
        }
        if(flag==2)
        {
            locate(15,2);
            limitinput(n);
            strcpy(gamedetailA.matchbetween,output);
            fflush(stdin);
            flag=3;
            n=10;
        }
        if(flag==3)
        {
            locate(44,2);
            limitinput(n);
            strcpy(gamedetailA.versus,output);
            fflush(stdin);
            flag=4;
            n=10;
        }
        if(flag==4)
        {
            locate(13,4);
            limitinput(n);
            strcpy(gamedetailA.tosswonby,output);
            fflush(stdin);
            flag=5;
            n=7;
        }
        if(flag==5)
        {
            locate(47,4);
            limitinput(n);
            strcpy(gamedetailA.electedto,output);
            fflush(stdin);
            flag=6;
            n=3;
        }
        if(flag==6)
        {
            locate(11,6);
            number=limitedinput(n);
            gamedetailA.inningsof=number;
            fflush(stdin);
            flag=7;
            n=10;
        }
        if(flag==7)
        {
            locate(53,6);
            printf(" T to enter today's date");
            locate(43,6);
            limitinput(n);
            if(output[0]=='t'||output[0]=='T')
            {
                date();
                locate(43,6);
                printf("         %s              ",gamedetailA.date);
            }
            else
            {
                strcpy(gamedetailA.date,output);
                locate(43,6);
                if(strlen(gamedetailA.date)<2)
                printf("                                       ");
                else
                printf("         %s                  ",gamedetailA.date);

            }
            fflush(stdin);
            flag=8;
            n=15;
        }
        if(flag==8)
        {
            locate(12,10);
            for (i=0; i<11; i++)
            {
                limitinput(n);
                strcpy(teamA[i].batsmanname,output);
                locate(12,11+i);
            }
            flag=9;
        }
        if(flag==9)
        {
            locate(12,24);
            for (i=0; i<8; i++)
            {
                limitinput(n);
                strcpy(teamA[i].bowler,output);
                locate(12,25+i);
            }
            flag=80;
        }
        if (flag==80)
        {
            locate(36,33);
            skip:
            printf("Enter e to edit or c to continue");
            ch=getch();
            if(ch=='e'||ch=='E')
            {
                flag=0;
                 locate(36,33);
                printf("                                                                                                    ");

            }
            else if(ch=='c'||ch=='C')
            {
                locate(36,33);
                printf("                                                                                                    ");
                locate(14,20);
                final();
                filewrite();
            }
            else
            {
              locate(36,33);
               printf("                                                                                                    ");
                flag=80;
            }
        }
    }
}


