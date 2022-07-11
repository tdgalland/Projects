#include <stdio.h>

int main(){


int punishment;
int lines;

printf("Enter the number of lines for the punishment:\n");
scanf("%d", &punishment);
	if(punishment < 0)
{
	printf("You entered an incorrect value for the number of lines!\n");
	return 0;
}


printf("Enter the line for which we want to make a typo:\n");

scanf("%d", &lines);

if(lines < 0)
{
	printf("You entered an incorrect value for the line typo!\n");
	return 0;
}

int i = 1;
while(i <= punishment){
  
  if (i == lines){ 
    printf("C programming language is the bet!");
  } else {
    printf("C programming language is the best!");
  }
  ++i; 
} 

}

