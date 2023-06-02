#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp {

    public:

        timeStamp();
        timeStamp(double sec, double min, double hr);

        void setSec(double sec);
        void setMin(double min);
        void setHr(double hr);

        double getSec();
        double getMin();
        double getHr();

        bool operator != (timeStamp);
        bool operator > (timeStamp);
        bool operator < (timeStamp);

        void print();

    private:

        double seconds;
        double minutes;
        double hours;

};

#endif