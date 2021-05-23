/*
Author : Marwan Abdelsalam

this program reads from a file (first strings , second numbers)

*/

#include <stdio.h>
#include <string.h>		//for the strcat function

//declaring a pointer of type file that will point to the file
FILE *fileptr;				

//The path in which the file is to be read from or write on
#define PATH "E://ITI//C//C_Workspace//FilesHandling//CommentedCodeToUnderstand//"

//The file name to be read or write (this will be concatinated with the path)
#define FILE_NAME "ReadThisFile.txt"

/*
//first: read a text from the file consists of more than one word

void main()
{
	int i=0;								//index for the loops
	char name[4][100];						//array of strings to hold the text each word in an element(each word in a separate string)
	char file[5000]="";						//a string to hold the whole name of path of the file (path+file name)
	strcat(file,PATH);						//concatinating the path with the name in the variable (file) .. those 2 lines can be replaced by this: strcat(strcat(file,PATH),FILE_NAME); 
	strcat(file,FILE_NAME);					
	fileptr =fopen(file,"r");				//opening the file, passing to the function fopen the path name(file) and the "r" indication of read and receive the returned address of the file in a pointer to file variable (fileptr) 
    //this if else statement to check whether the file is read successfuly or not
	if(fileptr == NULL)						
    {
        printf("Error!\n");
    }
    else
        printf("Success!\n");
	
	//this while checks if the file has no more text or not it will stop looping if it reads everything
	//it can be like this  while ((!feof(fileptr))&&i<3) if i want to read a limited words
	while ((!feof(fileptr)))   
	{
		fscanf(fileptr,"%s",name[i]);	//this function takes 3 parameters: the file pointer, the type of the thing read from the file, the address of the variable to save into it										
										//here we put %s because we read a word (string), and the address of the string in the array of strings in each iteration 
		i++;
	}
		
	//printing the read variable from the file
	for (i=0;i<4;i++)
		printf("%s ",name[i]);
	
	    fclose(fileptr);

}
*/


//second: read a numbers from the file consists of more than one number

void main()
{
	int i=0;				//index for the loops
	int number[4];			//array of integers to hold the numbers in the file separated by space or new line
	char file[5000]="";		//a string to hold the whole name of path of the file (path+file name)
	strcat(file,PATH);		//concatinating the path with the name in the variable (file) .. those 2 lines can be replaced by this: strcat(strcat(file,PATH),FILE_NAME); 
	strcat(file,FILE_NAME);
	fileptr =fopen(file,"r");	//opening the file, passing to the function fopen the path name(file) and the "r" indication of read and receive the returned address of the file in a pointer to file variable (fileptr) 
		
	//this if else statement to check whether the file is read successfuly or not
	if(fileptr == NULL)						
    {
        printf("Error!\n");
    }
    else
        printf("Success!\n");
	
	//this while checks if the file has no more numbers or not it will stop looping if it reads everything
	//it can be like this  while ((!feof(fileptr))&&i<3) if i want to read a limited numbers(3 numbers for example)
	while ((!feof(fileptr)))   
	{
		fscanf(fileptr,"%d",&number[i]);	//this function takes 3 parameters: the file pointer, the type of the thing read from the file, the address of the variable to save into it										
											//here we put %d because we read a number (integer), and the address of the element in the array of integers in each iteration  
		i++;
	}
	
	//printing the read variable from the file
	for (i=0;i<4;i++)
		printf("%d ",number[i]);
	
	fclose(fileptr);

}
