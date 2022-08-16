#include <stdio.h>

typedef struct date
{
    int year;
    int date;
    int month;
} date;

typedef struct time
{
    int sec;
    int minute;
    int hour;
}time;

void display(date d1, time t1, date d2, time t2)
{
    printf("Timestamp has a range of '%d-%d-%d %d:%d:%d' UTC to '%d-%d-%d %d:%d:%d' UTC.", d1.year, d1.date, d1.month, t1.sec, t1.minute, t1.hour, d2.year, d2.date, d2.month, t2.sec, t2.minute, t2.hour);
}
int main()
{
    date d1 = {2020, 1, 12};
    date d2 = {2121, 3, 8};
    time t1 = {0, 0, 1};
    time t2 = {13, 45, 15};

    display(d1, t1, d2, t2);

    return 0;
}