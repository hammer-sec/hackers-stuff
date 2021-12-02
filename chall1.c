#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
 
bool checker(bool a_stat, bool b_stat);
const char getFlag(bool flag_prompt);
 
int main(){
 
    int val_a; int *ptr_a;
    int val_b; int *ptr_b;
 
    bool a_stat = 0; bool b_stat = 0;
    
    bool flag_prompt;
    int num;
    char term;
 
    printf("Enter two integer values! If you get lucky, you might get a flag!\n");
    printf("Enter value A: \n");
    
    if(scanf("%d%c", &num, &term) != 2 || term != '\n') {
        printf("Epic fail.\n");
        return 1;
    }
    else {
        printf("Valid integer followed by enter key detected.\n");
        val_a = num;
    }
    
    printf("Enter value B: \n");
    if(scanf("%d%c", &num, &term) != 2 || term != '\n') {
        printf("Epic fail.\n");
        return 1;
    }
    else {
        printf("Valid integer followed by enter key detected.\n");
        val_b = num;
    }
     
    if (val_a % 2 == 0) {
        a_stat = true;
    }
    else {
        a_stat = false;
    }
    
    if (val_b % 7 == 0) {
        b_stat = true;
    }
    else {
        b_stat = false;
    }
        
    flag_prompt = checker(a_stat, b_stat);
    getFlag(flag_prompt);
    
        
return 0;
}
 
bool checker(bool a_stat, bool b_stat){
    bool f_result;
        
    if (a_stat == true && b_stat == true) {
        f_result = true;
    }
    else {
        f_result = false;
    }
    return f_result;
}
 
const char getFlag(bool flag_prompt) {
    if (flag_prompt == true) {
    
        printf("Easy challenge done!\n Here's a flag:\n");
        printf("DMUH{");
        printf("TH");
        printf("iS_W");
        printf("aS_t");
        printf("He_E");
        printf("a5Y");
        printf("_0N");
        printf("e}\n");       
    }
    else {
        printf("No flag for you. Try some different values!\n");
    }
    
    return flag_prompt;
}
