// Online C compiler to run C program online
#include <stdio.h>
int main() {
    // Write C code here
    char a[100];
    scanf("%s",a);
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='h'){
            i++;
            break;
        }
        
    }
    if(a[i]=='\0') {printf("NO"); return 0;}
    for(i;a[i]!='\0';i++){
        if(a[i]=='e'){
            i++;
            break;
        }
        
    }
    if(a[i]=='\0') {printf("NO"); return 0;}
    for(i;a[i]!='\0';i++){
        if(a[i]=='l'){
            i++;
            break;
        }
        
    }
    if(a[i]=='\0') {printf("NO"); return 0;}
    for(i;a[i]!='\0';i++){
        if(a[i]=='l'){
            i++;
            break;
        }
        
    }
    if(a[i]=='\0') {printf("NO"); return 0;}
    for(i;a[i]!='\0';i++){
        if(a[i]=='o'){
            i++;
            printf("YES");
            return 0;
        }
        
    }
    
        
    if(a[i]=='\0') {printf("NO"); return 0;}
    
    

}