#include <stdio.h>
struct student {
    int roll;
    char name[30];
    float marks;
};
int main() {
    struct student s[5];
    int i;

    printf("Enter details of students:\n");  

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll no: ");
        scanf("%d", &s[i].roll); 

        printf("Enter name: ");
        scanf("%s", s[i].name); 

        printf("Enter marks: ");
        scanf("%f", &s[i].marks); 
    }

    printf("\n****** Student Result ******\n"); 

    for (i = 0; i < 5; i++) {
        printf("\nRoll no: %d", s[i].roll);
        printf("\nName: %s", s[i].name);  
        printf("\nMarks: %.2f", s[i].marks);

        if (s[i].marks >= 40) {
            printf("\nResult: Pass\n");
        } else {
            printf("\nResult: Fail\n");
        }
    }

    return 0;
}
