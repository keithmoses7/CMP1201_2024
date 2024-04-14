#include <stdio.h>
#include <string.h>

double calculate_average(int grades[], int size);
void determine_letter_grade(double  mean);

int main() 
{
    struct Student
    {
        char full_name[50];
        char first_name[20];
        char last_name[30];
        char hall_of_residence[30];
        char letter_grade;
    };
    struct Student student_1;
    char st_first_name[20], st_last_name[30], st_hall_of_residence[30], st_letter_grade;
    int grades[4];
    int num_grades=4;
    double average_grade;
    
    printf("Enter your first name: ");
    fgets(st_first_name, 20, stdin);
    strcpy(student_1.first_name, st_first_name);
    
    printf("Enter your last name: ");
    fgets(st_last_name, 30, stdin);
    strcpy(student_1.last_name, st_last_name);
    
    printf("Enter your hall of residence: ");
    fgets(st_hall_of_residence, 30, stdin);
    strcpy(student_1.hall_of_residence, st_hall_of_residence);
    
    printf("Enter the  grades: \n");

    for(int i = 0; i < num_grades; i++)
    {
        scanf("%d", &grades[i]);
    }

    st_first_name[strlen(st_first_name)-1]=' ';
    printf("Full name: %s", strcat(st_first_name, st_last_name));
    printf("Hall: %s", st_hall_of_residence);
    printf("Grades: ");
    
    for (int x = 0;  x < num_grades; x++)
    {
        printf("%d,", grades[x]);
    }
    
    average_grade = calculate_average(grades, num_grades);
    printf("\nAverage grade: %d\n", (int)average_grade);
    determine_letter_grade(average_grade);
    
    return 0;
}

double calculate_average(int grades[], int num_grades)
{ 
    int average, sum = 0;
    
    for(int j = 0; j < num_grades; j++)
    {
        sum += grades[j];
    }
    
    average = (sum / num_grades);
    return average;
}

void determine_letter_grade(double mean)
{ 
    
    
    if (average >= 80)
    {
        printf("Letter grade: A");
    }
    else if(average >= 60)
    {
        printf("Letter grade: B");
    }
    else
    {
        printf("Letter grade: C");
    }
}
