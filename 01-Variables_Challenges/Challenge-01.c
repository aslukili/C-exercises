#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   char name[20];
   char last_name[20];
   int age;
   char gender[10];
   char phone_number[20];

   printf("your first name: ");
   scanf("%s", name);
   printf("your family name: ");
   scanf("%s", last_name);
   printf("your age: ");
   scanf("%d", &age);
   printf("your gender (male/female): ");
   scanf("%s", gender);
   printf("your phone number: ");
   scanf("%s", phone_number);

   printf("Hello %s %s\n", name, last_name);
}