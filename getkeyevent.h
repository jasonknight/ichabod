
#ifndef GETKEYCODE_H
#define GETKEYCODE_H
#include <QKeyEvent>
QKeyEvent * getKeyEvent(QString keyToSend,QString type) {

	if (type == "press" && keyToSend == "Escape") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Escape,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Escape") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Escape,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Tab") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Tab,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Tab") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Tab,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Backtab") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Backtab,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Backtab") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Backtab,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Backspace") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Backspace,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Backspace") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Backspace,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Return") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Return,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Return") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Return,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Enter") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Enter,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Enter") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Enter,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Insert") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Insert,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Insert") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Insert,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Delete") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Delete,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Delete") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Delete,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Pause") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Pause,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Pause") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Pause,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Print") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Print,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Print") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Print,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "SysReq") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_SysReq,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "SysReq") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_SysReq,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Clear") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Clear,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Clear") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Clear,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Home") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Home,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Home") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Home,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "End") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_End,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "End") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_End,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Left") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Left,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Left") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Left,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Up") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Up,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Up") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Up,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Right") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Right,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Right") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Right,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Down") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Down,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Down") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Down,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "PageUp") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_PageUp,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "PageUp") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PageUp,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "PageDown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_PageDown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "PageDown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PageDown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Shift") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Shift,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Shift") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Shift,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Control") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Control,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Control") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Control,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Meta") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Meta,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Meta") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Meta,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Alt") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Alt,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Alt") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Alt,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AltGr") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AltGr,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AltGr") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AltGr,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "CapsLock") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_CapsLock,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "CapsLock") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_CapsLock,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "NumLock") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_NumLock,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "NumLock") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_NumLock,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ScrollLock") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ScrollLock,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ScrollLock") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ScrollLock,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F1") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F1,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F1") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F1,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F2") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F2,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F2") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F2,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F3") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F3,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F3") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F3,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F4") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F4,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F4") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F4,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F5") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F5,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F5") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F5,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F6") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F6,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F6") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F6,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F7") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F7,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F7") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F7,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F8") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F8,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F8") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F8,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F9") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F9,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F9") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F9,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F10") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F10,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F10") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F10,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F11") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F11,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F11") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F11,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F12") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F12,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F12") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F12,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F13") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F13,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F13") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F13,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F14") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F14,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F14") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F14,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F15") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F15,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F15") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F15,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F16") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F16,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F16") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F16,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F17") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F17,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F17") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F17,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F18") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F18,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F18") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F18,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F19") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F19,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F19") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F19,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F20") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F20,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F20") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F20,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F21") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F21,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F21") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F21,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F22") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F22,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F22") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F22,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F23") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F23,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F23") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F23,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F24") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F24,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F24") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F24,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F25") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F25,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F25") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F25,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F26") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F26,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F26") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F26,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F27") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F27,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F27") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F27,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F28") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F28,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F28") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F28,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F29") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F29,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F29") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F29,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F30") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F30,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F30") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F30,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F31") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F31,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F31") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F31,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F32") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F32,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F32") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F32,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F33") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F33,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F33") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F33,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F34") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F34,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F34") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F34,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F35") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F35,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "F35") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F35,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Super_L") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Super_L,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Super_L") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Super_L,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Super_R") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Super_R,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Super_R") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Super_R,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Menu") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Menu,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Menu") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Menu,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hyper_L") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hyper_L,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hyper_L") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hyper_L,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hyper_R") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hyper_R,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hyper_R") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hyper_R,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Help") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Help,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Help") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Help,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Direction_L") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Direction_L,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Direction_L") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Direction_L,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Direction_R") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Direction_R,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Direction_R") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Direction_R,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Space") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Space,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Space") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Space,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Any") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Any,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Any") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Any,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Exclam") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Exclam,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Exclam") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Exclam,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "QuoteDbl") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_QuoteDbl,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "QuoteDbl") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_QuoteDbl,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "NumberSign") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_NumberSign,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "NumberSign") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_NumberSign,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dollar") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dollar,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dollar") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dollar,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Percent") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Percent,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Percent") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Percent,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ampersand") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ampersand,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ampersand") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ampersand,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Apostrophe") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Apostrophe,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Apostrophe") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Apostrophe,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ParenLeft") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ParenLeft,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ParenLeft") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ParenLeft,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ParenRight") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ParenRight,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ParenRight") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ParenRight,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Asterisk") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Asterisk,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Asterisk") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Asterisk,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Plus") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Plus,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Plus") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Plus,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Comma") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Comma,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Comma") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Comma,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Minus") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Minus,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Minus") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Minus,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Period") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Period,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Period") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Period,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Slash") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Slash,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Slash") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Slash,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "0") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_0,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "0") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_0,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "1") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_1,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "1") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_1,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "2") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_2,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "2") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_2,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "3") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_3,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "3") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_3,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "4") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_4,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "4") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_4,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "5") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_5,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "5") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_5,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "6") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_6,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "6") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_6,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "7") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_7,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "7") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_7,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "8") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_8,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "8") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_8,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "9") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_9,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "9") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_9,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Colon") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Colon,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Colon") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Colon,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Semicolon") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Semicolon,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Semicolon") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Semicolon,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Less") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Less,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Less") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Less,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Equal") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Equal,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Equal") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Equal,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Greater") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Greater,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Greater") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Greater,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Question") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Question,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Question") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Question,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "At") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_At,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "At") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_At,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "A") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_A,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "A") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_A,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "a") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_A,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "a") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_A,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "B") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_B,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "B") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_B,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "b") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_B,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "b") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_B,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "C") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_C,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "C") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_C,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "c") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_C,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "c") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_C,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "D") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_D,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "D") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_D,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "d") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_D,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "d") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_D,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "E") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_E,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "E") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_E,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "e") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_E,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "e") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_E,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "F") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "F") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "f") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "f") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "G") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_G,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "G") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_G,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "g") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_G,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "g") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_G,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "H") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_H,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "H") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_H,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "h") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_H,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "h") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_H,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "I") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_I,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "I") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_I,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "i") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_I,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "i") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_I,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "J") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_J,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "J") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_J,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "j") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_J,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "j") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_J,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "K") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_K,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "K") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_K,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "k") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_K,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "k") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_K,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "L") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_L,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "L") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_L,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "l") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_L,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "l") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_L,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "M") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_M,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "M") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_M,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "m") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_M,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "m") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_M,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "N") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_N,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "N") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_N,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "n") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_N,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "n") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_N,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "O") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_O,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "O") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_O,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "o") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_O,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "o") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_O,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "P") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_P,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "P") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_P,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "p") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_P,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "p") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_P,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Q") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Q,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "Q") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Q,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "q") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Q,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "q") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Q,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "R") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_R,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "R") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_R,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "r") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_R,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "r") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_R,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "S") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_S,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "S") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_S,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "s") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_S,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "s") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_S,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "T") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_T,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "T") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_T,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "t") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_T,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "t") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_T,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "U") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_U,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "U") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_U,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "u") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_U,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "u") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_U,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "V") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_V,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "V") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_V,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "v") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_V,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "v") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_V,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "W") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_W,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "W") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_W,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "w") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_W,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "w") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_W,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "X") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_X,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "X") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_X,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "x") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_X,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "x") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_X,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Y") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Y,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "Y") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Y,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "y") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Y,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "y") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Y,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Z") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Z,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "Z") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Z,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "z") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Z,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "z") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Z,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BracketLeft") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BracketLeft,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BracketLeft") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BracketLeft,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Backslash") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Backslash,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Backslash") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Backslash,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BracketRight") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BracketRight,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BracketRight") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BracketRight,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AsciiCircum") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AsciiCircum,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AsciiCircum") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AsciiCircum,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Underscore") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Underscore,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Underscore") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Underscore,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "QuoteLeft") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_QuoteLeft,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "QuoteLeft") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_QuoteLeft,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BraceLeft") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BraceLeft,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BraceLeft") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BraceLeft,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Bar") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Bar,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Bar") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Bar,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BraceRight") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BraceRight,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BraceRight") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BraceRight,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AsciiTilde") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AsciiTilde,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AsciiTilde") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AsciiTilde,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "nobreakspace") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_nobreakspace,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "nobreakspace") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_nobreakspace,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "exclamdown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_exclamdown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "exclamdown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_exclamdown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "cent") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_cent,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "cent") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_cent,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "sterling") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_sterling,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "sterling") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_sterling,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "currency") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_currency,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "currency") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_currency,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "yen") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_yen,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "yen") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_yen,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "brokenbar") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_brokenbar,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "brokenbar") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_brokenbar,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "section") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_section,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "section") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_section,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "diaeresis") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_diaeresis,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "diaeresis") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_diaeresis,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "copyright") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_copyright,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "copyright") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_copyright,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ordfeminine") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ordfeminine,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ordfeminine") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ordfeminine,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "guillemotleft") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_guillemotleft,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "guillemotleft") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_guillemotleft,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "notsign") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_notsign,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "notsign") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_notsign,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "hyphen") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_hyphen,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "hyphen") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_hyphen,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "registered") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_registered,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "registered") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_registered,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "macron") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_macron,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "macron") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_macron,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "degree") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_degree,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "degree") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_degree,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "plusminus") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_plusminus,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "plusminus") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_plusminus,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "twosuperior") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_twosuperior,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "twosuperior") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_twosuperior,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "threesuperior") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_threesuperior,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "threesuperior") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_threesuperior,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "acute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_acute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "acute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_acute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "mu") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_mu,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "mu") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_mu,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "paragraph") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_paragraph,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "paragraph") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_paragraph,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "periodcentered") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_periodcentered,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "periodcentered") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_periodcentered,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "cedilla") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_cedilla,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "cedilla") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_cedilla,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "onesuperior") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_onesuperior,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "onesuperior") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_onesuperior,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "masculine") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_masculine,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "masculine") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_masculine,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "guillemotright") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_guillemotright,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "guillemotright") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_guillemotright,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "onequarter") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_onequarter,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "onequarter") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_onequarter,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "onehalf") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_onehalf,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "onehalf") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_onehalf,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "threequarters") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_threequarters,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "threequarters") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_threequarters,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "questiondown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_questiondown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "questiondown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_questiondown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Agrave") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Agrave,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Agrave") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Agrave,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Aacute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Aacute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Aacute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Aacute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Acircumflex") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Acircumflex,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Acircumflex") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Acircumflex,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Atilde") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Atilde,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Atilde") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Atilde,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Adiaeresis") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Adiaeresis,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Adiaeresis") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Adiaeresis,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Aring") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Aring,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Aring") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Aring,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AE") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AE,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AE") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AE,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ccedilla") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ccedilla,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ccedilla") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ccedilla,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Egrave") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Egrave,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Egrave") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Egrave,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Eacute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Eacute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Eacute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Eacute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ecircumflex") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ecircumflex,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ecircumflex") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ecircumflex,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ediaeresis") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ediaeresis,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ediaeresis") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ediaeresis,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Igrave") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Igrave,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Igrave") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Igrave,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Iacute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Iacute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Iacute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Iacute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Icircumflex") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Icircumflex,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Icircumflex") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Icircumflex,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Idiaeresis") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Idiaeresis,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Idiaeresis") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Idiaeresis,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ETH") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ETH,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ETH") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ETH,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ntilde") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ntilde,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ntilde") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ntilde,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ograve") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ograve,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ograve") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ograve,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Oacute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Oacute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Oacute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Oacute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ocircumflex") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ocircumflex,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ocircumflex") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ocircumflex,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Otilde") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Otilde,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Otilde") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Otilde,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Odiaeresis") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Odiaeresis,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Odiaeresis") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Odiaeresis,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "multiply") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_multiply,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "multiply") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_multiply,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ooblique") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ooblique,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ooblique") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ooblique,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ugrave") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ugrave,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ugrave") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ugrave,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Uacute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Uacute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Uacute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Uacute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Ucircumflex") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ucircumflex,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Ucircumflex") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ucircumflex,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Udiaeresis") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Udiaeresis,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Udiaeresis") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Udiaeresis,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Yacute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Yacute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Yacute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Yacute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "THORN") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_THORN,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "THORN") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_THORN,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ssharp") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ssharp,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ssharp") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ssharp,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "division") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_division,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "division") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_division,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ydiaeresis") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ydiaeresis,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ydiaeresis") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ydiaeresis,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Multi_key") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Multi_key,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Multi_key") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Multi_key,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Codeinput") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Codeinput,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Codeinput") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Codeinput,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "SingleCandidate") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_SingleCandidate,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "SingleCandidate") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_SingleCandidate,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MultipleCandidate") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MultipleCandidate,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MultipleCandidate") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MultipleCandidate,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "PreviousCandidate") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_PreviousCandidate,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "PreviousCandidate") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PreviousCandidate,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Mode_switch") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Mode_switch,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Mode_switch") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Mode_switch,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Kanji") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Kanji,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Kanji") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Kanji,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Muhenkan") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Muhenkan,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Muhenkan") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Muhenkan,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Henkan") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Henkan,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Henkan") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Henkan,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Romaji") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Romaji,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Romaji") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Romaji,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hiragana") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hiragana,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hiragana") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hiragana,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Katakana") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Katakana,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Katakana") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Katakana,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hiragana_Katakana") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hiragana_Katakana,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hiragana_Katakana") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hiragana_Katakana,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Zenkaku") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Zenkaku,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Zenkaku") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Zenkaku,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hankaku") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hankaku,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hankaku") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hankaku,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Zenkaku_Hankaku") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Zenkaku_Hankaku,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Zenkaku_Hankaku") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Zenkaku_Hankaku,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Touroku") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Touroku,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Touroku") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Touroku,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Massyo") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Massyo,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Massyo") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Massyo,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Kana_Lock") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Kana_Lock,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Kana_Lock") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Kana_Lock,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Kana_Shift") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Kana_Shift,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Kana_Shift") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Kana_Shift,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Eisu_Shift") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Eisu_Shift,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Eisu_Shift") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Eisu_Shift,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Eisu_toggle") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Eisu_toggle,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Eisu_toggle") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Eisu_toggle,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_Start") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Start,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_Start") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Start,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_End") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_End,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_End") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_End,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_Hanja") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Hanja,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_Hanja") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Hanja,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_Jamo") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Jamo,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_Jamo") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Jamo,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_Romaja") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Romaja,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_Romaja") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Romaja,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_Jeonja") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Jeonja,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_Jeonja") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Jeonja,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_Banja") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Banja,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_Banja") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Banja,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_PreHanja") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_PreHanja,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_PreHanja") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_PreHanja,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_PostHanja") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_PostHanja,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_PostHanja") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_PostHanja,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangul_Special") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Special,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangul_Special") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Special,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Grave") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Grave,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Grave") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Grave,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Acute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Acute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Acute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Acute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Circumflex") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Circumflex,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Circumflex") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Circumflex,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Tilde") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Tilde,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Tilde") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Tilde,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Macron") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Macron,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Macron") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Macron,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Breve") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Breve,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Breve") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Breve,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Abovedot") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Abovedot,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Abovedot") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Abovedot,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Diaeresis") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Diaeresis,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Diaeresis") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Diaeresis,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Abovering") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Abovering,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Abovering") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Abovering,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Doubleacute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Doubleacute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Doubleacute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Doubleacute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Caron") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Caron,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Caron") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Caron,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Cedilla") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Cedilla,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Cedilla") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Cedilla,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Ogonek") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Ogonek,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Ogonek") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Ogonek,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Iota") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Iota,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Iota") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Iota,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Voiced_Sound") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Voiced_Sound,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Voiced_Sound") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Voiced_Sound,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Semivoiced_Sound") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Semivoiced_Sound,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Semivoiced_Sound") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Semivoiced_Sound,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Belowdot") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Belowdot,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Belowdot") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Belowdot,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Hook") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Hook,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Hook") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Hook,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Dead_Horn") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Horn,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Dead_Horn") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Horn,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Back") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Back,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Back") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Back,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Forward") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Forward,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Forward") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Forward,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Stop") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Stop,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Stop") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Stop,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Refresh") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Refresh,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Refresh") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Refresh,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "VolumeDown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_VolumeDown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "VolumeDown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_VolumeDown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "VolumeMute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_VolumeMute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "VolumeMute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_VolumeMute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "VolumeUp") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_VolumeUp,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "VolumeUp") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_VolumeUp,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BassBoost") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BassBoost,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BassBoost") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BassBoost,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BassUp") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BassUp,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BassUp") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BassUp,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BassDown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BassDown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BassDown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BassDown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "TrebleUp") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_TrebleUp,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "TrebleUp") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_TrebleUp,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "TrebleDown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_TrebleDown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "TrebleDown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_TrebleDown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MediaPlay") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaPlay,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MediaPlay") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaPlay,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MediaStop") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaStop,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MediaStop") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaStop,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MediaPrevious") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaPrevious,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MediaPrevious") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaPrevious,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MediaNext") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaNext,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MediaNext") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaNext,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MediaRecord") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaRecord,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MediaRecord") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaRecord,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MediaPause") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaPause,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MediaPause") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaPause,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MediaTogglePlayPause") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaTogglePlayPause,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MediaTogglePlayPause") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaTogglePlayPause,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "HomePage") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_HomePage,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "HomePage") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_HomePage,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Favorites") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Favorites,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Favorites") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Favorites,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Search") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Search,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Search") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Search,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Standby") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Standby,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Standby") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Standby,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "OpenUrl") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_OpenUrl,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "OpenUrl") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_OpenUrl,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchMail") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchMail,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchMail") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchMail,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchMedia") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchMedia,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchMedia") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchMedia,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch0") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch0,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch0") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch0,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch1") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch1,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch1") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch1,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch2") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch2,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch2") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch2,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch3") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch3,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch3") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch3,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch4") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch4,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch4") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch4,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch5") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch5,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch5") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch5,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch6") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch6,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch6") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch6,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch7") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch7,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch7") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch7,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch8") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch8,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch8") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch8,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch9") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch9,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch9") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch9,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchA") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchA,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchA") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchA,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchB") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchB,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchB") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchB,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchC") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchC,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchC") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchC,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchD") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchD,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchD") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchD,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchE") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchE,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchE") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchE,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchF") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchF,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchF") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchF,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchG") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchG,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchG") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchG,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LaunchH") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchH,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LaunchH") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchH,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MonBrightnessUp") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MonBrightnessUp,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MonBrightnessUp") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MonBrightnessUp,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MonBrightnessDown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MonBrightnessDown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MonBrightnessDown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MonBrightnessDown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "KeyboardLightOnOff") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_KeyboardLightOnOff,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "KeyboardLightOnOff") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_KeyboardLightOnOff,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "KeyboardBrightnessUp") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_KeyboardBrightnessUp,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "KeyboardBrightnessUp") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_KeyboardBrightnessUp,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "KeyboardBrightnessDown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_KeyboardBrightnessDown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "KeyboardBrightnessDown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_KeyboardBrightnessDown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "PowerOff") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_PowerOff,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "PowerOff") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PowerOff,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "WakeUp") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_WakeUp,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "WakeUp") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_WakeUp,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Eject") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Eject,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Eject") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Eject,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ScreenSaver") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ScreenSaver,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ScreenSaver") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ScreenSaver,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "WWW") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_WWW,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "WWW") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_WWW,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Memo") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Memo,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Memo") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Memo,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LightBulb") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LightBulb,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LightBulb") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LightBulb,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Shop") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Shop,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Shop") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Shop,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "History") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_History,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "History") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_History,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AddFavorite") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AddFavorite,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AddFavorite") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AddFavorite,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "HotLinks") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_HotLinks,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "HotLinks") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_HotLinks,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BrightnessAdjust") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BrightnessAdjust,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BrightnessAdjust") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BrightnessAdjust,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Finance") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Finance,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Finance") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Finance,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Community") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Community,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Community") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Community,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AudioRewind") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioRewind,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AudioRewind") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioRewind,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "BackForward") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_BackForward,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "BackForward") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BackForward,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ApplicationLeft") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ApplicationLeft,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ApplicationLeft") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ApplicationLeft,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ApplicationRight") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ApplicationRight,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ApplicationRight") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ApplicationRight,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Book") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Book,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Book") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Book,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "CD") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_CD,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "CD") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_CD,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "cd") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_CD,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "cd") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_CD,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Calculator") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Calculator,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Calculator") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Calculator,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Launch1") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch1,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Launch1") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch1,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ToDoList") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ToDoList,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ToDoList") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ToDoList,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ClearGrab") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ClearGrab,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ClearGrab") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ClearGrab,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Close") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Close,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Close") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Close,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Copy") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Copy,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Copy") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Copy,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Cut") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Cut,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Cut") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Cut,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Display") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Display,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Display") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Display,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "DOS") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_DOS,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "DOS") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_DOS,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Documents") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Documents,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Documents") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Documents,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Excel") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Excel,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Excel") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Excel,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Explorer") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Explorer,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Explorer") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Explorer,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Game") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Game,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Game") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Game,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Go") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Go,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Go") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Go,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "iTouch") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_iTouch,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "iTouch") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_iTouch,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LogOff") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LogOff,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LogOff") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LogOff,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Market") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Market,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Market") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Market,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Meeting") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Meeting,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Meeting") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Meeting,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MenuKB") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MenuKB,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MenuKB") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MenuKB,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MenuPB") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MenuPB,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MenuPB") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MenuPB,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MySites") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MySites,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MySites") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MySites,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "News") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_News,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "News") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_News,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "OfficeHome") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_OfficeHome,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "OfficeHome") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_OfficeHome,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Option") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Option,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Option") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Option,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Paste") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Paste,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Paste") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Paste,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Phone") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Phone,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Phone") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Phone,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Calendar") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Calendar,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Calendar") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Calendar,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Reply") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Reply,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Reply") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Reply,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Reload") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Reload,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Reload") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Reload,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "RotateWindows") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_RotateWindows,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "RotateWindows") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_RotateWindows,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "RotationPB") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_RotationPB,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "RotationPB") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_RotationPB,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "RotationKB") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_RotationKB,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "RotationKB") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_RotationKB,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Save") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Save,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Save") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Save,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Send") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Send,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Send") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Send,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Spell") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Spell,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Spell") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Spell,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "SplitScreen") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_SplitScreen,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "SplitScreen") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_SplitScreen,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Support") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Support,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Support") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Support,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "TaskPane") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_TaskPane,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "TaskPane") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_TaskPane,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Terminal") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Terminal,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Terminal") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Terminal,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Tools") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Tools,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Tools") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Tools,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Travel") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Travel,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Travel") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Travel,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Video") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Video,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Video") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Video,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Word") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Word,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Word") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Word,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Xfer") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Xfer,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Xfer") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Xfer,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ZoomIn") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ZoomIn,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ZoomIn") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ZoomIn,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ZoomOut") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ZoomOut,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ZoomOut") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ZoomOut,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Away") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Away,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Away") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Away,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Messenger") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Messenger,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Messenger") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Messenger,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "WebCam") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_WebCam,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "WebCam") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_WebCam,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MailForward") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MailForward,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MailForward") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MailForward,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Pictures") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Pictures,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Pictures") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Pictures,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Music") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Music,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Music") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Music,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Battery") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Battery,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Battery") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Battery,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Bluetooth") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Bluetooth,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Bluetooth") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Bluetooth,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "WLAN") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_WLAN,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "WLAN") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_WLAN,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "UWB") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_UWB,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "UWB") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_UWB,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AudioForward") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioForward,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AudioForward") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioForward,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AudioRepeat") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioRepeat,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AudioRepeat") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioRepeat,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AudioRandomPlay") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioRandomPlay,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AudioRandomPlay") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioRandomPlay,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Subtitle") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Subtitle,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Subtitle") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Subtitle,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "AudioCycleTrack") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioCycleTrack,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "AudioCycleTrack") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioCycleTrack,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Time") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Time,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Time") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Time,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hibernate") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hibernate,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hibernate") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hibernate,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "View") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_View,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "View") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_View,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "TopMenu") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_TopMenu,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "TopMenu") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_TopMenu,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "PowerDown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_PowerDown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "PowerDown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PowerDown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Suspend") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Suspend,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Suspend") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Suspend,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ContrastAdjust") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ContrastAdjust,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ContrastAdjust") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ContrastAdjust,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "MediaLast") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaLast,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "MediaLast") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaLast,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "unknown") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_unknown,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "unknown") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_unknown,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Call") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Call,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Call") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Call,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ToggleCallHangup") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ToggleCallHangup,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ToggleCallHangup") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ToggleCallHangup,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Camera") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Camera,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Camera") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Camera,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "CameraFocus") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_CameraFocus,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "CameraFocus") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_CameraFocus,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Context1") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Context1,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Context1") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Context1,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Context2") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Context2,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Context2") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Context2,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Context3") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Context3,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Context3") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Context3,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Context4") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Context4,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Context4") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Context4,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Flip") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Flip,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Flip") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Flip,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Hangup") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangup,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Hangup") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangup,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ToggleCallHangup") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ToggleCallHangup,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ToggleCallHangup") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ToggleCallHangup,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "No") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_No,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "No") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_No,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Select") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Select,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Select") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Select,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Yes") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Yes,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Yes") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Yes,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "ToggleCallHangup") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_ToggleCallHangup,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "ToggleCallHangup") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ToggleCallHangup,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "VoiceDial") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_VoiceDial,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "VoiceDial") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_VoiceDial,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "LastNumberRedial") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_LastNumberRedial,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "LastNumberRedial") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LastNumberRedial,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Execute") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Execute,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Execute") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Execute,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Printer") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Printer,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Printer") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Printer,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Play") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Play,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Play") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Play,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Sleep") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Sleep,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Sleep") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Sleep,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Zoom") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Zoom,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Zoom") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Zoom,Qt::NoModifier);
	}

	if (type == "press" && keyToSend == "Cancel") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Cancel,Qt::NoModifier);
	}
	if (type == "release" && keyToSend == "Cancel") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Cancel,Qt::NoModifier);
	}

	return new QKeyEvent(QEvent::KeyPress,Qt::Key_0,Qt::NoModifier);
}
#endif // GETKEYCODE_H
