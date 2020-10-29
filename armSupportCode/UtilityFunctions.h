/* Utility functions used with the arm support robot.

   Created 10/28/2020
   by Erick Nunez
*/

#ifndef UTILITY_FUNCTIONS_H
#define UTILITY_FUNCTIONS_H

int16_t bytesToCounts(byte hByte, byte lByte);

void loggingFunc(unsigned long &totalTime, forceStruct &rawF, forceStruct &F, jointSpace &pres, modelSpace &curr, modelSpace &init, modelSpace &goal, jointSpace &Q, unsigned long &goalReturn, unsigned long &loopTime);

#endif // UTILITY_FUNCTIONS_H