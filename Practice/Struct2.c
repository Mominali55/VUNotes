#include<stdio.h>
#include<string.h>

struct student
{
    char name[10];
    char id[10];
    int age;
    int grades[5];
};

//[1] strating with basics
int main(void){
    struct student momin;
    strcpy(momin.name,"momin");
    strcpy(momin.id,"AT567");
    momin.age=18;
    momin.grades[0]=1;
    momin.grades[1]=2;
    momin.grades[2]=3;
    momin.grades[3]=4;
    momin.grades[4]=5;

    printf("Name:%s\n",momin.name);
    printf("ID:%s\n",momin.id);
    printf("Age:%d\n",momin.age);

    //For grades we can use for loop
    printf("The grdaes for studnet %s are:\n",momin.name);
    for (int i = 0; i < 5; i++)
    {
        printf("The grdaes for %d are : %d\n",i,momin.grades[i]);
    }

}

/*
This program demonstarte the basic of stuct plus a first way to intializing the stuct there are ways also
it uses stuct in for loop,strcpy also...
*/
