<h1 align=center>
  📡 Micro Radar
</h1>
<h6 align=center>
  a tiny open-source flight radar for your desk
</h6>
<p align=center>
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/6/66/SMPTE_Color_Bars.svg/1280px-SMPTE_Color_Bars.svg.png" alt="drawing" width="400"/>
</p>
<p align=center>
  <a href="#prerequisites">PREREQUISITES</a> - <a href="#assembly">ASSEMBLY</a> - <a href="#usage">USAGE</a>
</p>

## Prerequisites
At the core of this project is the the ESP32-C3 module, which comes attached to a 240x240 IPS screen. The module powers the entire project and makes everything possible without needing to solder any components together.

I decided to use a dark grey PLA filament for the print, but any filament should work fine (and of course any colour you'd like to use!)

I've also included a glass lens in front of the screen for mine, it's entirely optional, but in my opinion the result looks more polished with the lens. If you go with the lens, you'll also need some clear-drying epoxy (not super glue, it'll fog up the lens. Ask me how I know.)

### Shopping List
Here is everything you'll need to purchase before starting the build. 

I've linked some of the specific products that I bought, I recommend these for ease of bulding. Please be prepared to make modifications to the enclosure and/or code if deviating from the hardware I've used. A lot of these can be found elsewhere, too.

- [ ] [1.28" Round GC9A01 240×240 IPS Display Module with ESP32-C3 (no-touch)](https://www.aliexpress.com/item/1005008482665220.html)
- [ ] [USB-C Ribbon Extension Cable (5cm, CMUP-CFPCB-BK)](https://www.aliexpress.com/item/1005005371248824.html)
- [ ] [M2 Heat-set Threaded Inserts (+ soldering iron)](https://www.aliexpress.com/item/1005008493831823.html)
- [ ] [32.5mm Round Mineral Glass Lens (optional, recommended)](https://www.aliexpress.com/item/1005004783554496.html)
- [ ] [Gorilla Epoxy (necessary for fitting lens, useful anyway)](https://www.amazon.co.uk/Gorilla-Glue-25ml-Epoxy/dp/B009NQQJFC)

### Accounts / API
This project uses OpenSky's API for retrieving flight data.

I highly recommend making an account, as it's free, and allows the radar to make many more requests per day (400 -> 4000), which makes the live view much more accurate. However, it isn't necessary if you prefer.

You can sign up [here](https://opensky-network.org), or search "OpenSky".

Further info on what to do with the account is in the usage section.

## Assembly

Once you have everything needed for the build, the next step is to assemble everything.

### Step 1 - 3D Print

<img width="400" alt="FFCBBECA-6165-4138-8C84-16AB375511A2_1_105_c" src="https://github.com/user-attachments/assets/21c0753c-7d7c-425c-bdf6-0df037a8fdaa" />

Print all of the STLs provided in `./hardware/stl/`. You should have:
- 1 main enclosure
- 1 front plate
- 1 bezel
- 2 spacers

### Step 2 - Heat-set threaded inserts

First, insert two 2mm M2 threaded inserts into the larger holes on the front plate.

<img width="400" alt="IMG_7882" src="https://github.com/user-attachments/assets/defcfb2c-cdff-4bf1-84b9-7fceeefb0caf" />

Next, the spacers (these may warp, it's fine. They'll also be a little thicker than in the picture). 2x6mm M2 inserts.

<img width="400" alt="IMG_7887" src="https://github.com/user-attachments/assets/73b95049-5f12-4e2b-983a-5242c05f9106" />

Finally, the main enclosure, 2x5mm M2 inserts.

<img width="400" alt="IMG_7891" src="https://github.com/user-attachments/assets/e36f3eec-31b5-468e-8451-9c428eaf9c21" />

Et voilà.

<img width="400" alt="IMG_7896" src="https://github.com/user-attachments/assets/97337223-223c-4531-90e1-f511adfb3d66" />

### Step 3 (optional) - Fitting the lens

<img width="400" alt="IMG_7902" src="https://github.com/user-attachments/assets/e555f787-ca87-4558-b1eb-107f9071f96e" />

This is, in my opinion, the most stressful part of the build. It's quite a pain to not get epoxy on the lens. Here are some tips:
- Apply epoxy to the front plate, not the lens
- Lower the front plate onto the lens (easier to clean any excess epoxy that's squeezed out)
- Have some kind of cleaner nearby to clean up the edges (I just used nail polish, ymmv.)
- Less is more when it comes to applying the epoxy
- Work on a sheet which the epoxy won't stick to to avoid gluing it to the table

<img width="400" alt="IMG_7911" src="https://github.com/user-attachments/assets/aa497389-efd5-45c3-84dc-c997232889ac" />

### Step 4 - Bezel

To secure the bezel to the front plate, use 2x5mm M2 screws through the threaded inserts added to the front plate.

<img width="400" alt="IMG_7914" src="https://github.com/user-attachments/assets/37a3502a-83e1-4552-a399-9a914e0ec973" />

Then screw 2x10mm M2 screws through the remaining two holes, they should stick through the back like so

<img width="400" alt="IMG_7915" src="https://github.com/user-attachments/assets/9ccfe5f2-347d-4563-a2b1-eb5e65e1d83f" />

tbc...

## Usage
TODO - this section

## Notes
> Designed and developed as part of a wedding present for a mate who loves aviation (congratulations to both him and his wife!)

> Inspired by [therealhacksaw](https://www.instagram.com/therealhacksaw/)'s desk radar

> Built with ♥︎ in London
