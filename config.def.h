/*
 * Nilwm - Lightweight X window manager.
 * See LICENSE file for copyright and license details.
 * vim:ts=4:sw=4:expandtab
 */

#ifndef NILWM_CONFIG_H_
#define NILWM_CONFIG_H_

/*
 * @see xcb/xproto.h
 */
#define MOD_KEY	            XCB_MOD_MASK_4
#define MOD_SHIFT           XCB_MOD_MASK_SHIFT
#define MOD_CTRL            XCB_MOD_MASK_CONTROL

const char *CMD_TERM[] = { "xterm", 0 };

/* Keysym X11/keysymdefs.h */
const struct key_t KEYS[] = {
    /* modifier                     key             function        argument */
    { MOD_KEY|MOD_CTRL,             36,             spawn,          { 0, CMD_TERM } },
};

#endif /* NILWM_CONFIG_H_ */
