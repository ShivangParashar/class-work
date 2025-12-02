//Write a program to calculate the area of circle, rectangle and triangle using separate 
//functions.
#include<stdio.h>
void circle(){
    float r,area;
    printf("enter the radius:",r);
    scanf("%f",&r);
    area=3.14*r*r;
    printf("the area of circle will be %.2f:\n",area);
    
}
void rectangle(){
    float l,b,area;
    printf("enter the length\n");
    scanf("%f",&l);
    printf("enter the breadth\n");
    scanf("%f",&b);
    printf("the area will be %f\n",area);
}
void triangle(){
    float b,h,area;
    printf("enter the base:\n");
    scanf("%f",&b);
    printf("enter the height:\n");
    scanf("%f",&h);
    area=1/2*b*h;
    printf("the area of triangle will be %f\n",area);
    
}
int main(){
    circle();
    rectangle();
    triangle();
    return 0;
}