#include <stdio.h>
int main(){
    int n;
    printf("Enter a number of subject:");
    scanf("%d",&n);
    int a[n];
    int total=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        total+=a[i];
    }
    printf("total marks = %d\n",total);

    int maxmarks = n*100;

    int percentage = (total*100)/maxmarks;

    printf("total percentage = %d%%\n",percentage); 
    
    if(percentage>90) printf("Grade = A1");
    else if(percentage>80 && percentage<=90) printf("Grade = A2");
    else if(percentage>70 && percentage<=80) printf("Grade = B1");
    else if(percentage>60 && percentage<=70) printf("Grade = B2");
    else if(percentage>50 && percentage<=60) printf("Grade = C1");
    else if(percentage>40 && percentage<=50) printf("Grade = C2");
    else printf("Fail");

    return 0;
}