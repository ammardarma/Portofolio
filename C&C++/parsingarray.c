#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addition(int *num1, int *num2);

int main() {
int mynumberArray[6] = {1,1,1,1,1,1};
int sum = totalValueofArray(mynumberArray, 6);
printf("total: %d\n", sum);
return 0;

}

int totalValueofArray(int numberArray[], int size) {
    int total = 0;
    for (int i=0; i<size; i++) {
        total+=numberArray[i];
    }
    return total;
}
