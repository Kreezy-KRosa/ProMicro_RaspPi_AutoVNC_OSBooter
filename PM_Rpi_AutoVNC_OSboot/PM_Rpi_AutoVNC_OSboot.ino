// Pro-Micro Raspberry Pi Auto VNC and OS Starter
// by Kreezy(KRosa) 2/19/2018

// Upload to a Pro Micro, plug into Rasp Pi, power on the Pi, connect using VNC or plug into monitor, OS will be loaded already

void setup() {
  
  Keyboard.begin();                       // start HID keyboard functionality
  delay(20000);                            // waits 20 seconds for Rasp Pi to boot up
  Keyboard.print("vncserver");            // starts a VNC server for remote access
  delay(100);                              // delay for stability
  Keyboard.write(KEY_RETURN);             // hits enter key
  delay(2000);                            // 2 second delay
  Keyboard.print("startx");               // starts the OS
  delay(100);                             // delay for stablity
  Keyboard.write(KEY_RETURN);             // hits enter key
  delay(10);                              // delay for stablity
  Keyboard.end();                         // ends HID keyboard funcionality
}

void loop() {
  // Do nothing until plugged in again
}
