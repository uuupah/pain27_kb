# pain27
The pain27 is an open source keyboard project to make an easily usable, yet completely and utterly unusable qwerty keyboard with all the letters of the english alphabet, a spacebar, and nothing else. Supports cherry mx style and smk switches, through hole leds for backlighting, rgb underglow, and only requires a pro micro for programming.

![titlecard](https://github.com/uuupah/pain27/blob/master/titlecard.jpg?raw=true)

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
- rubber feet (not required, but recommended)

For the backlighting:

- 27* 3mm flangeless or 2x3x4 leds
- 9* 470 ohm resistors

for the rgb underglow:

- 9* ws2128b rgb leds
- 1* 470 ohm resistor

# pcb
Grab the zip and order a pcb through your favourite pcb manufacture service. I used JLCPCB. 

# case
The case is a sandwich design, with four layers of 3mm acrylic to keep costs down. The standard design has one plate layer, two midpieces and one bottom layer. The midpieces can be omitted if you prefer.

The top layer has a cutout for a pro micro to poke through. If this makes you squeamish, then swap topplate.svg for topplate_(closed).svg, and add an extra midpiece to make up for the extra height that you'll need. Note that you will need to solder the pro micro to the underside of the pcb in this case, still with the components facing down.

The mid layer is designed for 6mm tall tapped spacers with a maximum width of 5.4mm, and an m3 internal diameter. I bought mine from [here](https://www.aliexpress.com/item/M3-15-Brass-Standoff-Spacer-Brass-Threaded-Spacer-hex-spacer-Brass-Standoff-Spacer-M3-L-Female/1860432002.html) , but if you want to use your own, change each of the hexagon cutout sizes to the size of your spacers + 0.1mm to allow for error.

Note that I have included the .ai file if you want to make your own changes. 

If you're rich and insane, you could make a 1.5mm metal plate. This would allow you to cut down the exceedingly ugly slots that are required to keep pcb mount cherry stabilisers from having issues with 3mm plates. You will also have to adjust the midpiece spacing accordingly, because the default configuration is pretty tight.

You can also forgo the case completely by top mounting all of the components, cutting them flush on the underside of the pcb and putting on some adhesive rubber strips or feet to stop the bare pcb from sliding around on your desk and potentially scratching it up. This is my recommended option, because you should spend as little money on this memeboard as humanly possible.

# construction
Soldering the pcb doesn't have a specific order due to the positioning of the pro micro, but you should probably solder all the surface mount and through hole components before the switches for the sake of simplicity. you should also clip, lube, and install your spacebar stabiliser before the switches, because installing it while the plate is in place is a bit of a fiddle.

The pro micro must be installed component side down. 

Once the pcb is populated with your components, your switches are installed (which should leave your plate and pcb as a single connected unit), flip it upside down, and place the midpieces over the plate. Slot the spacers into their holes, and screw them in from the underside. Make one last check that everything is in place, then put on the baseplate and screw it down as well.

# programming
There are two main layouts for the pain27 - vanilla, which is simply the 26 letters of the english language and the spacebar, and prime, which includes three layers under hold keys, as well as shift and ctrl on the top layer. Compiled hexes for each are supplied, as well as jsons if you want to make your own adjustments through [ruiqi mao's excellent kb firmware builder](https://kbfirmware.com).

*vanilla layout*

![vanilla layout](https://github.com/uuupah/pain27/blob/master/vanillalayout.png?raw=true)

*prime layout*

![prime layout](https://github.com/uuupah/pain27/blob/master/primelayout.png?raw=true)

Electronics isn't my forte (hence why meltyburrito made the pcb for me) so I'm going to direct you to [this guide](https://github.com/CampAsAChamp/LetsSplitWindowsGuide/blob/master/Flashing%20Firmware.md) to flash your pro micro with your layout. The process is identical, but since there is only one pcb, skip the mentions of eeprom files in part 3, step 5 and steps 11 through 16.

# finishing up

I recommend grabbing [ek switch hitter](https://elitekeyboards.com/switchhitter.php) to test each of your switches and function keys individually. If everything is working at this point, congratulations!  If not, don't fret. Pop the back open and inspect your soldering. Look for poor or missing joints, reversed diodes, or damage to the pcb or pro micro. Try reinstalling the firmware (perhaps the opposite of what you used first time as a check). if neither of these work, try desoldering and replacing the problem switch. If you're still having issues, try asking the mechanical keyboards discord for advice.

~~ note ~~

This guide makes no mention of the backlighting and underglow because I'm writing the guide the night after completing my final board, and I haven't yet updated the firmware to support either yet. I will be updating this readme and the firmware files in the near future.

Additionally, I make no guarantees about the quality of any of the files I've supplied. Check them thoroughly yourself.

## acknowledgements
Meltyburrito aka [screllicopter](https://github.com/ScrelliCopter) gave me a big hand with this board. If it wasnt for him, this would probably just be a guide on handwiring this piece of shit, which is much less fun. Check out his work, he's made a couple of other stupid keyboards besides this one.
