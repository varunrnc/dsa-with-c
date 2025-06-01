// Fine the time complexity of the func function in the program from program2.c as follows:

#include <stdio.h>

void func(int n)
{
    int sum = 0;
    int product = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d, %d\n", i, j);
        }
    }
}

int main()
{
    int num = 5;
    func(num);

    return 0;
}