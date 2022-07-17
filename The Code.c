#include <stdio.h>
 int main() {
   struct Person {
      char name[50];
      int citNo;
      float salary; };

struct Person person;
//For the information of a person.
   printf("Enter name: ");
   scanf("%s", person.name);
   printf("Enter city number: ");
   scanf("%d", &person.citNo);
   printf("Enter salary: ");
   scanf("%f", &person.salary);
   printf("\n"); //New line.

   printf("Name: %s\n", person.name); //Prints the name.
   printf("City number: %d\n", person.citNo); //Prints the city number.
   printf("Salary: %.2f\n", person.salary); //Prints the salary.

return 0;
}
