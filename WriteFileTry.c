
/*
Author : Marwan Abdelsalam

this program Writes on a file

*/

#include <stdio.h>
#include <string.h>		//for the strcat function

//declaring a pointer of type file that will point to the file
FILE *fileptr;				

//The path in which the file is to be read from or write on
#define PATH "E://ITI//C//C_Workspace//FilesHandling//CommentedCodeToUnderstand//"

//The file name to be read or write (this will be concatinated with the path)
#define FILE_NAME "ReadThisFile.txt"

void main()
{
	char file[5000]=""; //a string to hold the whole name of path of the file (path+file name)
	strcat(file,PATH);		//concatinating the path with the name in the variable (file) .. those 2 lines can be replaced by this: strcat(strcat(file,PATH),FILE_NAME); 
	strcat(file,FILE_NAME);
    fileptr = fopen(file, "w");		//creating a new file with name FILE_NAME, passing to the function fopen the path name(file) and the "w" indication of write and receive the returned address of the file in a pointer to file variable (fileptr) 
    fprintf(fileptr, "Hi my name is marwan\n");		// this function takes 2 or 3 inputs, the file pointer, the string to be copied ,and/or the thing to be copied 
	fprintf(fileptr, "and my ID is %d",1234);		// same behaviour as printf
}
