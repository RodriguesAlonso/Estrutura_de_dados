#ifndef TIME_H
#define TIME_H

class Time{    
    private:
    int hour;
    int minute;
    int second;

    public:
    Time(int hour = 0, int minute = 0, int second = 0);
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    void print() const;
    void nextMinute();
    
};
#endif