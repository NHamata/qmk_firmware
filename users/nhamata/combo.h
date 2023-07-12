#pragma once

/*
These are aliases used to more abstractly represent finger positions
in relation to the homerow instead of using the keycodes. The position works
as shown in the following diagram of POSITION LABELS

|---+---+---+
| 8 | 1 | 2 |
|---+---+---+
| 7 | 0 | 3 |
|---+---+---+
| 6 | 5 | 4 |
|---+---+---+

The number zero represents the resting position of a finger, such as homerow or on one of the thumb keys of the thumb cluster

The following are labels for each finger, FINGER LABELS

T - the thumb
I - the index finger
M - the middle finger
R - the ring finger
P - the pinky finger

Each combo is always written in the order listed above top down

Each element in the combo consist of a finger label followed by a position label, there can be one or more elements in a combo

for example:
T7I5M0
This combo occurs when the thumb is to the left of the resting position, the index is one key below the resting position and the middle finger is at its resting position, in this case the home row

*/

/*
 Grid labels for colemak DHE layout, a layout that is a modification of the popular colemak mod-dh, where the letter 'e' is put on a thumb key. A few keyswaps were required to accomodate this.
*/

#ifdef COLEMAK_DHE

#define LI0   KC_T
#define LM0   KC_S
#define LR0   KC_R
#define LP0   KC_A
#define LI5   KC_D
#define LM5   KC_C
#define LR5   KC_X
#define LI1   KC_P
#define LM1   KC_F
#define LR1   KC_W
#define LI3   KC_G
#define LM3   KC_T
#define LI2   KC_B
#define LM2   KC_P

#define RI0   KC_N
#define RM0   KC_L
#define RR0   KC_I
#define RP0   KC_O

#define RI1   KC_J
#define RM1   KC_U
#define RR1   KC_Y

#define LI7   KC_M
#define LM7   KC_N
#define LI8   KC_BSPC
#define LM8   KC_J

#ifdef COMBO_MT

#else
#define LT0   KC_SPC
#define RI5   KC_H
#define RM5   KC_COMM
#define RR5   KC_DOT
#endif


/* Grid layout for typical qwerty stagger layout*/
#elseif QWERTY_ALPHA
#define LI0   KC_F
#define LM0   KC_D
#define LR0   KC_S
#define LP0   KC_A
#define LI5   KC_
#define LM5   KC_
#define LR5   KC_
#define LI1   KC_R
#define LM1   KC_E
#define LR1   KC_W
#define LI3   KC_G
#define LM3   KC_F
#define LI2   KC_T
#define LM2   KC_R

#define RI0   KC_J
#define RM0   KC_K
#define RR0   KC_L
#define RP0   KC_COLON

#define RI1   KC_I
#define RM1   KC_O
#define RR1   KC_P

#define LI7   KC_H
#define LM7   KC_J
#define LI8   KC_U
#define LM8   KC_I

#ifdef COMBO_MT

#else
#define LT0   KC_E
#define RI5   KC_
#define RM5   KC_
#define RR5   KC_
#endif
#endif