# pain27
The pain27 is an open source keyboard project to make an easily usable yet completely and utterly unusable qwerty with all the letters of the english alphabet, a spacebar, and nothing else. Supports cherry mx style and smk switches, through hole leds for backlighting, rgb underglow, and only requires a pro micro for programming.

# parts required

For the keyboard:

- 1* pain27 pcb
- 1* 3mm acrylic top plate
- 2* 3mm acrylic midpieces (3* if you want a covered pro micro)
- 1* 3mm acrylic baseplate
- 11* m3 6mm tapped spacers, maximum dimension ~5.4mm
- 22* m3 5-6mm screws
- 1* pro micro, with 24 male headers (generally included)
- 27* cherry mx style or smk switches
- 27* 1n4148 diodes
- 1* set of cherry mx compatible alpha keycaps, and a 6.25 unit spacebar
- 1* cherry pcb mount spacebar stabiliser

For the backlighting:

- 27* 3mm flangeless or 2x3x4 leds
- 9* 470 ohm resistors

for the rgb underglow:

- 9* ws2128b rgb leds
- 1* 470 ohm resistor

# pcb
The pcb is by far the simplest part of the project. Grab the zip and order a pcb through your favourite pcb manufacture service. I used JLCPCB, but you probably know who you prefer. 

# case
The case is a sandwich design, with four layers of 3mm acrylic to keep costs down. The standard design has one plate layer, two midpieces and one bottom layer. 

The top layer has a cutout for a pro micro to poke through. If this makes you squeamish or you think it might be an issue (it isn't), then swap topplate.svg for topplate_(closed).svg, and add an extra midpiece to make up for the extra height that you'll need.

The mid layer is designed for 6mm tall tapped spacers with a maximum width of 5.4mm, and an m3 internal diameter. I bought mine from here: https://www.aliexpress.com/item/M3-15-Brass-Standoff-Spacer-Brass-Threaded-Spacer-hex-spacer-Brass-Standoff-Spacer-M3-L-Female/1860432002.html , but if you want to use your own, change each of the hexagon cutout sizes to the size of your spacers + 0.1mm to allow for error.

# construction
Soldering the pcb doesn't have a specific order due to the positioning of the pro micro, but you should probably solder all the surface mount and through hole components before the switches for the sake of simplicity. you should also clip, lube, and install your spacebar stabiliser before the switches, because installing it while the plate is in place is a bit of a fiddle.
