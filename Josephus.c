//Code to solve Josephus problem in a simple way.
//Using a proven mathematical formular

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_power(int);


int main()
{
    int n, result;
    printf("Enter total number of slaves: ");
    scanf("%d, ", &n); 
    int power = get_power(n);
    double temp_num = (double)n - pow(2.0, (double)power);
    survivor = 2 * (int)temp_num + 1; // == 2 * (n - 2^a + 1)
    printf("%d will survive\n", survivor);

}
//function to return the highest power of two available
//in the given number. (a)
int get_power(int a)
{
    int b;
    int power = 0;
    b = a;

    while(b >= 2)
    {
       b /= 2;
       power++;
    }
    return power;
}