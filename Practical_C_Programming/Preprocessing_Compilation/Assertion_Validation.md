# Applying assertion for validation

* Assert is a macro that is used to check a specific condition at runtime.

* It can be used for testing the assumptions of the programmer.

## Example

The program will ask the professor to enter the information about the students who attended the class. Using assertions, the user can ensure that the number of students entered is a non-negative number. If the number of students entered is negative the program aborts.


### How to do it

* Enter the number of students

```
printf("How many students?: ");
scanf("%d", &numberStudents);
```

* As the number of students should be a positive, when a negative is entered the program should be aborted.

```
assert(numberStudents > 0 && "Enter a non-negative number");
```

* If the number of students are positive, the professor should provide more information about the number of hours of the class, subject that is dealt with and the name of the professor.

* Display the information at the last.

### Code

```
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
```

## When to use assert

* Assertion is helpful for debugging and checking for programming errors.

* It cannot be used to check the errors at runtime. For example, if the user enters a wrong input assert cannot be used for handling these kind of errors. 

* Most of the programmers avoid using `assert` as it terminates the program if an error occurred. 

```
For example, consider a program that implements a doubly-linked list. Such a list might be represented as a collection of nodes, each of which has pointers to its prececessor and successor. In such a program, one can reasonably expect that if p points to a node, and that node has a successor (i.e. it is not at the end of the list), then the successor will point back at the original node as its predecessor. One might incorporate that belief into one's program as

    assert (p->succ == 0 || p->succ->pred == p);

If this assert ever fails, it means that the data structure has become corrupted, and any attempt to use it further will have undefined consequences. It is true that the program might be able to continue in these circumstances, provided that it never tried to use the errant pointer, but if the program produces correct results after that, it does so only by coincidence.
```
[Source](https://web.archive.org/web/20090707025230/http://www.ddj.com/blog/cppblog/archives/2007/07/assertions_vers.html)

## With Pointers

* Using assertions we can make sure that the pointer is pointing to a memory address instead to a NULL.

### Example

To determine the determinant of a 2x2 matrix using pointers and check if the pointer is not pointing to NULL using assert.

### How to do it

* Define a 2x2 matrix and enter the values

```
int a[2][2];
for (int i=0; i<2; i++){
	for(int j=0; j<2; j++)
		scanf("%d", a[i][j]);
}
```

* Point the pointer to the array

```
ptr = &a[0][0];
```

* Write a function to determine the determinant of the matrix.

```
determinant = findDeterminant(ptr)
```

* In the function, check if the pointer is not pointing to NULL or not using assert.

```
assert(ptr != NULL && "Pointer is not pointing");
```

* If the pointer is not a NULL, find the determinant of the array using `ad-bc` formula and address mapping 

```
(*(ptr + (0 * 2 + 0))) * (*(ptr + (1 * 2 + 1))) - (*(ptr + (0 * 2 + 1))) * (*(ptr + (1 * 2 + 0)))
```

### Code

```
#include<stdio.h>
#include<assert.h>

int findDeterminant(int *ptr);

int main() {

        int a[2][2];
        printf("Enter the values of the array: \n");
        for (int i=0; i<2; i++){
		for (int j=0; j<2; j++)
			scanf("%d", &a[i][j]);
        }

        int *ptr;
        ptr = &a[0][0];

        int determinant = findDeterminant(ptr);
        printf("The Determinant of the matrix is: %d", determinant);
        return 0;

}

int findDeterminant(int *ptr) {

        assert(ptr != NULL && "Pointer is not pointing");
        return (*(ptr + (0 * 2 + 0))) * (*(ptr + (1 * 2 + 1))) - (*(ptr + (0 * 2 + 1))) * (*(ptr + (1 * 2 + 0)));
}
```
