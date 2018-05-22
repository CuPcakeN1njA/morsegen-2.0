# morsegen-2.0
Simple morse code generator, takes your input and converts it to a morse code stream and emits it with a laser.

## Requirements
- Arduino with GPIO (This project should work for any Arduino with GPIO)
- [Arduino Laser Module](https://www.aliexpress.com/item/20pcs-lot-KEYES-Laser-module-for-arduino-with-demo-code-Free-shipping/32281267058.html?src=google&albslr=221466033&isdl=y&aff_short_key=UneMJZVf&source=%7Bifdyn:dyn%7D%7Bifpla:pla%7D%7Bifdbm:DBM&albch=DID%7D&src=google&albch=shopping&acnt=494-037-6276&isdl=y&albcp=658432961&albag=33762888219&slnk=&trgt=61865531738&plac=&crea=en32281267058&netw=g&device=c&mtctp=&aff_platform=google&gclid=EAIaIQobChMIp7eMsLaZ2wIVVZ0bCh00wgHQEAQYASABEgLuz_D_BwE&gclsrc=aw.ds)
- Jumper cables

## Setup
1. Connect Ground marked by `-` on the Laser module to `GND` on your Arduino.
2. Connect `S` on your Laser module to `GPIO pin 2`. (This can be changed by modifying the code to the pin you want to use)
3. Flash your Arduino with the morsegen.ino file

## Usage
When you give the Arduino input through the Serial Monitor the Arduino will convert this and then begin to emit a laser beam with dots and dashes in Morse code.

- Each unit lasts 0.5 seconds
- A dot is one unit
- A dash is three units
- A space between charcaters is three units
- A space between words is seven Units
- There will be one unit between each dot and dash
