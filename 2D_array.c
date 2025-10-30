/*
Name:methoJAMES KITHUKA 
reg no:CT101/G/26564/25
Date:30 October 2025
Description: c program for 2D array
*/
#include<stdio.h>
#include <stdlib.h>


int main() {
    int occupancy[5][10];
    int occupied, vacant;

    printf("=== Room Occupancy (One Branch) ===\n");

    for(int floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;

        for(int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 1 = occupied, 0 = vacant

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}