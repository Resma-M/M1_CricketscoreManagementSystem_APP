//learnprogramo - programming made simple
void welcome()
{
                system("color f1");
                int i,y;
                locate(26,5);
                printf(" _ _ _ _ _ _ _ _ _ _  _ _ _ _ ");
                locate(27,7);
                  printf("*****************************");
                  locate(27,9);
                  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"
                         ,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
            locate(27,11);
                  printf(" %c%c%c!!! WELCOME !!!%c%c%c",2,2,2,2,2,2);
                  locate(39,13);
                  printf("TO");
                  locate(27,15);
                  printf(" %c%c%c%c CRICKET SCORE SHEET %c%c%c%c",3,3,3,3,3,3,3,3);
                  locate(27,17);
                  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%"
                         ,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
                  locate(27,19);
                  printf("*****************************");
                  locate(27,21);
                  printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
                  Sleep(250);
                  locate(27,23);
                  printf(" COPY RIGHTED TO:-");
                  Sleep(250);
                  locate(27,25);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE );
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE );
                  locate(27,29);
                  printf("\tLearnprogramo-programming made simple",16);

                  for(y=30;y<=40;y++)
                  {
                    {

                      locate(27,y);
                      Sleep(400);
                    }
                  }
                  printf("\n");

system("color ff");
            }





