/*
  gcc ex4b.c -o ex4b
*/

#include <stdio.h>
#include <stdlib.h>



/* ********************************* */
int main() {

   /* size of structure unknown at compile time */
   typedef struct  {
      char   name[50];
      char phone[12];
      char  email[50];
   } contact_type;

   int  i, size;
   contact_type *contacts;

   /* prompt user for array size */
   printf("Enter array size: ");
   scanf("%d", &size);

   /* allocate an array of the requested size off the heap */
   contacts = calloc (size, sizeof(contact_type));

   for (i=0; i<size; i++){
          printf("Enter student[%d] name, phone number, email: ", i);
          scanf("%s %s %s", &contacts[i].name, &contacts[i].phone, &contacts[i].email);
   }

   for (i=0; i<size; i++)
          printf("%s %s %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);

   /* deallocate the array */
   free(contacts);

   return 0;
}