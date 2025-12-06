#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//[1] struct
typedef struct {
    char name[10];
    char id[10];
    int age;
    int grades[5];
}student;

//[2] struct
typedef struct {
    char course_name[20];
    char course_id[10];
    int credit_hours;
}course;

//[3]struct
typedef struct 
{
    int a;
    int b;
}point,vector,resoluation; //why declare multiple wht is the use of this..?


//Prototypes
void course_outcome();
void course_display(course cpy_cname);
void struct_arthemetic(point first,point second);
void intializing_using_for_loop();


int main(){
    course_outcome();
    //We can use a player_view example

    //Another method of declaring for [3] struct
    //[1]
    point plyrpos ={10,20};
    //[2]
    vector v={.a=1,.b=0};
    //[3] This demonstarte that the order does not matter 
    resoluation scrn={.b=1920,.a=1060};

    printf("\n\n\n---The output for 3rd struct---\n\n\n");
    printf("The position of player is %d:%d\n",plyrpos.a,plyrpos.b);
    printf("The velocity of player is %d:%d\n",v.a,v.b);
    printf("The resoluation of screen is %d:%d\n",scrn.a,scrn.b);  
    
    printf("\n\n\n---Now lets try to perform some arthemetic operation on structers variable---\n\n\n");
    //Just taking some random values for arthematic
    point plyrpos2 ={20,40};
    struct_arthemetic(plyrpos,plyrpos2);

    intializing_using_for_loop();

}

void course_outcome(){
    course c_name;
    strcpy(c_name.course_name,"Apna clg");
    strcpy(c_name.course_id,"78749835");
    c_name.credit_hours=5;
    course_display(c_name);

}

void course_display(course cpy_name)
{
    printf("The course name:%s and ID: %s of hours: %d",cpy_name.course_name,cpy_name.course_id,cpy_name.credit_hours);
}

void struct_arthemetic(point first,point second)
{

    point *ptr=&second;
    printf("The values after copying 3 struct datatype 'point' name as 'second'(Variable name):\n %d:%d \n",ptr->a,ptr->b);

}

void intializing_using_for_loop()
{
    //IMP concept
    point arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i].a =i;
        arr[i].b =10 - i;
    }

    //Displaying
    for (int j = 0; j < 10; j++)
    {
        printf("\n%d.Values of A:%d and B:%d\n",j,arr[j].a,arr[j].b);
    }
}
/*
1.Whenever you pass struct to function see that if it defined or not or try to define them in the local scope of user_defined_function.
2.As struct is nothing but a pointer(behind the scneces) so it can sometimes points to garbage value if not initialized properly.
3.You can use typedef to avoid writing struct again and again.
4.We can intialize structer in many different ways
5.A concept of copying values from a structure lets to consumption of space to solve this we use pointer.
--While we pass pointers now we have to change the "." operater to "->" so that we can point the location of the variable
--Reason saving space.
6.We can also intialize structure using for loop.
*/