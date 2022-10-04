include <stdio.h>
int main(){
    int num, sum = 0;
    printf("Enter the maximum value: ");
    scanf("%d", &num);
    printf("Odd Numbers Between 0 To %d are: \n", num);
    for (int i = 1; i <= num; i++ ){
        if (i % 2 != 0){
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("The Sum of Odd Numbers From 0 To %d is %d.", num, sum);
    return 0;
}

Output:
Enter the maximum value: 9
Odd Numbers Between 0 To 9 are: 
1
3
5
7
9
The Sum of Odd Numbers From 0 To 9 is 25.
