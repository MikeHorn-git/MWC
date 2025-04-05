#ifndef SETTINGS_H
#define SETTINGS_H

/*
 * SESSION LOCK
 *
 * Session Lock client launched when the POWER key is pressed,
 * see the Keyboard class.
 */

#define SETTINGS_SESSION_LOCK_CLIENT "swaylock"

/*
 * INPUT DEVICES
 *
 * Check the Seat class.
 */

#define SETTINGS_DISABLE_WHILE_TYPING false

/* These flags determine how the scene handles input events.
 * If no flags are set, the scene will simply dispatch events to the appropriate views.
 *
 * For example, if the WaylandEvents flag is set, the scene will also send input events
 * to clients using the default LPointer, LKeyboard or LTouch implementation.
 *
 * If you want to handle client events yourself while still dispatching events to views,
 * remove all flags.
 *
 * Note: The AuxFunc flag adds the Ctrl + Shift + Esc shortcut to quit. See Keyboard.
 */
#define SETTINGS_SCENE_EVENT_OPTIONS \
	LScene::WaylandEvents | LScene::AuxFunc | LScene::PointerConstraints

#endif // SETTINGS_H
