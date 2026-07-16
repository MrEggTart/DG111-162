#include <stdio.h>
int main()
{
    int time;
    printf("Enter time in seconds: ");
    scanf("%d", &time);
    int hours = time / 3600;
    printf("Hours: %d\n", hours);
    int minutes = (time % 3600) / 60;
    printf("Minutes: %d\n", minutes);
    int seconds = time % 60;
    printf("Seconds: %d\n", seconds);
    printf("Time: %2d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}