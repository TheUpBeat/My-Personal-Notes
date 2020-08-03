#include<stdio.h>
#include<assert.h>

int main() {

        int c, numberStudents, hours;
        char subject[30], nameProf[15];
        printf("How many students?: ");
        scanf("%d", &numberStudents);

        assert(numberStudents > 0 && "Enter a non-negative number");

        printf("Number of class hours: ");
        scanf("%d", &hours);

        printf("Name of the subject: ");
        while ((c = getchar()) != '\n' && c != EOF);
                fgets(subject, 30, stdin);
                printf("Name of the professor: ");
                fgets(nameProf, 30, stdin);
		printf("\n");
                printf("Entered Information: \n");
                printf("Number of Students: %d\n", numberStudents);
                printf("Number of hours: %d hours \n", hours);
                printf("Subject: %s", subject);
                printf("Name of the professor: %s", nameProf);
                return 0;
}
