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
  shiftL,        z,        x,        c,        v,        b, lpupo1l1,
    ctrlL,    grave, bkslash,     altL, lpupo1l1,
                                                                 del,     altL,
                                                       nop,      nop,     home,
                                                        bs,    ctrlL,      end,
// right hand ..... ......... ......... ......... ......... ......... .........
                 7,        8,        9,        0,     dash,    equal,       bs,
              pipe,        y,        u,        i,        o,        p,    brktR,
                           h,        j,        k,        l,  semicol,    enter,
           bkslash,        n,        m,    comma,   period,    slash,   shiftR,
                                arrowL,   arrowD,   arrowU,   arrowR,    quote,
    altR,      ins,
   pageU,      nop,      nop,
   pageD,    enter,    space  ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : programming keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,       F1,       F2,       F3,       F4,       F5,      F11,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,   parenL,   parenR,      nop,
  shiftL,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      ins,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                     space,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,    btldr,
               nop,     pipe,    brktL,    brktR,     dash,  undersc,      nop,
                      arrowL,   arrowD,   arrowU,   arrowR,     plus, dblQuote,
               nop,      nop,   braceL,   braceR, fatarrow,    enter,   shiftR,
                                   nop,      nop,   period,    enter,    quote,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,        0  ),

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
               F12,       F6,       F7,       F8,       F9,      F10,    power,
            lpo2l2,    caret,  undersc, lessThan, grtrThan,   dollar,  volumeU,
                     bkslash,        1,   parenL,   parenR,    equal,  volumeD,
          lpupo3l3, asterisk,        2,        3,        4,        5,     mute,
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

