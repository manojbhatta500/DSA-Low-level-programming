#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int class;
    int rolln0;
    char name[50];
}Student;

void showStudentData(FILE *db);
void addDataToDatabase(FILE *db);
void studentPrinter(Student s);

int main(){
    FILE *database = fopen("database.dat","rb+");
    if(database == NULL){
        printf("error initilizing database");
        printf("exiting database");
        return 1;
    }
    int userInput;
    while(1){
        printf("welcome to student database system.\n");
        printf("1. for viewing student database\n2. for storing data to database\n3.exit");   
        printf("Input: ");
        scanf("%d", &userInput);    
        if(userInput ==1){
            showStudentData(database);
        }else if (userInput ==2){
            addDataToDatabase(database);
        }else if(userInput == 3){
            printf("exiting application");
            break;
        }else{
            printf("sorry this feature is not available right now\n");
        }
    }

}


void addDataToDatabase(FILE *db){
    Student s;
    printf("please enter the required student detail\n");
    printf("student class : ");
    scanf("%d", &s.class);
    printf("student roll no : ");
    scanf("%d", &s.rolln0);
    printf("enter student name : ");
    scanf("%49s", s.name);
    fwrite(&s,sizeof(s),1,db);
}


void showStudentData(FILE *db){
    Student s;
    rewind(db);
    int found = 0;
    while (fread(&s,sizeof(s),1,db)==1){
        found =1;
        studentPrinter(s);
    }
    if(found == 0){
    printf("sorry student can't be found in the database");
    }
}

void studentPrinter(Student s){
    printf("name : %s\n",s.name);
    printf("roll no : %d\n",s.rolln0);
    printf("class : %d\n",s.class);
}
