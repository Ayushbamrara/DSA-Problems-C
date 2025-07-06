#include<stdio.h>
struct employee {
 int id;
 float salary;
 char phoneno[10];

};

void main(){
    struct employee data;
    printf("enter your id ");
    scanf("%d", &data.id);
    printf("enter salary ");
    scanf("%f", &data.salary);
    printf("enter phone no.");
    scanf("%s",&data.phoneno);

    printf("%d ", data.id);
    printf("%d ", data.salary);
    printf("%s ", data.phoneno);
    printf("\n");
    if(data.salary<10000){
        printf("Worker");
    }
    else if(data.salary>=10000 && data.salary < 20000){
        printf("Supervisor");
    }
    else if(data.salary>=20000 && data.salary < 50000){
        printf("Manager");
    } else {
        printf("Area Manager");
    }
}
