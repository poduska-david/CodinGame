/**
David Poduska
30 June 2017
**/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    scanf("%d", &L);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[257];
    fgets(T, 257, stdin);
    char letters[L * 27][H];
    //final art string with total length as the number of characters needed with newlines at end of each row
    char ASCIIart[L * (strlen(T) - 1) * H];
    char tempRow[(strlen(T) - 1) * L];
    
    for (int h = 0; h < H; h++) {
        char ROW[1025];
        fgets(ROW, 1025, stdin);
        
        for(int w = 0; w < strlen(ROW) - 1; w++){
                letters[w][h] = ROW[w];
                tempRow[w] = ROW[w];
        } 
        //fprintf(stderr, tempRow + '\n');
    }
    /*
    char practice[(L * H) + H];
    char pracPos = 0;
    //FOR PRACTICE PRINT A
    for(int h = 0; h < H; h++){
        for(int w = L * 4; w < L * 5; w++){
            practice[pracPos] = letters[w][h];
            pracPos++;
        }
        practice[pracPos] = '\n';
        pracPos++;
    }
    fprintf(stderr, practice);
    
    */
    
    fprintf(stderr, "%d\n", sizeof(ASCIIart));
    
    
    
        int artPos = 0;
        int tempPos = 0;
        //print out each row of message
        for(int row = 0; row < H; row++){
            //iterate over each letter in message
            for(int let = 0; let < strlen(T) - 1; let++){
                char c = T[let];
                //if character is a lette conver to uppercase and convert to A as 0
                if(isalpha(c)){
                    c = toupper(c) - 65;
                //if not a letter conver to '?' and set to the 26th character
                }else{
                    c = 26;
                }
                //print row part of letter
                for(int i = L * c; i < L * (c + 1); i++){
                   ASCIIart[artPos] = letters[i][row];
                   tempRow[tempPos] = letters[i][row];
                   tempPos++;
                   artPos++;
                }     
                
            }
            tempPos = 0;
            //fprintf(stderr, "%s\n", tempRow);
            ASCIIart[artPos] = '\n';
            artPos++;
            
        }
        //fprintf(stderr, "%s", ASCIIart);

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%s", ASCIIart);

    return 0;
}
