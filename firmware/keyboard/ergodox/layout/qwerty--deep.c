/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * My QWERTY layout, at the moment.  I imagine this will evolve over time.
 * Once I'm done with the Arensito layout, it may disappear altogether.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"

//Macros
void P(fatarrow)(void) { KF(type_string)( PSTR("->") ); }
void R(fatarrow)(void) {}

void keys__press__sSpace (void) {
    usb__kb__set_key(true, KEYBOARD__LeftShift);
    usb__kb__set_key(true, KEYBOARD__Spacebar);
    usb__kb__send_report();
    usb__kb__set_key(false, KEYBOARD__LeftShift);
    usb__kb__set_key(false, KEYBOARD__Spacebar);
}

void keys__press__sArrowL (void) {
    usb__kb__set_key(true, KEYBOARD__LeftShift);
    usb__kb__set_key(true, KEYBOARD__LeftArrow);
    usb__kb__send_report();
    usb__kb__set_key(false, KEYBOARD__LeftShift);
    usb__kb__set_key(false, KEYBOARD__LeftArrow);
}

void keys__press__sArrowR (void) {
    usb__kb__set_key(true, KEYBOARD__LeftShift);
    usb__kb__set_key(true, KEYBOARD__RightArrow);
    usb__kb__send_report();
    usb__kb__set_key(false, KEYBOARD__LeftShift);
    usb__kb__set_key(false, KEYBOARD__RightArrow);
}

void keys__press__sArrowU (void) {
    usb__kb__set_key(true, KEYBOARD__LeftShift);
    usb__kb__set_key(true, KEYBOARD__UpArrow);
    usb__kb__send_report();
    usb__kb__set_key(false, KEYBOARD__LeftShift);
    usb__kb__set_key(false, KEYBOARD__UpArrow);
}

void keys__press__sArrowD (void) {
    usb__kb__set_key(true, KEYBOARD__LeftShift);
    usb__kb__set_key(true, KEYBOARD__DownArrow);
    usb__kb__send_report();
    usb__kb__set_key(false, KEYBOARD__LeftShift);
    usb__kb__set_key(false, KEYBOARD__DownArrow);
}

void R(sSpace)(void) {}
void R(sArrowL)(void) {}
void R(sArrowR)(void) {}
void R(sArrowU)(void) {}
void R(sArrowD)(void) {}

// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     esc,        1,        2,        3,        4,        5,       6,
     tab,        q,        w,        e,        r,        t,   tilde,
    guiL,        a,        s,        d,        f,        g,
  shiftL,        z,        x,        c,        v,        b,     esc,
    ctrlL,    grave, bkslash, lpupo2l2, lpupo1l1,
                                                                 del,     altL,
                                                       nop,      nop,     home,
                                                    shiftL,    ctrlL,      end,
// right hand ..... ......... ......... ......... ......... ......... .........
                 7,        8,        9,        0,     dash,    equal,       bs,
              pipe,        y,        u,        i,        o,        p,    brktR,
                           h,        j,        k,        l,  semicol,    enter,
           bkslash,        n,        m,    comma,   period,    slash,   shiftR,
                                arrowL,   arrowD,   arrowU,   arrowR,    quote,
    altR,      ins,
   pageU,      nop,      nop,
   pageD,       bs,    space  ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : programming keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,       F1,       F2,       F3,       F4,       F5,      F11,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,   parenL,   parenR,      nop,
  shiftL,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      ins,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                     space,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,       bs,
               nop,     pipe,    brktL,    brktR,  undersc,     dash,      nop,
                      arrowL,   arrowD,   arrowU,   arrowR,    equal, dblQuote,
               nop,      nop,   braceL,   braceR, fatarrow,     plus,   shiftR,
                                   nop,      nop,   period,    enter,    quote,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      sSpace ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,   braceL,   braceR,    brktL,    brktR,      nop,   lpo2l2,
  transp,  semicol,    slash,     dash,        0,    colon,
  transp,        6,        7,        8,        9,     plus, lpupo3l3,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,   transp,
            lpo2l2,    caret,  lessThan,grtrThan,  undersc,   dollar,  volumeU,
                     sArrowL,  sArrowD,  sArrowU,  sArrowR,    equal,  volumeD,
         lpupo3l3, asterisk,    pound,  asterisk,        4,        5,     mute,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 3 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_prog,
                         nop,      nop,      nop,      nop,      nop, dmp_eepr,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};

