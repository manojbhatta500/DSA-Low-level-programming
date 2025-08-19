#include<stdio.h>
#include<stdlib.h>

typedef struct 
{ char name[50];
    int age;
}Student;


int main(){
    printf("how many student you want to enter : ");
    int student_count;
    scanf("%d",&student_count);
    printf("\n");

    Student *studentDataBase =  malloc(student_count * sizeof(Student));

    for(int i =0;i<student_count;i++){
        printf("please enter  the student name : ");
        scanf("%s",studentDataBase[i].name);
        printf("\n");
        printf("please eneter the age of the student : ");
        scanf("%d",&studentDataBase[i].age);
        printf("\n");
    }

    for(int i=0;i<student_count;i++){
        printf("the student data at index %d ",i);
        printf("\n");
        printf("the name of student is %s  and %d years old",studentDataBase[i].name,studentDataBase[i].age);
        printf("\n");
    }

    free(studentDataBase);

    printf("the memory is freed");




    return 0;
}


// 🔹 Problem 5: Struct + malloc

// Define a struct Student { char name[50]; int age; }.

// Ask: “How many students?”

// Allocate memory for that many students using malloc.

// Input their names and ages.

// Print them out.

// free the memory.