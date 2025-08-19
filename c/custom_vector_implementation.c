#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int *data;
    int size;
    int capacity;
}Vector;


void init(Vector *v){
    v->capacity = 2;
    v->size = 0;
    v->data = malloc(v->capacity * sizeof(int));
}

void addElement(Vector *v,int element){
    if(v->size == v->capacity){
        int newCapacity = v->capacity + 2;
        int *newPointer = malloc(newCapacity * sizeof(int));
        for(int i = 0;i<v->size;i++){
            newPointer[i] = v->data[i];
        }
        free(v->data);
        v->data = newPointer;
        v->capacity = newCapacity;
    }
    v->data[v->size] = element;
    v->size++;
}


void removeLast(Vector *v){
    if(v->size > 0){
        v->size--;
    }else{
        printf("vector is already empty");
    }
}

void printVector(Vector *v) {
    printf("\n");
    printf("------------------------------------");
    printf("\n");
    printf("Vector  visualization: \n");
    printf("------------------------------------\n");
    for(int i = 0; i < v->capacity; i++) {
    if (i < v->size)
        printf("[%d]", v->data[i]); // filled slot
    else
        printf("[ ]");             // empty slot
    }   
    printf("\n");
    printf("------------------------------------");

    printf("\n");
   


}


void resetVector(Vector *v){
    if(v->data != NULL) free(v->data);
    v->size = 0;
    v->capacity = 0;
    v->data = NULL;
}



int main(){
    printf("this is a custom vector visualization program");
    Vector v1;
    int userInput;
    while (0<10){
        printf("\n");
        printf("1. initialize vector \n");
        printf("2. add element to vector \n");
        printf("3. remove last element from vector \n");
        printf("4. reset vector \n");
        printf("5. print vector \n");
        printf("6. exit \n");
        printf("please give an Input : ");
        scanf("%d",&userInput);
        printf("\n");
        if(userInput ==1){
            init(&v1);
        }else if(userInput == 2){
        int userElement ;
        printf("please enter an element : ");
        scanf("%d",&userElement);
        addElement(&v1,userElement);
        }else if(userInput == 3){
            removeLast(&v1);
        }else if(userInput ==4){
            resetVector(&v1);
        }else if (userInput == 5){
            printVector(&v1);
        }else if(userInput == 6){
            printf("exiting vector");
            printVector(&v1);
            break;
        }
        else{
            printf("please select approriprate menu:");
        }
    }
    return 0;
}
