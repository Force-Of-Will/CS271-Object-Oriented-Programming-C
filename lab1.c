//benjamin longwell
//object oriented programming
//given 4 test scores, until a sentinel is entered, calculates the average, and gives a letter //grade for the average
#include <stdio.h>
int main (void) {
    int s1, s2, s3, s4, grade, total;
    float average;
    //initialization
    s1 = s2 = s3 = s4 = total = 0;
    //
    while(total != -1){
        s1 = s2 = s3 = s4 = total = 0;
     for(int i = 1; i <= 4; i++){
         
         printf("\nEnter grade number %d. Enter -1 as the first grade, and zeroes for all consecutive grades to exit.\n", i);
         
         scanf("%d", &grade);
         
         if(i == 1) s1 = grade;
         else if (i == 2) s2 = grade;
         else if (i == 3) s3 = grade;
         else if (i == 4) s4 = grade;
         
         printf("You entered %d\n", grade);
         
         total = total + grade;
         
         average = 1.0 * total / 4;         
         
         
     }//of for
     
     if(total == -1) break;
     printf("\n");
     printf("Exam Scores:\t%d\t%d\t%d\t%d\n", s1, s2, s3, s4);
     printf("Average:\t%.2f \n", average);
     
     if(average >= 90.0) printf("Letter Grade:\tA\n");
     else if(average >= 90.0) printf("Letter Grade:\tB\n");
     else if(average >= 90.0) printf("Letter Grade:\tC\n");
     else if(average >= 90.0) printf("Letter Grade:\tD\n");
     else printf("Letter Grade:\tF\n");
        
    }//of while
}//of main
