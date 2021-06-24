#include <stdio.h>
struct data{
        char name[20];
        int marks;
};
int main()
{
    int n;
    printf("ENTER THE NO. OF STUDENTS: ");
    scanf("%d", &n);
    struct data student[50];
    printf("Enter the names and marks respectively: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name for student %d: ", (i + 1));
        scanf("%s", &student[i].name);
        printf("Enter the marks for student %d: ", (i + 1));
        scanf("%d", &student[i].marks);
    }

    for (int i = 0; i < n; i++){
        printf("\nDATA FOR STUDENT %d:\n", (i + 1));
        printf("Name: %s\n", student[i].name);
        printf("Marks obtained: %d\n", student[i].marks);
    }

    
}
