#include <stdio.h>
int main(void){
    FILE *fPtr;
    
    int number, num1, num2, num3, num4, num5, num6,  num7;
    
    if((fPtr = fopen("word.txt", "w")) ==NULL){
    
      puts("The file \"word.txt\" cannot be found or opened.");    
      
    }//end if
    
    else{
    
      printf("Enter the phone number (7 digits.)\n");
      scanf("%d", &number);
      printf("%d\n", number);
    
      num1 = (number/1000000)%10;
      num2 = (number/100000)%10;
      num3 = (number/10000)%10;
      num4 = (number/1000)%10;
      num5 = (number/100)%10;
      num6 = (number/10)%10;
      num7 = number%10;
    
    
      char *phoneNums[10] = {"   ", "   ", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY"}; 
    
    /*for(int i = 0; i < 3; i++){
        printf("%c", phoneNums[num1][i]);
    }//of for TEST*/
    
      for (int i = 0; i <3; i++){
        
         for (int j = 0; j < 3; j++){
            
            for(int k = 0; k < 3; k++){
                
               for(int l = 0; l < 3; l++){
                    
                  for(int m = 0; m < 3; m++){
                        
                     for(int n = 0; n < 3; n++){
                            
                        for(int o = 0; o < 3; o++){
                             fprintf(fPtr, "%c", phoneNums[num1][i]);
                             fprintf(fPtr, "%c", phoneNums[num2][j]);
                             fprintf(fPtr, "%c", phoneNums[num3][j]);
                             fprintf(fPtr, "%c", phoneNums[num4][l]);
                             fprintf(fPtr, "%c", phoneNums[num5][m]);
                             fprintf(fPtr, "%c", phoneNums[num6][n]);
                             fprintf(fPtr, "%c\n", phoneNums[num7][o]);
                               
                           }//of for o
                        }//of for n
                     }//of for m                    
                  }//of for l
               }//of for k
            }//of for j 
         }//of for i
      }//of else
    
}//end main