//  Dissanayake D.M.I.H
//  CS WE03

//  Question 3


#include <stdio.h>
#include<string.h>

int checkLetter(char str1[], int s);
void convertStoT(char str2[], char p[]);


//function 01
int checkLetter(char str1[], int s) {

    if(strlen(str1) != s)      // check len with entered charaters
        return -1;

   for(int k = 0; k < strlen(str1); k++) {    //check lowercase
        if(str1[k] < 'a' || str1[k] > 'z')
            return 0;          
    }
    return 1;
} 

//function 2
void convertStoT(char str2[], char p[]) {
    int c = 0;
    char w[0];
    int length = strlen(str2);
    
for(int i=0; i < length;){
   if(str2[i] != p[i]) {
      w[0] = str2[0];

      for(int j= 0; j < length; j++) {
          str2[j] = str2[j+1];

          if(j == length-1) {
              str2[j] = w[0];
          }
               
      }
      c++;
      i=0;
     }else{
        i++;  
      if(c == length){
          printf("Cannot Convert S into T\n");
          return;
      }
    }
  }
 
   printf("\n%d", c);
  
}

//Main Programme
int main(void) {

  int i;
  
      
      printf("Enter the length :- ");
      scanf("%d", &i);

      if(i>=1 && i<=100) {              //set condition for input of legnth
          
      }
      else {
          printf("!!!\nInvalid Input\nEnter between 1 & 100\n\n");
      }

  char T[i],S[i];
  int y=0;
  
    for(y=0; y != 1;){
      printf("Enter 1st string:- ");
  	  scanf("%s",S);

      y = checkLetter(S, i);   //function call

       if(y == 1)
            break;
        else {
            printf("!!!\nInvalid\nString you entered should be %d characters and only lowercase\n", i);
        }
    }

 y=0;
     for(y=0; y != 1;){
       printf("Enter 2nd string:- ");
       scanf("%s", T);
        
        y = checkLetter(T, i);     //function call

        if(y == 1)
            break;
        else {
            printf("!!!\nInvalid\nString should be %d charactors and only lowercase\n", i);
        }
     }

    convertStoT(S, T);  // conversion

  return 0;
} 