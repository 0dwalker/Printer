# Printer Project
The main goal of this program is to simulate a program that uses multiple structs (aka objects) that communicate together to simulate a network printer.  Here is an overview of how to attack the program in a succinct efficient order.

-  Complete the struct files.  Complete the user file, the copyJob file, and the paperTray file.  Later you will make a header file for each of these to help import your code into the main program: printer.

-  Start working on the Printer File.
    -  Create the printer struct
    -  fill in the printer functions

-  Create a main method in the printer file.
    -  Create 3 users
    -  create 8 copy jobs
    -  Have the printer run all of the copy jobs.
    -  use a printf to show the user's history
    -  use printf to show the printer's history

## Instructions
There are more detailed instructions in each file to help guide you through developing the program.  Do not delete the comments until you complete a whole file.  Use them as guide posts to type underneath.

## User
The user only holds two pieces of information.  The name property, which is a string for the username.  In C we call this a char array (aka char[20]).  And the user keeps track of a variable named pageCount.  We want to know at the end of the year which employees are blowing up the printing queue, so we would like to know how many pages they reach in total.  Make that variable a long.

## CopyJob
This object is very similar to the user struct.  A copy job keeps track of 3 variables: name, pages, and content.  Name is the name of the file, let that be a character string that is 40 to be safe.  Pages represents the number of pages in the copy job, an int will suffice.  And finally content is a much longer character array.  In reality this would be like a docx/word file, but for us we will make it a large piece of text, so char[512].

## PaperTray
A printer has many different paper trays; different sizes and different quantities.  For simplicity we will assume all paper trays are the same size of paper, but they have different quantities of paper.  Our machine will have 6 trays: 2 small and 4 large.
-  Small Tray: 1000 pieces of paper.
-  Large Tray: 2000 pieces of paper.

Paper trays also keep track of 3 variables
-  name:  just give it a SHORT number 1,2,3,4,5,6
-  quantity: an int showing the current amount
-  total:  an int displaying either 1000 or 2000 depending on the tray.

## Printer
The printer struct combines all of the paper tray structs together and has built in functions which run the copy jobs and update the machine.  To make the program more efficient, rather than passing the information around, we will use pointers as inputs and output to the printer struct.

#### Printer Struct definition
-  name: some char array with 32 characters
-  trays: an int array with length 6.  This array stores the pointers (aka int* ) to each of the paper trays.
-  userDB: an integer pointer array which stores the int* of each user of the printer.  For simplicity we will only create 3 users in the future.
-  copyJobCount:  a number that keeps track of the total number of copy jobs sent to the printer.

#### Printer functions
These functions will take multiple inputs - including the printer - and change the state of the trays, the users, and the printer.
