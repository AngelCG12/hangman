#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>
char game( int argc, char** argv){
  
int number = rand() % argc; 

int longi = strlen(argv[number]);


char word[20];
char word2[20];
 strcpy(word,argv[number]);

int tries=0;
int i=1;
int j=1;

while(tries<6){ 
  
  tries++;
      printf("put a letter \n");
      char letter;
        scanf(" %c", &letter);

      for(j=0;j<strlen(argv[number]);j++){
         
          if(letter==word[j]){
            printf("You guessed the word %c \n",word[j]);
           word2[j]=letter;
        printf("%c \n",word2[j]);
         
          }
      }
      
       if( !memcmp( word2, word, sizeof( word2 ))){
     printf( "you guessed the word" ); 
      printf( "the word is %s",word ); 
     break;}
     
   }
  if(tries>6) { //cuando el intento llegue a 5 usted a perdido la partida
     printf( "you lost" );
}

}
int main(int  argc, char** argv){
game(argc,argv);
}
