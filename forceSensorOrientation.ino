/* This function is used to reorient the X and Y forces with respect to the ground reference frame. 
   This function takes in the X and Y forces as well as the angles of the shoulder and elbow.
   
   Created 1/24/2019
   Script by erick nunez
*/

void sensorOrientation(float FxRaw, float FyRaw, float FzRaw, int32_t presPosElbow, int32_t presPosShoulder, float &Fx, float &Fy, float &Fz, float &presElbowAng, float &presShoulderAng){
  
  presElbowAng     = (presPosElbow - ELBOW_MIN_POS) * DEGREES_PER_COUNT * (PI/180.0);
  presShoulderAng  = (presPosShoulder) * DEGREES_PER_COUNT * (PI/180.0);
  
  Fx = FxRaw * (cos(presShoulderAng + presElbowAng + PI/2.0)) + FyRaw * (-sin(presShoulderAng + presElbowAng + PI/2.0));
  Fy = FxRaw * (sin(presShoulderAng + presElbowAng + PI/2.0)) + FyRaw * ( cos(presShoulderAng + presElbowAng + PI/2.0));
  Fz = FzRaw;
}
