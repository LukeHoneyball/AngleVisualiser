/*

-----Angle Visualiser-----
-----By Luke Honeyball----
--------4/29/2024---------
*/
#include <stdio.h>
#include <windows.h>
#include <math.h> //imports

#define PI 3.1415926535897932384626 //define pi
#define width 50 //you can set your own width and height of the output here
#define height 50


void main()
{  
   int half_width = width/2;
   int half_height = height / 2;
   int e = 0;
   int value[width][height]; //define variables

   for(int x = 0; x< width; x++){
    for(int y = 0; y<height; y++){
        value[x][y] = 0;
    }
   }// set 2D matrix map to 0

   printf("Enter an angle from 0 - 360: ");
   scanf("%d",&e); //Ask for input

   double in_radians = e * (PI/180);
   
   for(int f = 0; f< e; f++){
        in_radians = f * (PI/180);
    
        for(int v = 0; v < (half_width/2); v++){

            int x_coord = half_width+(v * sin(in_radians));
            int y_coord = half_height+( v *cos(in_radians)); //using sin() and cos() functions
            value[width -x_coord][y_coord] = 1;
        }
   }
   //perform mathematics
   in_radians = 0;
   
   for(int x = 0; x< width; x++){
    for(int y = 0; y<height; y++){
        if(value[x][y] == 1){
            printf("X "); //X is part of the angle
        }else {
            printf(". "); //blank space
        }
        
    } //print the output
    
    printf("\n");
   }
   system("PAUSE"); //finish the program with a PAUSE waiting for any key to be pressed
}  //main method