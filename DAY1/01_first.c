//Structure of a C program
// #include<conio.h>//header

// int main()//main function
// {
//     printf("hello ");//display 

//     return 0;   //return
// }

/*
Header Files Inclusion: The first and foremost component is the inclusion of the Header files in a C program. 
A header file is a file with extension .h which contains C function declarations and
 macro definitions to be shared between several source files.
Some of C Header files: */

/*
stddef.h – Defines several useful types and macros.
stdint.h – Defines exact width integer types.
stdio.h – Defines core input and output functions
stdlib.h – Defines numeric conversion functions, pseudo-random network generator, memory allocation
string.h – Defines string handling functions
math.h – Defines common mathematical functions
*/

/*
Main Method Declaration:
The next part of a C program is to declare the main() function. 
The syntax to declare the main function is:
Syntax to Declare the main method: 
 */

// int main()
// {}
 
 /*
Variable Declaration: The next part of any C program is the variable declaration.
It refers to the variables that are to be used in the function.
Please note that in the C program, no variable can be used without being declared.
Also in a C program, the variables are to be declared before any operation in the function.
Example: */
 
// int main()
// {
//     int a;


/* 
Body: The body of a function in the C program,
refers to the operations that are performed in the functions.
It can be anything like manipulations, searching, sorting, printing, etc.
Example: */
 
//  int main()
//  {
//    float a =5.5  ;
//    printf(" value of a is %f", a);
// return 0;
//  }
 /*a
Return Statement: The last part of any C program is the return statement. 
The return statement refers to the returning of the values from a function.
This return statement and return value depend upon the return type of the function. 
For example, if the return type is void, then there will be no return statement. In any other case,
there will be a return statement and the return value will be of the type of the specified return type.
Example: */
 
// int main()
// {
//     int a;

//     printf("%d", a);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     printf("hello");
//     return 0;
// }




// # include<stdio.h>//Header file
// /*
// This is our first c program
// */
// int main()   //main function 
// {

// //Naming of variable
//     int sam; 
//     int Tom=5;   // Declaring variables to store error codes
//     int error_code;
//     printf("Hello");
//     return 0;   //Return
// }

/*
A variable can have alphabets, digits, and underscore.
A variable name can start with the alphabet, and underscore only. 
It can’t start with a digit.
No whitespace is allowed within the variable name.
A variable name must not be any reserved word or keyword,
 e.g. int, goto, etc.*/





//example-
// #include <stdio.h>
// int main()
// {
//     // declaration and definition of variable 'a123'
//     char a123 = 'a';
 
//     // This is also both declaration and definition as 'b' is allocated
//     // memory and assigned some garbage value.  
//     float b; 
 
//     // multiple declarations and definitions
//     int _c, _d45, e;
 
//     // Let us print a variable
//     printf("%c \n", a123);
 
//     return 0;
// }


// Local Variable:- A variable that is declared and used inside the function or block is called a local variable.
// It is scope is limited to function or block. It cannot be used outside the block.
//  Local variables need to be initialized before use.

//exa-2
// #include <stdio.h>
// void function() {
// int x = 10; // local variable
// }

// int main()
// {
// function();
// }

// 2- Global Variable: A variable that is declared outside the function or block is called a global variable.
//  It is declared at the start of the program.
//   It is available for all functions. 
//  exa-
//  #include <stdio.h>
// int x = 20;//global variable
// void function1()
// {
// printf("%d\n" , x);
// }
// void function2()
// {
// printf("%d\n" , x);
// }
// int main() {

// function1();
// function2();
// 	return 0;
// }


//  Operators-
// An operator is simply a symbol that is used to perform operations.
//  There can be many types of operations like arithmetic, logical, bitwise, etc.
// Arithmetic Operators
// Relational Operators
// Shift Operators
// Logical Operators
// Bitwise Operators
// Ternary or Conditional Operators
// Assignment Operator
// Misc Operator

// Precedence of Operators in C-
// The precedence of operator species that which operator will be evaluated first and next. 
// The associativity specifies the operator direction to be evaluated; 
// it may be left to right or right to left.
// Category	Operator	Associativity
// Postfix	() [] -> . ++ - -	Left to right
// Unary	+ - ! ~ ++ - - (type)* & sizeof	Right to left
// Multiplicative	* / %	Left to right
// Additive	+ -    	Left to right

// Shift	<< >>	      Left to right

// Relational	< <= > >=	      Left to right

// Equality	== !=	    Left to right

// Bitwise AND	&     	Left to right

// Bitwise XOR	^	    Left to right

// Bitwise OR	|    	Left to right

// Logical AND	&&                                         Left to right

// Logical OR          	||                          	Left to right

// Conditional	?:                                       	Right to left

// Assignment        	= += -= *= /= %=>>= <<= &= ^= |=	Right to left

// Comma	,	                                            Left to right


// C Format Specifier
// The Format specifier is a string used in the formatted input and output functions. 
// The format string determines the format of the input and output.
//  The format string always starts with a '%' character.
// %d or %i-It is used to print the signed integer value where signed integer means
//  that the variable can hold both positive and negative values.

//  %f	It is used for printing the decimal floating-point values.
//   By default, it prints the 6 values after.

// %c	It is used to print the unsigned character.
// %s	It is used to print the strings.

// example-

//1
// int main()  
// {  
//   int b=6;  
//   int c=8;  
//   printf("Value of b is:%d", b);  
//   printf("\nValue of c is:%d",c);  
  
//     return 0;  
// }


//2
// int main()  
// {  
//   float y=3.4;  
//   printf("Floating point value of y is: %f", y);  
//   return 0;  
// }  

//3-
// int main()  
// {  
//   char a='c';  
//   printf("Value of a is: %c", a);  
//   return 0;  
// }  


//4-
// int main()  
// {  
//   printf("%s", "helloworld");  
//   return 0;  
// }  

// #include<stdio.h>    
// int main(){    
//      int number=50;  
//     printf("You\n are\n learning\n\'c\'language\n\"Do you know C language\"");     
// return 0;  
// }   

// Escape Sequence	Meaning
// \a	Alarm or Beep
// \b	Backspace
// \f	Form Feed
// \n	New Line
// \r	Carriage Return
// \t	Tab (Horizontal)
// \v	Vertical Tab
// \\	Backslash
// \'	Single Quote
// \"	Double Quote
// \?	Question Mark
// \nnn	octal number
// \xhh	hexadecimal number
// \0	Null

// ASCII value in C
// What is ASCII code?
// The full form of ASCII is the American Standard Code for information interchange.
//  It is a character encoding scheme used for electronics communication.
//  Each character or a special character is represented by some ASCII code,
//  and each ascii code occupies 7 bits in memory.
// #include <stdio.h>  
// int main()  
// {  
//     char ch;    // variable declaration  
//     printf("Enter a character");  
//     scanf("%c",&ch);  // user input  
//     printf("\n The ascii value of the ch variable is : %d", ch);  
//     return 0;  
// }  

//C Control Statements

// C if else Statement
// The if-else statement in C is used to perform the operations based on some specific condition.
// The operations specified in if block are executed if and only if the given condition is true.

// If statement
// If-else statement
// If else-if ladder
// Nested if

// If Statement
// The if statement is used to check some given condition
// perform some operations depending upon the correctness of that condition.
//exa-
// if(expression){  
// //code to be executed  
// }  

// #include<stdio.h>    
// int main(){    
// int number=0;    
// printf("Enter a number:");    
// scanf("%d",&number);    
// if(number%2==0){    
// printf("%d is even number",number);    
// }    
// return 0;  
// }  


// If-else Statement
// The if-else statement is used to perform two operations for a single condition.
//  The if-else statement is an extension to the if statement using which, we can perform two different operations,
//  one is for the correctness of that condition, and the other is for the incorrectness of the condition

// if(expression){  
// //code to be executed if condition is true  
// }else{  
// //code to be executed if condition is false  
// }  

// #include<stdio.h>    
// int main(){    
// int number=0;    
// printf("enter a number:");    
// scanf("%d",&number);     
// if(number%2==0){    
// printf("%d is even number",number);    
// }    
// else{    
// printf("%d is odd number",number);    
// }     
// return 0;  
// }  

// #include <stdio.h>  
// int main()  
// {  
//     int age;   
//     printf("Enter your age?");   
//     scanf("%d",&age);  
//     if(age>=18)  
//     {  
//         printf("You are eligible to vote...");   
//     }  
//     else   
//     {  
//         printf("Sorry ... you can't vote");   
//     }  
// }  


// The if-else-if ladder statement is an extension to the if-else statement. 
// It is used in the scenario where there are multiple cases to be performed for different conditions. 
// In if-else-if ladder statement, if a condition is true then the statements defined in the if block will be executed,
// otherwise if some other condition is true then the statements defined in the else-if block will be executed,
//  at the last if none of the condition is true then the statements defined in the else block will be executed. 
// There are multiple else-if blocks possible.

// if(condition1){  
// //code to be executed if condition1 is true  
// }else if(condition2){  
// //code to be executed if condition2 is true  
// }  
// else if(condition3){  
// //code to be executed if condition3 is true  
// }  
// ...  
// else{  
// //code to be executed if all the conditions are false  
// } 

// #include <stdio.h>  
// int main()  
// {  
//     int marks;   
//     printf("Enter your marks?");  
//     scanf("%d",&marks);   
//     if(marks > 85 && marks <= 100)  
//     {  
//         printf("Congrats ! you scored grade A ...");   
//     }  
//     else if (marks > 60 && marks <= 85)   
//     {  
//         printf("You scored grade B + ...");  
//     }  
//     else if (marks > 40 && marks <= 60)   
//     {  
//         printf("You scored grade B ...");  
//     }  
//     else if (marks > 30 && marks <= 40)   
//     {  
//         printf("You scored grade C ...");   
//     }  
//     else   
//     {  
//         printf("Sorry you are fail ...");   
//     }  
// } 


// C Switch Statement
// The switch statement in C is an alternate to if-else-if ladder statement
// which allows us to execute multiple operations for the different possibles values of a single variable called switch variable. 
// Here, We can define various statements in the multiple cases for the different values of a single variable.

// switch(expression){    
// case value1:    
//  //code to be executed;    
//  break;  //optional  
// case value2:    
//  //code to be executed;    
//  break;  //optional  
// ......    
    
// default:     
//  code to be executed if all cases are not matched;    
// } 

// RULES-
// 1) The switch expression must be of an integer or character type.
// 2) The case value must be an integer or character constant.
// 3) The case value can be used only inside the switch statement.
// 4) The break statement in switch case is not must.
//  It is optional. If there is no break statement found in the case,
//   all the cases will be executed present after the matched case.
//  It is known as fall through the state of C switch statement.

/*
Valid Switch	 Invalid Switch	        Valid Case	       Invalid Case
switch(x)	     switch(f)             	case 3;             case 2.5;
switch(x>y) 	 switch(x+2.5)	        case 'a';       	 case x;
switch(a+b-2)	                        case 1+2;	         case x+2;
switch(func(x,y))		                case 'x'>'y';    	case 1,2,3;
*/

// #include<stdio.h>  
// int main(){    
// int number=0;     
// printf("enter a number:");    
// scanf("%d",&number);    
// switch(number){    
// case 10:    
// printf("number is equals to 10");    
// break;    
// case 50:    
// printf("number is equal to 50");    
// break;    
// case 100:    
// printf("number is equal to 100");    
// break;    
// default:    
// printf("number is not equal to 10, 50 or 100");    
// }    
// return 0;  
// }   


// #include<stdio.h>  
// int main(){    
// int number=0;    
  
// printf("enter a number:");  
// scanf("%d",&number);  
  
// switch(number){  
// case 10:  
// printf("number is equal to 10\n");  
// case 50:  
// printf("number is equal to 50\n");  
// case 100:  
// printf("number is equal to 100\n");  
// default:  
// printf("number is not equal to 10, 50 or 100");  
// }  
// return 0;  
// }  

// #include<stdio.h>
// int main()
// {
     /* variable declaration part */
//      int r;
//      float area;
//      /* Reading part */
//      printf("Enter Radius : ");
//      scanf("%d",&r);
//      /* Processing part */
//      area=3.14*r*r;
//      /* Output part */
//      printf("\nArea of Circle = %f",area);
//      return 0;
// }

// #include <stdio.h>
//main method is used to run C application
// int main(void)
// {
// //declaring 2 variables
// int a, b;
// //declare one more variables for store result
// int output;
// //Asking user to enter integer input
// printf("Please enter any 2 integer numbers \n");
// scanf("%d\n%d",&a,&b);
// //Finding the remainder with modulus operator
// output = a % 2==0;
// //displaying output to the end user
// printf("Remainder of %d and %d is = %d", a,b,output);
// return 0;
// }