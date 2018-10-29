/*
  g++ ContactList.cpp -o ContactList
*/


/* this preprocessing directive is needed for basic I/O routines */
#include <iostream>
using namespace std;

struct Contacts
{
	string name;
	string phone;
   string email;
	
};
// function prototyping
void display(Contacts*, int);

/* ********************************* */
int main() {

   /* size of array unknown at compile time */
   int  i, size;

   /* prompt user for array size */
   cout << "Enter array size:";
   cin  >> size;

   /* allocate an array of the requested size off the heap */
   Contacts* contacts = new Contacts[size];

   for (i=0; i<size; i++){
	      cout << "Enter Contact element " << i << ": ";
          cin  >> contacts[i].name;
          cout << "Enter Contact element " << i << ": ";
          cin  >> contacts[i].phone;
          cout << "Enter Contact element " << i << ": ";
          cin  >> contacts[i].email;
   }

   display(contacts, size);

   /* deallocate the array */
   delete[] contacts;

   return 0;
}

/* ********************************* */
void display(Contacts* array, int n) {
	int i;

	for (i=0; i<n; i++)
	   cout << "Contact[" << i << "]="  << array[i].name << " " << array[i].phone <<" " << array[i].email << "\n";
//       cout << "Contact[" << i << "]="  << array[i].phone << " ";
//       cout << "Contact[" << i << "]="  << array[i].email << "\n";
}