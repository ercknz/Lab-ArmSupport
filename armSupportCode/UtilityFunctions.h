/* Utility functions used with the arm support robot.

   Created 10/28/2020
   by Erick Nunez
*/

#ifndef UTILITY_FUNCTIONS_H
#define UTILITY_FUNCTIONS_H

int16_t bytesToCounts(byte hByte, byte lByte);

void loggingFunc(unsigned long totalTime, ForceSensor::ForceSensor *OptoSensor, AdmittanceModel::AdmittanceModel *Model, RobotControl::RobotControl *Robot, unsigned long loopTime);

#endif // UTILITY_FUNCTIONS_H
