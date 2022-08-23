#include <stdio.h>
#include <string.h>

// Def struct Books 
struct Books {
   
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;

}; // End struct

// Function declaration 
void printBook( struct Books *book );

// Driver code
int main( ) {
	
   // Declare Book1 of type Book
   struct Books Book1;       
  
   // book 1 specification 
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   // Print Book1 info by passing address of Book1 
   printBook( &Book1 );

   return 0;

} // End driver

// Def function printBook
void printBook( struct Books *book ) {

   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);

} // End function

