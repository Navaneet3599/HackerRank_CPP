#include <stdio.h>

void update(int *a,int *b) {
    *a = *a + *b; //First update "a" because "b" has more complex update criteria
    //Since "a" is updated, our update will become a tad more complicated
    *b = ((*a - *b) > *b)?(*a - (*b << 1)):((*b << 1) - *a);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    //We are required to update a = (a+b)
    //b = max(a, b) - min(a, b)
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}