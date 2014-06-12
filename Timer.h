#pragma once

struct Timer
{
    struct Owner
    {
        virtual void timerExpired ( Timer *timer ) {}
    };

private:

    Owner& owner;
    double expiry;

public:

    Timer ( Owner& owner );
    ~Timer();

    void start ( double delay );

    friend class EventManager;
};
