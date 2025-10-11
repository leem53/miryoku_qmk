# male_keybaord-qmk

qmk firmware for male_keybaord

![male_keybaord](https://codeberg.org/renaldo/male_keybaord/raw/branch/main/img/male_keybaord.jpg)

* Keyboard repo: https://codeberg.org/renaldo/male_keybaord
* Hardware Supported: elite c

## Usage

These files were tested with [miryoku](https://github.com/manna-harbour/miryoku) and connecting the left side:
1. Place files in `keyboards/male_keybaord/` 
2. Run the following commands to create the firmware for both sides:
```
qmk compile -kb male_keybaord/left -km manna-harbour_miryoku
qmk compile -kb male_keybaord/right -km manna-harbour_miryoku
```
3. Enter controller bootloader mode and mount it if it is not automatically
mounted
4. Place the corresponding `.uf2` file in mounted volume to flash it


## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
