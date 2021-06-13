#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/*
could access gpio pin through sysfs interface
    recall that on linux, filesystems and accessories are the same 
#include <sys/stat.h>
#include <sys/types.h>
https://www.ics.com/blog/how-control-gpio-hardware-c-or-c


could (should?) access pins through wiringPi.h library: http://wiringpi.com/ --> project looks deprecated per 2019. 
We are using an original 2013 rPi. If wiringPi doesn't work out of the box, we can roll back to an earlier version of Raspbian.

*/

struct Joystick {
    // need to define gpio interface here

    // memory address of sensor:
    void *sensorAddress;
    // memory address of motor:
    void *motorAddress;
};

struct SeizeSensor {
    // memory address of sensor:
    void *sensorAddress;
    // store whether this sensor has been tripped
    bool active = 0;
};

/*
components:
    actuator system
        active: always

        leftMotor
        rightMotor



    round sensors (LED holes)
        active: within a round

    threads:
        if they break: 
            [] make failsafe
*/



// apart from the actuator, there are the holes
    // 


// threads handle the UI

// joystick threads
int *joystick(struct Joystick joystick, struct SeizeSensor seizeSensor){
    bool running = 1;
    while (running == 1)
    {
        // if input on gpio of seizeSensor
        if( seizeSensor.memoryAddress )
        {
            seizeSensor.active = 1
            // access the global variable that will be protected by mutex 
        }
        // if input on gpio of joyStick and seizeSensor has not been tripped
        if( joystick.sensorAddress && seizeSensor.active == 0 )
        {
            // move motor
        }

    }
    /*
    needs:
        which sensor am I listening to
        which motor am I controlling
    */
}

// seize threads


// need one thread for every sensor
    // every every thread changes data in central database

int createThreads ()
{
    // two joystick threads
        // joy
    // two seize threads
}


int roundLoop()
{
    bool roundOver = 0;
    while( roundOver == 0 )
    {


    }
}

// game loop accesses central database to determine what should happen

int gameLoop()
{
    startGame();
    // there are 9 rounds
    bool gameOver = 0;
    while( gameOver == 0 )
    {


    }
}

// this is where all of my unknowns pile up, aka the hand wavy "I don't know enough details to finish" part 
int initialize()
{
    // get and set memory addresses for motors and sensors
    struct Joystick LJoystick;
    struct Joystick RJoystick;
    struct SeizeSensor LSeizeSensor;
    struct SeizeSensor RSeizeSensor;
    

}

int main()
{
    initialize();
    gameLoop();

}