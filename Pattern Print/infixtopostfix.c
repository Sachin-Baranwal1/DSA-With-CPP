#include <stdio.h>
#include <string.h>
#include <ctype.h>

int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' ||  c == '*' ||  c == '%')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else 
        return -1;  
}

char associativity(char c) {
    if (c == '^')
        return 'R';// Right associative
        else   
    return 'L';      // Left associative
}

void intopost(char s[]) {
    char result[500];
    int index = 0;
    char stack[100];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (isalnum(c)) {  
            result[index++] = c;
        } else if (c == '(') {
            stack[++top] = c;
        } else if (c == ')') {
            while (top >= 0 && stack[top] != '(') {
                result[index++] = stack[top--];
            }
            top--; 
        } else {
          
            while (top >= 0 && prec(c) <= prec(stack[top]) && associativity(c) == 'L') {
                result[index++] = stack[top--];
            }
            stack[++top] = c;  
        }
    }

    
    while (top >= 0) {
        result[index++] = stack[top--];
    }

    result[index] = '\0';  
    puts(result);         
}

int main() {
    char string[] = "a+b*(c^d-e)^f";  
    intopost(string);
    return 0;
}