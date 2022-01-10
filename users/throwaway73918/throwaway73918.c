#include "throwaway73918.h"
#include "g/keymap_combo.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(record->event.pressed) {
        switch (keycode){
            case ENDW:
                register_code(KC_LCTL);
                tap_code(KC_RGHT);
                unregister_code(KC_LCTL);
                tap_code(KC_LEFT);
                return false;

            case SAVEI:
                tap_code(KC_BTN2);
                tap_code(KC_V);
                tap_code(KC_ENT);
                return false;
        }
    }
    return true;
}
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER:
            return false;
        default:
            return true;
    }
}
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER:
            return 150;
        case RAISE:
            return 150;
        default:
            return TAPPING_TERM;
    }
}

bool get_combo_must_hold(uint16_t index, combo_t *combo) {
    // Same as above, decide by keycode, the combo index, or by the keys in the chord.

    if (KEYCODE_IS_MOD(combo->keycode) ||
        (combo->keycode >= QK_MOMENTARY && combo->keycode <= QK_MOMENTARY_MAX) // MO(kc) keycodes
        ) {
        return true;
    }

    switch (index) {
        case eresc:
            return true;
        case caps:
            return true;
    }

    return false;
}

/**
 * TODO:
 * Mouse keys?
 * Game layer
 * move <> onto symbol layers?
 * replace < > with '"
 * replace q ?
 */

