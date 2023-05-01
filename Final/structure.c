#include <stdio.h>

struct index {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct index person[4];

    for (int i = 0; i < 4; i++) {
        printf("Enter person %d name:\n", i + 1);
        fgets(person[i].name, 50, stdin);

        printf("Enter person %d age:\n", i + 1);
        scanf("%d", &person[i].age);
        scanf("%*c"); // clear input buffer

        printf("Enter person %d salary:\n", i + 1);
        scanf("%f", &person[i].salary);
        scanf("%*c"); // clear input buffer
    }

    for (int i = 0; i < 4; i++) {
        printf("%s", person[i].name);
        printf("Person %d age: %d\n", i + 1, person[i].age);
        printf("Person %d salary: %.2f\n", i + 1, person[i].salary);
    }

    return 0;
}
 