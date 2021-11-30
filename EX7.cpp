/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Robert McQueen
 */
#include "std_lib_facilities.h"
int main(){
int a = 2;
int b = -6;
int c = 2;

int test = 4*a*c;
if (((b*b) - test) < 0){
    cout<<"Function not computable!"<<endl;
}else if(((b*b) - test) >=0 ){

double positive = (-1 * b) + (sqrt((b*b)- test))/(2*a);

double negative = (-1 * b) - (sqrt((b*b) - test))/(2*a);
cout<<"Answer "<<positive<<","<<negative<<endl;
}
return 0;
}