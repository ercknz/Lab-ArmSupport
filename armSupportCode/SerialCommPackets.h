/* This establishes the packets for communication to and from the robotic arm support via the serial port.

   Created 3/1/2021
   by erick nunez
*/

#ifndef SERIAL_PACKETS_H
#define SERIAL_PACKETS_H

#include <Arduino.h>

class SerialPackets {
  public:
         SerialPackets(HardwareSerial *ptrSer, const int baudrate);
    void ReadSerialPackets();
    void WriteSerialPackets();
    
  private:
    const int       _BAUDRATE;  
    HardwareSerial  *SerialPort_M;
    int16_t         _SAMPLECOUNTER;
    int16_t         _TX_PKT_LEN;
    int16_t         _RX_PKT_LEN;
    int16_t
    
    bool _RX_PRESVEL = false;
    bool _RX_GOALVEL = false;
    bool _RX_PRESVEL = false;
    bool _RX_GOALVEL = false;
};

#endif // SERIAL_PACKETS_H
