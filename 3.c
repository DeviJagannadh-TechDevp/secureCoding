#include <stdio.h>
int main () {
    sort int sub_marks[10]; //each subject marks is less than 10
	sort int sum=0;
    int i;
    printf("Enter the 10 subjects marks");
    for(i=0;i<10;i++)
         scanf("%d",&roll_numbers[i]);
    	 
    for(i=0;i<10;i++)
	            sum=sub_marks[i]+sum;
				
	printf("sum of all the subject marks %d",sum);			
		
    return 0;
}

