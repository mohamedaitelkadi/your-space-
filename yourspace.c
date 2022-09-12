#include <stdio.h>
#include <stdlib.h>

//declare the structure
struct signUp{
    int id ;
    char username[50];
    char email[50];
    char password[50];


};


int main()
{
    //create a file
    FILE *user ;
    user = fopen("accounts.txt","w");
    //printf("%s");
    int choix,i,id;
    printf("\t\t\t\t welcome to YOUR SPACE\n");
        printf("\t\t---------------------------------------------------\n");
        printf("\t\t\t\t menu\n");
        printf("1- new to YOUR SPACE ?\n");
        printf("2- already have an account? \n");
        printf("3- Exit \n");
        scanf("%d",&choix);


        switch(choix){
            case 1:
                printf("\t\t create a new account:\n");
                // Create a structure variable of myStructure signUp
                struct signUp u1 = {0,"uuu","eee","ppppp"};
                // recieve informations
                id=1;
                printf("enter your username:");
                scanf(" %s",u1.username);
                fputs(u1.username,user);
                fputs("\n",user);
                printf("enter your email:  ");
                scanf("%s",u1.email);
                fputs(u1.email,user);
                fputs("\n",user);

                printf("enter your password:");
                scanf("%s",u1.password);
                fputs(u1.password,user);
                fputs("\n\n\n",user);
                id++;
                //show the informations
                printf("\t\t your new account is ready:\n");
                printf("\t\t---------------------------------------------------\n");
                printf("your email : %s\n", u1.email);
                printf("your username : %s\n", u1.username);
                printf("your password : %s\n", u1.password);
                printf("\t\t---------------------------------------------------\n");

                /*fprintf(user,"%s",u1.email);
                fprintf(user,"%s",u1.username);
                fprintf(user,"%s",u1.password);*/


                break;
            case 2:
                printf("\t\t sign in:");
                printf("enter your username:  ");
                scanf("%s",u1.username);
                break;
            case 3:
                break;
        }










    return 0;
}

