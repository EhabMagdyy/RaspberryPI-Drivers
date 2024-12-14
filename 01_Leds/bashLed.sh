#!/bin/bash

# Function to clean up GPIO before exiting
cleanup() {
    echo "Reseting GPIO and exiting..."
    gpioset --mode=exit gpiochip0 22=0
    exit 0
}

# Trap SIGINT (Ctrl+C) and call the cleanup function
trap cleanup SIGINT

gpioset --mode=exit gpiochip0 22=1

# Toggle GPIO22
while true; do
    gpioset --mode=exit gpiochip0 22=1
    sleep 1
    gpioset --mode=exit gpiochip0 22=0
    sleep 1
done
