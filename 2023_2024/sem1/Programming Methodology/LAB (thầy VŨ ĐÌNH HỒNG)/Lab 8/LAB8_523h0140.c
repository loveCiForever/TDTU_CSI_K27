

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

#define N 100
#define TEN 10
const int MAX = 1001;
const long MAX_LN = 1e9 + 1;

typedef struct
{
 	char id[N];
 	char name[N];
 	char sex[N];
 	char birth_year[N];
 	char phone_number[N];
 	char salary[N];
} Employee;

void remove_line(char c[]);
void remove_digit(char c[], int *length, int pos);
void swap(Employee *per1, Employee *per2);

void import_number_of_employees(int *n);
void import_employees_info(Employee employeeList[], int n);
void export_employee_info(Employee employee);
void export_employees_info(Employee employeeList[], int n);
void count_genders(Employee employeeList[], int n, int *countMale, int *countFemale);
void sort_birth(Employee employeeList[], int n);
void sort_salary(Employee employeeList[], int n);

int find_employee(Employee employeeList[], int n, char id_f[]);

int main() 
{
	Employee employeeList[TEN];
	Employee employee;

    int n;
    import_number_of_employees(&n);
    import_employees_info(employeeList, n);
    export_employees_info(employeeList, n);
	/*
    char id_f[MAX];
  	printf("\nEnter ID of the employee: ");
  	scanf("%s", id_f);
  	remove_line(id_f);

  	if(find_employee(employeeList, n, id_f) != 0)
  	{
  		printf("\nThe employee has been found\n ");
  		export_employee_info(employeeList[find_employee(employeeList, n, id_f) - 1]);
  	}
  	else
  		printf("\nThe employee has not been found\n");

  	int countMale;
    int countFemale;
    count_genders(employeeList, n, &countMale, &countFemale);
    printf("\n");
    printf("\nNumber of male employee: %d", countMale);
    printf("\nNumber of female employee: %d", countFemale);

    printf("\n");
    printf("\nEmployee info in ascending order of birth year");
    sort_birth(employeeList, n);
    export_employees_info(employeeList, n);*/

    printf("\n");
    printf("\nEmployee info in ascending order of salary");
    sort_salary(employeeList, n);
    export_employees_info(employeeList, n);

    return 0;
}

void remove_line(char c[])
{
  int len = strlen(c);
  if(c[len-1] == '\n')
    c[len-1] = '\0';
}

void remove_digit(char c[], int *length, int pos)
{
	int i;
    for(i = pos; i < *length; i++)
    {
        c[i] = c[i + 1];
    }
    *length -= 1;
}

void swap(Employee *per1, Employee *per2)
{
	Employee temp = *per1;
	*per1 = *per2;
	*per2 = temp;
}

void import_number_of_employees(int *n)
{
	do
	{
		printf("Enter the number of employess: ");
		scanf("%d", &*n);

		if(*n <= 0)
			printf("Wrong input. Please try again !!!\n");
	}
	while(*n <= 0);
}

void import_employees_info(Employee employeeList[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nEnter information of the employee number %d. \n", i + 1);
		printf("Enter ID: ");
			scanf("%s", employeeList[i].id);
			char rm = getchar();		
		printf("Enter name: ");
			fgets(employeeList[i].name, N, stdin);
			remove_line(employeeList[i].name);
		printf("Enter sex (Male/ Female/ Others): ");
			scanf("%s", employeeList[i].sex);
		printf("Enter birth year: ");
			scanf("%s", employeeList[i].birth_year);
		printf("Enter phone number: ");
			scanf("%s", employeeList[i].phone_number);
		printf("Enter salary: ");
			scanf("%s", employeeList[i].salary);	
		printf("\n");		
	}
}

void export_employee_info(Employee employee)
{
	printf("\n ID: %s", employee.id);
	printf("\n Name: %s", employee.name);
	printf("\n Sex: %s", employee.sex);
	printf("\n Birth of year: %s", employee.birth_year);
	printf("\n Phone number: %s", employee.phone_number);
	printf("\n Salary: %s", employee.salary);
}

void export_employees_info(Employee employeeList[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Info of the employee number %d: ", i + 1);
		export_employee_info(employeeList[i]);
		printf("\n");
	}
}

int find_employee(Employee employeeList[], int n, char id_f[])
{
	int i;
	for(i = 0; i < n; i++)
		if(strcmp(employeeList[i].id, id_f) != 0)
			i = 0;
	return i;
}

void count_genders(Employee employeeList[], int n, int *countMale, int *countFemale)
{
	*countMale = 0;
	*countFemale = 0;

	char male[] = "male";
	char Male[] = "Male";
	char female[] = "female";
	char Female[] = "Female";

	int i;
	for(i = 0; i < n; i++)
	{
	    if(strcmp(employeeList[i].sex, male) == 0 || strcmp(employeeList[i].sex, Male) == 0)
	        *countMale = *countMale + 1;
	    else if(strcmp(employeeList[i].sex, female) == 0 || strcmp(employeeList[i].sex, Female) == 0)
	        *countFemale = *countFemale + 1;
	    else 
	        continue;
	}
}

void sort_birth(Employee employeeList[], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {	
        	int res1 = atoi(employeeList[i].birth_year);
        	int res2 = atoi(employeeList[j].birth_year);
            if(res1 > res1)
        		swap(&employeeList[i], &employeeList[j]);
        }
    }

}