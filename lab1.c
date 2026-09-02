#include <stdio.h>

int main() {
int n;
printf("Enter the no of elements :");
scanf("%d",n);
int a[n];
for (int i =0 ;i<=n;i++){
    scanf("%d",&a[i])
}
for (int i =0 ;i<=n;i++){
    printf("%d",a[i]);
}
int n,key;
int found = 0;
printf("enter the key to search :");
scanf("%d",&key);
for(int i = 1;i<=n;i++){
    if(a[i] == key){
        printf("The key found at index :%d",i);
        found = 1;
        break;
    }
    else {
        printf("not found");
    }
}
int max = a[0];
for(int i = 1;i<=n;i++){
    if(a[i] > max){
        max = a[i];
    }
}
int min = a[0];
for(int i = 1;i<=n;i++){
    if(a[i] < min){
        min = a[i];
    }
}
int sum = 0;
for(int i = 1;i<=n;i++){
    sum+=a[i];
}
int n,element;
printf("Enter the no of elements :");
scanf("%d",n);
int a[n+1];
for (int i = 0 ;i<=n;i++){
    scanf("%d",&a[i])
}
for(int i = n ;i >0;i--){
    a[i+1] = a[i];
}
printf("enter the element :");
scanf("%d",&element);
a[0] = element;
n++;
int n,element;
printf("Enter the no of elements :");
scanf("%d",n);
int a[n+1];
for (int i = 0 ;i<=n;i++){
    scanf("%d",&a[i])
}
for(int i = 0 ;i > n;i++){
    a[i] = a[i+1];
}
printf("enter the element :");
scanf("%d",&element);
a[n] = element;
n++;

int n;
printf("Enter the no of elements :");
scanf("%d",n);
int a[n];
for (int i = 0 ;i<=n;i++){
    scanf("%d",&a[i])
}
for(int i = 0 ;i > n-1;i++){
    a[i] = a[i+1];
}
n--;
int n;
printf("Enter the no of elements :");
scanf("%d",n);
int a[n];
for (int i = 0 ;i<=n;i++){
    scanf("%d",&a[i])
}

n--;
return 0;
}

