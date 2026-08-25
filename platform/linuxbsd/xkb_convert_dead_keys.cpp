#include "xkb_convert_dead_keys.h"
#include "xkbcommon/xkbcommon-keysyms.h"
#include "xkbcommon/xkbcommon.h"

xkb_keysym_t xkb_convert_if_dead_key(xkb_keysym_t xkb_keysym){
    switch (xkb_keysym) {
        case XKB_KEY_dead_grave: // not tested
            break;
        case XKB_KEY_dead_acute:
            xkb_keysym = XKB_KEY_acute;
            break;
        case XKB_KEY_dead_circumflex:
            xkb_keysym = XKB_KEY_asciicircum;
            break;

        // from here not yet tested
        case XKB_KEY_dead_tilde: /*XKB_KEY_dead_perispomeni*/
            xkb_keysym = XKB_KEY_asciitilde;
            break;
        case XKB_KEY_dead_macron:
            xkb_keysym = XKB_KEY_macron;
            break;
        case XKB_KEY_dead_breve:
            xkb_keysym = XKB_KEY_breve;
            break;
        case XKB_KEY_dead_abovedot:
            xkb_keysym = XKB_KEY_abovedot;
            break;
        case XKB_KEY_dead_diaeresis:
            xkb_keysym = XKB_KEY_diaeresis;
            break; 
        case XKB_KEY_dead_abovering:
            // haven't found non dead equivalent
            break;
        case XKB_KEY_dead_doubleacute:
            xkb_keysym = XKB_KEY_doubleacute;
            break; 
        case XKB_KEY_dead_caron:
            xkb_keysym = XKB_KEY_caron;
            break; 
        case XKB_KEY_dead_cedilla:
            xkb_keysym = XKB_KEY_cedilla;
            break;
        case XKB_KEY_dead_ogonek:
            xkb_keysym = XKB_KEY_ogonek;
            break;
        case XKB_KEY_dead_iota:
            // haven't found non dead equivalent
            break;
        case XKB_KEY_dead_voiced_sound:
            xkb_keysym = XKB_KEY_voicedsound;
            break;
        case XKB_KEY_dead_semivoiced_sound:
            xkb_keysym = XKB_KEY_semivoicedsound;
            break;
        case XKB_KEY_dead_belowdot:
            //
            break;
        case XKB_KEY_dead_hook:
            //
            break;
        case XKB_KEY_dead_horn:
            //
            break; 
        case XKB_KEY_dead_stroke:
            //
            break;
        case XKB_KEY_dead_abovecomma: /*XKB_KEY_dead_psili*/
            //
            break;
        case XKB_KEY_dead_abovereversedcomma: /*XKB_KEY_dead_dasia*/
            //
            break;
        case XKB_KEY_dead_doublegrave:
            //
            break;
        case XKB_KEY_dead_belowring:
            //
            break;
        case XKB_KEY_dead_belowmacron:
            //
            break;
        case XKB_KEY_dead_belowcircumflex:
            //
            break;
        case XKB_KEY_dead_belowtilde:         
            //
            break;
        case XKB_KEY_dead_belowbreve:     
            //
            break;
        case XKB_KEY_dead_belowdiaeresis:      
            //
            break;
        case XKB_KEY_dead_invertedbreve:       
            //
            break;
        case XKB_KEY_dead_belowcomma:          
            //
            break;
        case XKB_KEY_dead_currency:            
            xkb_keysym = XKB_KEY_currency;
            break;

        /* extra dead elements for German T3 layout */
        case XKB_KEY_dead_lowline:
            //
            break;
        case XKB_KEY_dead_aboveverticalline:
            //
            break;
        case XKB_KEY_dead_belowverticalline:
            //
            break;
        case XKB_KEY_dead_longsolidusoverlay:
            //
            break;

        /* dead vowels for universal syllable entry */
        case XKB_KEY_dead_a:
            xkb_keysym = XKB_KEY_a;
            break;
        case XKB_KEY_dead_A:
            xkb_keysym = XKB_KEY_A;
            break;
        case XKB_KEY_dead_e:
            xkb_keysym = XKB_KEY_e;
            break;
        case XKB_KEY_dead_E:
            xkb_keysym = XKB_KEY_E;
            break;
        case XKB_KEY_dead_i:
            xkb_keysym = XKB_KEY_i;
            break;
        case XKB_KEY_dead_I:
            xkb_keysym = XKB_KEY_I;
            break;
        case XKB_KEY_dead_o:
            xkb_keysym = XKB_KEY_o;
            break;
        case XKB_KEY_dead_O:
            xkb_keysym = XKB_KEY_O;
            break;
        case XKB_KEY_dead_u:
            xkb_keysym = XKB_KEY_u;
            break;
        case XKB_KEY_dead_U:
            xkb_keysym = XKB_KEY_U;
            break;
        case XKB_KEY_dead_small_schwa:
            //
            break;
        case XKB_KEY_dead_capital_schwa:
            //
            break;
        case XKB_KEY_dead_greek:
            //
            break;
    }


    return xkb_keysym;
}