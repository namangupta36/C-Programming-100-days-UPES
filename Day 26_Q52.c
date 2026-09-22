//Write a program to print the following pattern:
//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>
int main () {
int i, j;
for (i = 1; i <= 4; i++) {
    int stars;
    if (i == 1)
    stars = 4;
    else if (i == 2)
    stars = 5;
    else if (i == 3)
    stars = 3;
    else
    stars = 1;
    for (j = 1; j <= stars; j++) {
        printf("*\n");
    }
    if (i != 4)
    printf("\n");
}
return 0;
}