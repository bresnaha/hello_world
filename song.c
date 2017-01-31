#include <stdio.h>
#include <eSpeakPackage.h>

#define E3 165
#define F3s 185
#define G3s 208
#define A3 220 
#define B3 247 
#define C4s 277
#define D4 294
#define E4 330
#define F4s 370
#define G4s 415
#define A4 440 
#define B4 494 
#define C5s 554 
#define D5 587

#define 16_note 0.125
#define 8_note 0.25
#define 4_note 0.5
#define half_note 1.0
#define whole_note 2.0

void verse1(void) {

}

void verse2(void) {

}

void chorus(void) {

}

void playSong(void){
  verse1();
  chorus();
  verse2();
  chorus();
}

int main(void) {

  eSpeakConnect();
  espeakSetGender("female");
  eSpeakTalk("Sweet Caroline by Neil Diamond");
  eSpeakDisconnect();

  playSong();
  
  return 0;
}
