#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    printf(" \t \t \t \t \t \t Welcome\n \t\t\t\t\tUniversity of Asia Pacific\n");
    while(1)
    {
        int choice,sem,date,a,id,i,stdi;
        char routine,room[5000],seat,exit,b[100],day[100],rn[100],txt[10]=".txt",spc[10]=" ";
        printf("\n\n[1]Routine\n[2]Seat plan\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nSemester:\n");
            printf("[1]1.1\n[2]1.2\n[3]2.1\n[4]2.2\n[5]3.1\n[6]3.2\n[7]4.1\n[8]4.2\n");
            printf("\nEnter your semester: ");
            scanf("%d",&sem);

            FILE *fp1,*fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*fp8;
            fp1=fopen("routine 1.1.txt","r");
            fp2=fopen("routine 1.2.txt","r");
            fp3=fopen("routine 2.1.txt","r");
            fp4=fopen("routine 2.2.txt","r");
            fp5=fopen("routine 3.1.txt","r");
            fp6=fopen("routine 3.2.txt","r");
            fp7=fopen("routine 4.1.txt","r");
            fp8=fopen("routine 4.2.txt ","r");
            printf("\n");

            switch(sem)
            {
            case 1:
                while(1)
                {
                    routine=fgetc(fp1);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);

                }
                fclose(fp1);
                break;


            case 2:

                while(1)
                {
                    routine=fgetc(fp2);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp2);
                break;
            case 3:

                while(1)
                {
                    routine=fgetc(fp3);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp3);
                break;
            case 4:

                while(1)
                {
                    routine=fgetc(fp4);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp4);
                break;
            case 5:

                while(1)
                {
                    routine=fgetc(fp5);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp5);
                break;
            case 6:

                while(1)
                {
                    routine=fgetc(fp6);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp6);
                break;
            case 7:

                while(1)
                {
                    routine=fgetc(fp7);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp7);
                break;
            case 8:

                while(1)
                {
                    routine=fgetc(fp8);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp8);
                break;

            }


        }
        if(choice==2)
        {
            printf("Choose Type:\n[1]Room Wise\n[2]Roll Wise\n");
            printf("\nEnter your choice:");
            scanf("%d",&choice);
            printf("\n");
            if(choice==1)
            {

                printf("Date selection:\n[Day1]3-04-2021\n[Day2]5-04-2021\n[Day3]7-04-2021\n[Day4]8-04-2021\n[Day5]9-04-2021\n[Day6]11-04-2021\n[Day7]13-04-2021\n");
                printf("\nEnter Day no.: ");
                scanf("%s",&day);
                printf("\n");

                printf("Room Selection:\n[*]201\n[*]202\n[*]203\n[*]204\n[*]301\n[*]302\n[*]303\n[*]304\n[*]401\n[*]402\n[*]403\n[*]404\n[*]501\n[*]502\n[*]503\n[*]503\n");
                printf("\nEnter Room no.:");
                scanf("%s",&rn);
                printf("\n");
                strcpy(b,day);
                strcat(b,spc);
                strcat(b,rn);
                strcat(b,txt);

                FILE *r1=fopen(b,"r");
                while(1)
                {
                    seat=fgetc(r1);
                    if(seat==EOF)
                        break;
                    printf("%c",seat);
                }

                fclose(r1);



            }

        }
        if(choice==2)
        {
            printf("Date selection:\n[1]3-04-2021\n[2]5-04-2021\n[3]7-04-2021\n[4]8-04-2021\n[5]9-04-2021\n[6]11-04-2021\n[7]13-04-2021\n");
            printf("\nChoose Date: ");
            scanf("%d",&date);
            printf("\n");
            if(date==1)
            {
                printf("Enter Your ID: ");
                scanf("%d",&stdi);
                FILE *f1 =fopen("day 1.txt","r");
                for(i=0; i<5000; i++)
                {
                    fscanf(f1,"%s",room);
                    id=atoi(room);
                    if(id==stdi)
                    {
                        fgets(room,5000,(FILE*)f1);
                        printf("\n%s",room);
                        break;
                    }
                }

            }
            else if(date==2)
            {
                printf("Enter Your ID: ");
                scanf("%d",&stdi);
                FILE *f2 =fopen("day 2.txt","r");
                for(i=0; i<5000; i++)
                {
                    fscanf(f2,"%s",room);
                    id=atoi(room);
                    if(id==stdi)
                    {
                        fgets(room,5000,(FILE*)f2);
                        printf("%s",room);
                        break;
                    }
                }
            }
            else if(date==3)
            {
                printf("Enter Your ID: ");
                scanf("%d",&stdi);
                FILE *f1 =fopen("day 3.txt","r");
                for(i=0; i<5000; i++)
                {
                    fscanf(f1,"%s",room);
                    id=atoi(room);
                    if(id==stdi)
                    {
                        fgets(room,5000,(FILE*)f1);
                        printf("%s",room);
                        break;
                    }
                }
            }
            else if(date==4)
            {
                printf("Enter Your ID: ");
                scanf("%d",&stdi);
                FILE *f1 =fopen("day 4.txt","r");
                for(i=0; i<5000; i++)
                {
                    fscanf(f1,"%s",room);
                    id=atoi(room);
                    if(id==stdi)
                    {
                        fgets(room,5000,(FILE*)f1);
                        printf("%s",room);
                        break;
                    }
                }
            }
            else if(date==5)
            {
                printf("Enter Your ID: ");
                scanf("%d",&stdi);
                FILE *f1 =fopen("day 5.txt","r");
                for(i=0; i<5000; i++)
                {
                    fscanf(f1,"%s",room);
                    id=atoi(room);
                    if(id==stdi)
                    {
                        fgets(room,5000,(FILE*)f1);
                        printf("%s",room);
                        break;
                    }
                }
            }
            else if(date==6)
            {
                printf("Enter Your ID: ");
                scanf("%d",&stdi);
                FILE *f1 =fopen("day 6.txt","r");
                for(i=0; i<5000; i++)
                {
                    fscanf(f1,"%s",room);
                    id=atoi(room);
                    if(id==stdi)
                    {
                        fgets(room,5000,(FILE*)f1);
                        printf("%s",room);
                        break;
                    }
                }
            }
            else if(date==7)
            {
                printf("Enter Your ID: ");
                scanf("%d",&stdi);
                FILE *f1 =fopen("day 7.txt","r");
                for(i=0; i<5000; i++)
                {
                    fscanf(f1,"%s",room);
                    id=atoi(room);
                    if(id==stdi)
                    {
                        fgets(room,5000,(FILE*)f1);
                        printf("%s",room);
                        break;
                    }
                }

            }

        }

    printf("\n\nPress c to continue or x to exit\n");
    printf("Your Choice: ");
    scanf("%*c%c",&exit);
    if(exit=='x')
    {
        printf("\n\nBest of Luck for your Exam");
        break;
    }

}

getch();
return 0;
}
