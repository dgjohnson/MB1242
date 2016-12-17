/*
   showdistance.ino show distances read by MaxBotix MB1242 sonar

   Copyright (C) 2016 Simon D. Levy and Matt Lubas

   This file is part of MB1242_Arduino.

   MB1242_Arduino is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   MB1242_Arduino is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with MB1242_Arduino.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <Wire.h>
#include <MB1242.h>

MB1242 sonar;

void setup()
{
    // Start I^2C
    Wire.begin();

    // Start sonar
    sonar.begin();

    // Start serial
    Serial.begin(38400);
    while (!Serial);   // Leonardo: wait for serial monitor
}


void loop()
{
    Serial.print(sonar.getDistance());
    Serial.println(" cm");
}
