
#ifndef GETKEYCODE_H
#define GETKEYCODE_H
#include <QKeyEvent>
QKeyEvent * getKeyEvent(QString keyToSend,QString type) {

	if (type == "press" && keyToSend == "Escape") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Escape,0);
	}
	if (type == "release" && keyToSend == "Escape") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Escape,0);
	}

	if (type == "press" && keyToSend == "Tab") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Tab,0);
	}
	if (type == "release" && keyToSend == "Tab") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Tab,0);
	}

	if (type == "press" && keyToSend == "Backtab") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Backtab,0);
	}
	if (type == "release" && keyToSend == "Backtab") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Backtab,0);
	}

	if (type == "press" && keyToSend == "Backspace") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Backspace,0);
	}
	if (type == "release" && keyToSend == "Backspace") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Backspace,0);
	}

	if (type == "press" && keyToSend == "Return") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Return,0);
	}
	if (type == "release" && keyToSend == "Return") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Return,0);
	}

	if (type == "press" && keyToSend == "Enter") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Enter,0);
	}
	if (type == "release" && keyToSend == "Enter") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Enter,0);
	}

	if (type == "press" && keyToSend == "Insert") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Insert,0);
	}
	if (type == "release" && keyToSend == "Insert") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Insert,0);
	}

	if (type == "press" && keyToSend == "Delete") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Delete,0);
	}
	if (type == "release" && keyToSend == "Delete") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Delete,0);
	}

	if (type == "press" && keyToSend == "Pause") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Pause,0);
	}
	if (type == "release" && keyToSend == "Pause") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Pause,0);
	}

	if (type == "press" && keyToSend == "Print") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Print,0);
	}
	if (type == "release" && keyToSend == "Print") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Print,0);
	}

	if (type == "press" && keyToSend == "SysReq") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_SysReq,0);
	}
	if (type == "release" && keyToSend == "SysReq") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_SysReq,0);
	}

	if (type == "press" && keyToSend == "Clear") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Clear,0);
	}
	if (type == "release" && keyToSend == "Clear") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Clear,0);
	}

	if (type == "press" && keyToSend == "Home") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Home,0);
	}
	if (type == "release" && keyToSend == "Home") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Home,0);
	}

	if (type == "press" && keyToSend == "End") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_End,0);
	}
	if (type == "release" && keyToSend == "End") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_End,0);
	}

	if (type == "press" && keyToSend == "Left") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Left,0);
	}
	if (type == "release" && keyToSend == "Left") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Left,0);
	}

	if (type == "press" && keyToSend == "Up") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Up,0);
	}
	if (type == "release" && keyToSend == "Up") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Up,0);
	}

	if (type == "press" && keyToSend == "Right") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Right,0);
	}
	if (type == "release" && keyToSend == "Right") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Right,0);
	}

	if (type == "press" && keyToSend == "Down") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Down,0);
	}
	if (type == "release" && keyToSend == "Down") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Down,0);
	}

	if (type == "press" && keyToSend == "PageUp") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_PageUp,0);
	}
	if (type == "release" && keyToSend == "PageUp") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PageUp,0);
	}

	if (type == "press" && keyToSend == "PageDown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_PageDown,0);
	}
	if (type == "release" && keyToSend == "PageDown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PageDown,0);
	}

	if (type == "press" && keyToSend == "Shift") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Shift,0);
	}
	if (type == "release" && keyToSend == "Shift") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Shift,0);
	}

	if (type == "press" && keyToSend == "Control") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Control,0);
	}
	if (type == "release" && keyToSend == "Control") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Control,0);
	}

	if (type == "press" && keyToSend == "Meta") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Meta,0);
	}
	if (type == "release" && keyToSend == "Meta") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Meta,0);
	}

	if (type == "press" && keyToSend == "Alt") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Alt,0);
	}
	if (type == "release" && keyToSend == "Alt") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Alt,0);
	}

	if (type == "press" && keyToSend == "AltGr") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AltGr,0);
	}
	if (type == "release" && keyToSend == "AltGr") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AltGr,0);
	}

	if (type == "press" && keyToSend == "CapsLock") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_CapsLock,0);
	}
	if (type == "release" && keyToSend == "CapsLock") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_CapsLock,0);
	}

	if (type == "press" && keyToSend == "NumLock") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_NumLock,0);
	}
	if (type == "release" && keyToSend == "NumLock") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_NumLock,0);
	}

	if (type == "press" && keyToSend == "ScrollLock") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ScrollLock,0);
	}
	if (type == "release" && keyToSend == "ScrollLock") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ScrollLock,0);
	}

	if (type == "press" && keyToSend == "F1") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F1,0);
	}
	if (type == "release" && keyToSend == "F1") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F1,0);
	}

	if (type == "press" && keyToSend == "F2") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F2,0);
	}
	if (type == "release" && keyToSend == "F2") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F2,0);
	}

	if (type == "press" && keyToSend == "F3") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F3,0);
	}
	if (type == "release" && keyToSend == "F3") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F3,0);
	}

	if (type == "press" && keyToSend == "F4") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F4,0);
	}
	if (type == "release" && keyToSend == "F4") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F4,0);
	}

	if (type == "press" && keyToSend == "F5") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F5,0);
	}
	if (type == "release" && keyToSend == "F5") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F5,0);
	}

	if (type == "press" && keyToSend == "F6") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F6,0);
	}
	if (type == "release" && keyToSend == "F6") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F6,0);
	}

	if (type == "press" && keyToSend == "F7") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F7,0);
	}
	if (type == "release" && keyToSend == "F7") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F7,0);
	}

	if (type == "press" && keyToSend == "F8") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F8,0);
	}
	if (type == "release" && keyToSend == "F8") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F8,0);
	}

	if (type == "press" && keyToSend == "F9") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F9,0);
	}
	if (type == "release" && keyToSend == "F9") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F9,0);
	}

	if (type == "press" && keyToSend == "F10") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F10,0);
	}
	if (type == "release" && keyToSend == "F10") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F10,0);
	}

	if (type == "press" && keyToSend == "F11") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F11,0);
	}
	if (type == "release" && keyToSend == "F11") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F11,0);
	}

	if (type == "press" && keyToSend == "F12") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F12,0);
	}
	if (type == "release" && keyToSend == "F12") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F12,0);
	}

	if (type == "press" && keyToSend == "F13") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F13,0);
	}
	if (type == "release" && keyToSend == "F13") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F13,0);
	}

	if (type == "press" && keyToSend == "F14") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F14,0);
	}
	if (type == "release" && keyToSend == "F14") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F14,0);
	}

	if (type == "press" && keyToSend == "F15") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F15,0);
	}
	if (type == "release" && keyToSend == "F15") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F15,0);
	}

	if (type == "press" && keyToSend == "F16") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F16,0);
	}
	if (type == "release" && keyToSend == "F16") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F16,0);
	}

	if (type == "press" && keyToSend == "F17") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F17,0);
	}
	if (type == "release" && keyToSend == "F17") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F17,0);
	}

	if (type == "press" && keyToSend == "F18") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F18,0);
	}
	if (type == "release" && keyToSend == "F18") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F18,0);
	}

	if (type == "press" && keyToSend == "F19") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F19,0);
	}
	if (type == "release" && keyToSend == "F19") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F19,0);
	}

	if (type == "press" && keyToSend == "F20") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F20,0);
	}
	if (type == "release" && keyToSend == "F20") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F20,0);
	}

	if (type == "press" && keyToSend == "F21") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F21,0);
	}
	if (type == "release" && keyToSend == "F21") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F21,0);
	}

	if (type == "press" && keyToSend == "F22") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F22,0);
	}
	if (type == "release" && keyToSend == "F22") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F22,0);
	}

	if (type == "press" && keyToSend == "F23") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F23,0);
	}
	if (type == "release" && keyToSend == "F23") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F23,0);
	}

	if (type == "press" && keyToSend == "F24") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F24,0);
	}
	if (type == "release" && keyToSend == "F24") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F24,0);
	}

	if (type == "press" && keyToSend == "F25") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F25,0);
	}
	if (type == "release" && keyToSend == "F25") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F25,0);
	}

	if (type == "press" && keyToSend == "F26") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F26,0);
	}
	if (type == "release" && keyToSend == "F26") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F26,0);
	}

	if (type == "press" && keyToSend == "F27") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F27,0);
	}
	if (type == "release" && keyToSend == "F27") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F27,0);
	}

	if (type == "press" && keyToSend == "F28") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F28,0);
	}
	if (type == "release" && keyToSend == "F28") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F28,0);
	}

	if (type == "press" && keyToSend == "F29") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F29,0);
	}
	if (type == "release" && keyToSend == "F29") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F29,0);
	}

	if (type == "press" && keyToSend == "F30") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F30,0);
	}
	if (type == "release" && keyToSend == "F30") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F30,0);
	}

	if (type == "press" && keyToSend == "F31") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F31,0);
	}
	if (type == "release" && keyToSend == "F31") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F31,0);
	}

	if (type == "press" && keyToSend == "F32") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F32,0);
	}
	if (type == "release" && keyToSend == "F32") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F32,0);
	}

	if (type == "press" && keyToSend == "F33") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F33,0);
	}
	if (type == "release" && keyToSend == "F33") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F33,0);
	}

	if (type == "press" && keyToSend == "F34") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F34,0);
	}
	if (type == "release" && keyToSend == "F34") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F34,0);
	}

	if (type == "press" && keyToSend == "F35") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F35,0);
	}
	if (type == "release" && keyToSend == "F35") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F35,0);
	}

	if (type == "press" && keyToSend == "Super_L") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Super_L,0);
	}
	if (type == "release" && keyToSend == "Super_L") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Super_L,0);
	}

	if (type == "press" && keyToSend == "Super_R") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Super_R,0);
	}
	if (type == "release" && keyToSend == "Super_R") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Super_R,0);
	}

	if (type == "press" && keyToSend == "Menu") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Menu,0);
	}
	if (type == "release" && keyToSend == "Menu") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Menu,0);
	}

	if (type == "press" && keyToSend == "Hyper_L") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hyper_L,0);
	}
	if (type == "release" && keyToSend == "Hyper_L") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hyper_L,0);
	}

	if (type == "press" && keyToSend == "Hyper_R") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hyper_R,0);
	}
	if (type == "release" && keyToSend == "Hyper_R") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hyper_R,0);
	}

	if (type == "press" && keyToSend == "Help") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Help,0);
	}
	if (type == "release" && keyToSend == "Help") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Help,0);
	}

	if (type == "press" && keyToSend == "Direction_L") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Direction_L,0);
	}
	if (type == "release" && keyToSend == "Direction_L") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Direction_L,0);
	}

	if (type == "press" && keyToSend == "Direction_R") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Direction_R,0);
	}
	if (type == "release" && keyToSend == "Direction_R") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Direction_R,0);
	}

	if (type == "press" && keyToSend == "Space") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Space,0);
	}
	if (type == "release" && keyToSend == "Space") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Space,0);
	}

	if (type == "press" && keyToSend == "Any") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Any,0);
	}
	if (type == "release" && keyToSend == "Any") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Any,0);
	}

	if (type == "press" && keyToSend == "Exclam") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Exclam,0);
	}
	if (type == "release" && keyToSend == "Exclam") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Exclam,0);
	}

	if (type == "press" && keyToSend == "QuoteDbl") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_QuoteDbl,0);
	}
	if (type == "release" && keyToSend == "QuoteDbl") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_QuoteDbl,0);
	}

	if (type == "press" && keyToSend == "NumberSign") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_NumberSign,0);
	}
	if (type == "release" && keyToSend == "NumberSign") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_NumberSign,0);
	}

	if (type == "press" && keyToSend == "Dollar") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dollar,0);
	}
	if (type == "release" && keyToSend == "Dollar") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dollar,0);
	}

	if (type == "press" && keyToSend == "Percent") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Percent,0);
	}
	if (type == "release" && keyToSend == "Percent") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Percent,0);
	}

	if (type == "press" && keyToSend == "Ampersand") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ampersand,0);
	}
	if (type == "release" && keyToSend == "Ampersand") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ampersand,0);
	}

	if (type == "press" && keyToSend == "Apostrophe") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Apostrophe,0);
	}
	if (type == "release" && keyToSend == "Apostrophe") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Apostrophe,0);
	}

	if (type == "press" && keyToSend == "ParenLeft") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ParenLeft,0);
	}
	if (type == "release" && keyToSend == "ParenLeft") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ParenLeft,0);
	}

	if (type == "press" && keyToSend == "ParenRight") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ParenRight,0);
	}
	if (type == "release" && keyToSend == "ParenRight") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ParenRight,0);
	}

	if (type == "press" && keyToSend == "Asterisk") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Asterisk,0);
	}
	if (type == "release" && keyToSend == "Asterisk") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Asterisk,0);
	}

	if (type == "press" && keyToSend == "Plus") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Plus,0);
	}
	if (type == "release" && keyToSend == "Plus") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Plus,0);
	}

	if (type == "press" && keyToSend == "Comma") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Comma,0);
	}
	if (type == "release" && keyToSend == "Comma") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Comma,0);
	}

	if (type == "press" && keyToSend == "Minus") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Minus,0);
	}
	if (type == "release" && keyToSend == "Minus") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Minus,0);
	}

	if (type == "press" && keyToSend == "Period") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Period,0);
	}
	if (type == "release" && keyToSend == "Period") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Period,0);
	}

	if (type == "press" && keyToSend == "Slash") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Slash,0);
	}
	if (type == "release" && keyToSend == "Slash") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Slash,0);
	}

	if (type == "press" && keyToSend == "0") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_0,0);
	}
	if (type == "release" && keyToSend == "0") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_0,0);
	}

	if (type == "press" && keyToSend == "1") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_1,0);
	}
	if (type == "release" && keyToSend == "1") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_1,0);
	}

	if (type == "press" && keyToSend == "2") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_2,0);
	}
	if (type == "release" && keyToSend == "2") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_2,0);
	}

	if (type == "press" && keyToSend == "3") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_3,0);
	}
	if (type == "release" && keyToSend == "3") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_3,0);
	}

	if (type == "press" && keyToSend == "4") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_4,0);
	}
	if (type == "release" && keyToSend == "4") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_4,0);
	}

	if (type == "press" && keyToSend == "5") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_5,0);
	}
	if (type == "release" && keyToSend == "5") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_5,0);
	}

	if (type == "press" && keyToSend == "6") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_6,0);
	}
	if (type == "release" && keyToSend == "6") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_6,0);
	}

	if (type == "press" && keyToSend == "7") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_7,0);
	}
	if (type == "release" && keyToSend == "7") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_7,0);
	}

	if (type == "press" && keyToSend == "8") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_8,0);
	}
	if (type == "release" && keyToSend == "8") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_8,0);
	}

	if (type == "press" && keyToSend == "9") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_9,0);
	}
	if (type == "release" && keyToSend == "9") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_9,0);
	}

	if (type == "press" && keyToSend == "Colon") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Colon,0);
	}
	if (type == "release" && keyToSend == "Colon") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Colon,0);
	}

	if (type == "press" && keyToSend == "Semicolon") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Semicolon,0);
	}
	if (type == "release" && keyToSend == "Semicolon") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Semicolon,0);
	}

	if (type == "press" && keyToSend == "Less") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Less,0);
	}
	if (type == "release" && keyToSend == "Less") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Less,0);
	}

	if (type == "press" && keyToSend == "Equal") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Equal,0);
	}
	if (type == "release" && keyToSend == "Equal") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Equal,0);
	}

	if (type == "press" && keyToSend == "Greater") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Greater,0);
	}
	if (type == "release" && keyToSend == "Greater") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Greater,0);
	}

	if (type == "press" && keyToSend == "Question") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Question,0);
	}
	if (type == "release" && keyToSend == "Question") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Question,0);
	}

	if (type == "press" && keyToSend == "At") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_At,0);
	}
	if (type == "release" && keyToSend == "At") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_At,0);
	}

	if (type == "press" && keyToSend == "A") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_A,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "A") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_A,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "a") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_A,0);
	}
	if (type == "release" && keyToSend == "a") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_A,0);
	}

	if (type == "press" && keyToSend == "B") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_B,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "B") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_B,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "b") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_B,0);
	}
	if (type == "release" && keyToSend == "b") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_B,0);
	}

	if (type == "press" && keyToSend == "C") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_C,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "C") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_C,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "c") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_C,0);
	}
	if (type == "release" && keyToSend == "c") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_C,0);
	}

	if (type == "press" && keyToSend == "D") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_D,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "D") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_D,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "d") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_D,0);
	}
	if (type == "release" && keyToSend == "d") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_D,0);
	}

	if (type == "press" && keyToSend == "E") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_E,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "E") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_E,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "e") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_E,0);
	}
	if (type == "release" && keyToSend == "e") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_E,0);
	}

	if (type == "press" && keyToSend == "F") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_F,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "F") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "f") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_F,0);
	}
	if (type == "release" && keyToSend == "f") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_F,0);
	}

	if (type == "press" && keyToSend == "G") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_G,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "G") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_G,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "g") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_G,0);
	}
	if (type == "release" && keyToSend == "g") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_G,0);
	}

	if (type == "press" && keyToSend == "H") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_H,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "H") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_H,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "h") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_H,0);
	}
	if (type == "release" && keyToSend == "h") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_H,0);
	}

	if (type == "press" && keyToSend == "I") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_I,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "I") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_I,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "i") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_I,0);
	}
	if (type == "release" && keyToSend == "i") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_I,0);
	}

	if (type == "press" && keyToSend == "J") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_J,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "J") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_J,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "j") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_J,0);
	}
	if (type == "release" && keyToSend == "j") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_J,0);
	}

	if (type == "press" && keyToSend == "K") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_K,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "K") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_K,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "k") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_K,0);
	}
	if (type == "release" && keyToSend == "k") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_K,0);
	}

	if (type == "press" && keyToSend == "L") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_L,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "L") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_L,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "l") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_L,0);
	}
	if (type == "release" && keyToSend == "l") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_L,0);
	}

	if (type == "press" && keyToSend == "M") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_M,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "M") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_M,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "m") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_M,0);
	}
	if (type == "release" && keyToSend == "m") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_M,0);
	}

	if (type == "press" && keyToSend == "N") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_N,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "N") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_N,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "n") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_N,0);
	}
	if (type == "release" && keyToSend == "n") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_N,0);
	}

	if (type == "press" && keyToSend == "O") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_O,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "O") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_O,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "o") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_O,0);
	}
	if (type == "release" && keyToSend == "o") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_O,0);
	}

	if (type == "press" && keyToSend == "P") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_P,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "P") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_P,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "p") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_P,0);
	}
	if (type == "release" && keyToSend == "p") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_P,0);
	}

	if (type == "press" && keyToSend == "Q") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Q,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "Q") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Q,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "q") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Q,0);
	}
	if (type == "release" && keyToSend == "q") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Q,0);
	}

	if (type == "press" && keyToSend == "R") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_R,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "R") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_R,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "r") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_R,0);
	}
	if (type == "release" && keyToSend == "r") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_R,0);
	}

	if (type == "press" && keyToSend == "S") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_S,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "S") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_S,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "s") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_S,0);
	}
	if (type == "release" && keyToSend == "s") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_S,0);
	}

	if (type == "press" && keyToSend == "T") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_T,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "T") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_T,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "t") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_T,0);
	}
	if (type == "release" && keyToSend == "t") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_T,0);
	}

	if (type == "press" && keyToSend == "U") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_U,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "U") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_U,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "u") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_U,0);
	}
	if (type == "release" && keyToSend == "u") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_U,0);
	}

	if (type == "press" && keyToSend == "V") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_V,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "V") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_V,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "v") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_V,0);
	}
	if (type == "release" && keyToSend == "v") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_V,0);
	}

	if (type == "press" && keyToSend == "W") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_W,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "W") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_W,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "w") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_W,0);
	}
	if (type == "release" && keyToSend == "w") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_W,0);
	}

	if (type == "press" && keyToSend == "X") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_X,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "X") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_X,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "x") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_X,0);
	}
	if (type == "release" && keyToSend == "x") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_X,0);
	}

	if (type == "press" && keyToSend == "Y") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Y,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "Y") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Y,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "y") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Y,0);
	}
	if (type == "release" && keyToSend == "y") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Y,0);
	}

	if (type == "press" && keyToSend == "Z") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_Z,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "Z") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Z,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "z") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Z,0);
	}
	if (type == "release" && keyToSend == "z") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Z,0);
	}

	if (type == "press" && keyToSend == "BracketLeft") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BracketLeft,0);
	}
	if (type == "release" && keyToSend == "BracketLeft") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BracketLeft,0);
	}

	if (type == "press" && keyToSend == "Backslash") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Backslash,0);
	}
	if (type == "release" && keyToSend == "Backslash") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Backslash,0);
	}

	if (type == "press" && keyToSend == "BracketRight") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BracketRight,0);
	}
	if (type == "release" && keyToSend == "BracketRight") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BracketRight,0);
	}

	if (type == "press" && keyToSend == "AsciiCircum") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AsciiCircum,0);
	}
	if (type == "release" && keyToSend == "AsciiCircum") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AsciiCircum,0);
	}

	if (type == "press" && keyToSend == "Underscore") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Underscore,0);
	}
	if (type == "release" && keyToSend == "Underscore") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Underscore,0);
	}

	if (type == "press" && keyToSend == "QuoteLeft") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_QuoteLeft,0);
	}
	if (type == "release" && keyToSend == "QuoteLeft") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_QuoteLeft,0);
	}

	if (type == "press" && keyToSend == "BraceLeft") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BraceLeft,0);
	}
	if (type == "release" && keyToSend == "BraceLeft") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BraceLeft,0);
	}

	if (type == "press" && keyToSend == "Bar") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Bar,0);
	}
	if (type == "release" && keyToSend == "Bar") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Bar,0);
	}

	if (type == "press" && keyToSend == "BraceRight") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BraceRight,0);
	}
	if (type == "release" && keyToSend == "BraceRight") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BraceRight,0);
	}

	if (type == "press" && keyToSend == "AsciiTilde") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AsciiTilde,0);
	}
	if (type == "release" && keyToSend == "AsciiTilde") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AsciiTilde,0);
	}

	if (type == "press" && keyToSend == "nobreakspace") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_nobreakspace,0);
	}
	if (type == "release" && keyToSend == "nobreakspace") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_nobreakspace,0);
	}

	if (type == "press" && keyToSend == "exclamdown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_exclamdown,0);
	}
	if (type == "release" && keyToSend == "exclamdown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_exclamdown,0);
	}

	if (type == "press" && keyToSend == "cent") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_cent,0);
	}
	if (type == "release" && keyToSend == "cent") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_cent,0);
	}

	if (type == "press" && keyToSend == "sterling") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_sterling,0);
	}
	if (type == "release" && keyToSend == "sterling") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_sterling,0);
	}

	if (type == "press" && keyToSend == "currency") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_currency,0);
	}
	if (type == "release" && keyToSend == "currency") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_currency,0);
	}

	if (type == "press" && keyToSend == "yen") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_yen,0);
	}
	if (type == "release" && keyToSend == "yen") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_yen,0);
	}

	if (type == "press" && keyToSend == "brokenbar") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_brokenbar,0);
	}
	if (type == "release" && keyToSend == "brokenbar") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_brokenbar,0);
	}

	if (type == "press" && keyToSend == "section") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_section,0);
	}
	if (type == "release" && keyToSend == "section") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_section,0);
	}

	if (type == "press" && keyToSend == "diaeresis") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_diaeresis,0);
	}
	if (type == "release" && keyToSend == "diaeresis") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_diaeresis,0);
	}

	if (type == "press" && keyToSend == "copyright") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_copyright,0);
	}
	if (type == "release" && keyToSend == "copyright") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_copyright,0);
	}

	if (type == "press" && keyToSend == "ordfeminine") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ordfeminine,0);
	}
	if (type == "release" && keyToSend == "ordfeminine") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ordfeminine,0);
	}

	if (type == "press" && keyToSend == "guillemotleft") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_guillemotleft,0);
	}
	if (type == "release" && keyToSend == "guillemotleft") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_guillemotleft,0);
	}

	if (type == "press" && keyToSend == "notsign") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_notsign,0);
	}
	if (type == "release" && keyToSend == "notsign") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_notsign,0);
	}

	if (type == "press" && keyToSend == "hyphen") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_hyphen,0);
	}
	if (type == "release" && keyToSend == "hyphen") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_hyphen,0);
	}

	if (type == "press" && keyToSend == "registered") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_registered,0);
	}
	if (type == "release" && keyToSend == "registered") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_registered,0);
	}

	if (type == "press" && keyToSend == "macron") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_macron,0);
	}
	if (type == "release" && keyToSend == "macron") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_macron,0);
	}

	if (type == "press" && keyToSend == "degree") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_degree,0);
	}
	if (type == "release" && keyToSend == "degree") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_degree,0);
	}

	if (type == "press" && keyToSend == "plusminus") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_plusminus,0);
	}
	if (type == "release" && keyToSend == "plusminus") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_plusminus,0);
	}

	if (type == "press" && keyToSend == "twosuperior") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_twosuperior,0);
	}
	if (type == "release" && keyToSend == "twosuperior") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_twosuperior,0);
	}

	if (type == "press" && keyToSend == "threesuperior") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_threesuperior,0);
	}
	if (type == "release" && keyToSend == "threesuperior") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_threesuperior,0);
	}

	if (type == "press" && keyToSend == "acute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_acute,0);
	}
	if (type == "release" && keyToSend == "acute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_acute,0);
	}

	if (type == "press" && keyToSend == "mu") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_mu,0);
	}
	if (type == "release" && keyToSend == "mu") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_mu,0);
	}

	if (type == "press" && keyToSend == "paragraph") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_paragraph,0);
	}
	if (type == "release" && keyToSend == "paragraph") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_paragraph,0);
	}

	if (type == "press" && keyToSend == "periodcentered") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_periodcentered,0);
	}
	if (type == "release" && keyToSend == "periodcentered") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_periodcentered,0);
	}

	if (type == "press" && keyToSend == "cedilla") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_cedilla,0);
	}
	if (type == "release" && keyToSend == "cedilla") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_cedilla,0);
	}

	if (type == "press" && keyToSend == "onesuperior") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_onesuperior,0);
	}
	if (type == "release" && keyToSend == "onesuperior") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_onesuperior,0);
	}

	if (type == "press" && keyToSend == "masculine") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_masculine,0);
	}
	if (type == "release" && keyToSend == "masculine") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_masculine,0);
	}

	if (type == "press" && keyToSend == "guillemotright") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_guillemotright,0);
	}
	if (type == "release" && keyToSend == "guillemotright") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_guillemotright,0);
	}

	if (type == "press" && keyToSend == "onequarter") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_onequarter,0);
	}
	if (type == "release" && keyToSend == "onequarter") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_onequarter,0);
	}

	if (type == "press" && keyToSend == "onehalf") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_onehalf,0);
	}
	if (type == "release" && keyToSend == "onehalf") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_onehalf,0);
	}

	if (type == "press" && keyToSend == "threequarters") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_threequarters,0);
	}
	if (type == "release" && keyToSend == "threequarters") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_threequarters,0);
	}

	if (type == "press" && keyToSend == "questiondown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_questiondown,0);
	}
	if (type == "release" && keyToSend == "questiondown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_questiondown,0);
	}

	if (type == "press" && keyToSend == "Agrave") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Agrave,0);
	}
	if (type == "release" && keyToSend == "Agrave") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Agrave,0);
	}

	if (type == "press" && keyToSend == "Aacute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Aacute,0);
	}
	if (type == "release" && keyToSend == "Aacute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Aacute,0);
	}

	if (type == "press" && keyToSend == "Acircumflex") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Acircumflex,0);
	}
	if (type == "release" && keyToSend == "Acircumflex") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Acircumflex,0);
	}

	if (type == "press" && keyToSend == "Atilde") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Atilde,0);
	}
	if (type == "release" && keyToSend == "Atilde") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Atilde,0);
	}

	if (type == "press" && keyToSend == "Adiaeresis") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Adiaeresis,0);
	}
	if (type == "release" && keyToSend == "Adiaeresis") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Adiaeresis,0);
	}

	if (type == "press" && keyToSend == "Aring") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Aring,0);
	}
	if (type == "release" && keyToSend == "Aring") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Aring,0);
	}

	if (type == "press" && keyToSend == "AE") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AE,0);
	}
	if (type == "release" && keyToSend == "AE") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AE,0);
	}

	if (type == "press" && keyToSend == "Ccedilla") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ccedilla,0);
	}
	if (type == "release" && keyToSend == "Ccedilla") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ccedilla,0);
	}

	if (type == "press" && keyToSend == "Egrave") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Egrave,0);
	}
	if (type == "release" && keyToSend == "Egrave") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Egrave,0);
	}

	if (type == "press" && keyToSend == "Eacute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Eacute,0);
	}
	if (type == "release" && keyToSend == "Eacute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Eacute,0);
	}

	if (type == "press" && keyToSend == "Ecircumflex") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ecircumflex,0);
	}
	if (type == "release" && keyToSend == "Ecircumflex") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ecircumflex,0);
	}

	if (type == "press" && keyToSend == "Ediaeresis") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ediaeresis,0);
	}
	if (type == "release" && keyToSend == "Ediaeresis") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ediaeresis,0);
	}

	if (type == "press" && keyToSend == "Igrave") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Igrave,0);
	}
	if (type == "release" && keyToSend == "Igrave") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Igrave,0);
	}

	if (type == "press" && keyToSend == "Iacute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Iacute,0);
	}
	if (type == "release" && keyToSend == "Iacute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Iacute,0);
	}

	if (type == "press" && keyToSend == "Icircumflex") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Icircumflex,0);
	}
	if (type == "release" && keyToSend == "Icircumflex") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Icircumflex,0);
	}

	if (type == "press" && keyToSend == "Idiaeresis") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Idiaeresis,0);
	}
	if (type == "release" && keyToSend == "Idiaeresis") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Idiaeresis,0);
	}

	if (type == "press" && keyToSend == "ETH") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ETH,0);
	}
	if (type == "release" && keyToSend == "ETH") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ETH,0);
	}

	if (type == "press" && keyToSend == "Ntilde") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ntilde,0);
	}
	if (type == "release" && keyToSend == "Ntilde") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ntilde,0);
	}

	if (type == "press" && keyToSend == "Ograve") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ograve,0);
	}
	if (type == "release" && keyToSend == "Ograve") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ograve,0);
	}

	if (type == "press" && keyToSend == "Oacute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Oacute,0);
	}
	if (type == "release" && keyToSend == "Oacute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Oacute,0);
	}

	if (type == "press" && keyToSend == "Ocircumflex") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ocircumflex,0);
	}
	if (type == "release" && keyToSend == "Ocircumflex") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ocircumflex,0);
	}

	if (type == "press" && keyToSend == "Otilde") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Otilde,0);
	}
	if (type == "release" && keyToSend == "Otilde") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Otilde,0);
	}

	if (type == "press" && keyToSend == "Odiaeresis") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Odiaeresis,0);
	}
	if (type == "release" && keyToSend == "Odiaeresis") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Odiaeresis,0);
	}

	if (type == "press" && keyToSend == "multiply") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_multiply,0);
	}
	if (type == "release" && keyToSend == "multiply") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_multiply,0);
	}

	if (type == "press" && keyToSend == "Ooblique") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ooblique,0);
	}
	if (type == "release" && keyToSend == "Ooblique") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ooblique,0);
	}

	if (type == "press" && keyToSend == "Ugrave") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ugrave,0);
	}
	if (type == "release" && keyToSend == "Ugrave") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ugrave,0);
	}

	if (type == "press" && keyToSend == "Uacute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Uacute,0);
	}
	if (type == "release" && keyToSend == "Uacute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Uacute,0);
	}

	if (type == "press" && keyToSend == "Ucircumflex") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Ucircumflex,0);
	}
	if (type == "release" && keyToSend == "Ucircumflex") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Ucircumflex,0);
	}

	if (type == "press" && keyToSend == "Udiaeresis") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Udiaeresis,0);
	}
	if (type == "release" && keyToSend == "Udiaeresis") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Udiaeresis,0);
	}

	if (type == "press" && keyToSend == "Yacute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Yacute,0);
	}
	if (type == "release" && keyToSend == "Yacute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Yacute,0);
	}

	if (type == "press" && keyToSend == "THORN") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_THORN,0);
	}
	if (type == "release" && keyToSend == "THORN") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_THORN,0);
	}

	if (type == "press" && keyToSend == "ssharp") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ssharp,0);
	}
	if (type == "release" && keyToSend == "ssharp") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ssharp,0);
	}

	if (type == "press" && keyToSend == "division") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_division,0);
	}
	if (type == "release" && keyToSend == "division") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_division,0);
	}

	if (type == "press" && keyToSend == "ydiaeresis") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ydiaeresis,0);
	}
	if (type == "release" && keyToSend == "ydiaeresis") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ydiaeresis,0);
	}

	if (type == "press" && keyToSend == "Multi_key") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Multi_key,0);
	}
	if (type == "release" && keyToSend == "Multi_key") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Multi_key,0);
	}

	if (type == "press" && keyToSend == "Codeinput") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Codeinput,0);
	}
	if (type == "release" && keyToSend == "Codeinput") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Codeinput,0);
	}

	if (type == "press" && keyToSend == "SingleCandidate") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_SingleCandidate,0);
	}
	if (type == "release" && keyToSend == "SingleCandidate") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_SingleCandidate,0);
	}

	if (type == "press" && keyToSend == "MultipleCandidate") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MultipleCandidate,0);
	}
	if (type == "release" && keyToSend == "MultipleCandidate") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MultipleCandidate,0);
	}

	if (type == "press" && keyToSend == "PreviousCandidate") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_PreviousCandidate,0);
	}
	if (type == "release" && keyToSend == "PreviousCandidate") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PreviousCandidate,0);
	}

	if (type == "press" && keyToSend == "Mode_switch") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Mode_switch,0);
	}
	if (type == "release" && keyToSend == "Mode_switch") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Mode_switch,0);
	}

	if (type == "press" && keyToSend == "Kanji") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Kanji,0);
	}
	if (type == "release" && keyToSend == "Kanji") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Kanji,0);
	}

	if (type == "press" && keyToSend == "Muhenkan") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Muhenkan,0);
	}
	if (type == "release" && keyToSend == "Muhenkan") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Muhenkan,0);
	}

	if (type == "press" && keyToSend == "Henkan") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Henkan,0);
	}
	if (type == "release" && keyToSend == "Henkan") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Henkan,0);
	}

	if (type == "press" && keyToSend == "Romaji") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Romaji,0);
	}
	if (type == "release" && keyToSend == "Romaji") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Romaji,0);
	}

	if (type == "press" && keyToSend == "Hiragana") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hiragana,0);
	}
	if (type == "release" && keyToSend == "Hiragana") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hiragana,0);
	}

	if (type == "press" && keyToSend == "Katakana") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Katakana,0);
	}
	if (type == "release" && keyToSend == "Katakana") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Katakana,0);
	}

	if (type == "press" && keyToSend == "Hiragana_Katakana") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hiragana_Katakana,0);
	}
	if (type == "release" && keyToSend == "Hiragana_Katakana") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hiragana_Katakana,0);
	}

	if (type == "press" && keyToSend == "Zenkaku") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Zenkaku,0);
	}
	if (type == "release" && keyToSend == "Zenkaku") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Zenkaku,0);
	}

	if (type == "press" && keyToSend == "Hankaku") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hankaku,0);
	}
	if (type == "release" && keyToSend == "Hankaku") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hankaku,0);
	}

	if (type == "press" && keyToSend == "Zenkaku_Hankaku") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Zenkaku_Hankaku,0);
	}
	if (type == "release" && keyToSend == "Zenkaku_Hankaku") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Zenkaku_Hankaku,0);
	}

	if (type == "press" && keyToSend == "Touroku") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Touroku,0);
	}
	if (type == "release" && keyToSend == "Touroku") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Touroku,0);
	}

	if (type == "press" && keyToSend == "Massyo") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Massyo,0);
	}
	if (type == "release" && keyToSend == "Massyo") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Massyo,0);
	}

	if (type == "press" && keyToSend == "Kana_Lock") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Kana_Lock,0);
	}
	if (type == "release" && keyToSend == "Kana_Lock") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Kana_Lock,0);
	}

	if (type == "press" && keyToSend == "Kana_Shift") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Kana_Shift,0);
	}
	if (type == "release" && keyToSend == "Kana_Shift") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Kana_Shift,0);
	}

	if (type == "press" && keyToSend == "Eisu_Shift") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Eisu_Shift,0);
	}
	if (type == "release" && keyToSend == "Eisu_Shift") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Eisu_Shift,0);
	}

	if (type == "press" && keyToSend == "Eisu_toggle") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Eisu_toggle,0);
	}
	if (type == "release" && keyToSend == "Eisu_toggle") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Eisu_toggle,0);
	}

	if (type == "press" && keyToSend == "Hangul") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul,0);
	}
	if (type == "release" && keyToSend == "Hangul") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul,0);
	}

	if (type == "press" && keyToSend == "Hangul_Start") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Start,0);
	}
	if (type == "release" && keyToSend == "Hangul_Start") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Start,0);
	}

	if (type == "press" && keyToSend == "Hangul_End") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_End,0);
	}
	if (type == "release" && keyToSend == "Hangul_End") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_End,0);
	}

	if (type == "press" && keyToSend == "Hangul_Hanja") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Hanja,0);
	}
	if (type == "release" && keyToSend == "Hangul_Hanja") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Hanja,0);
	}

	if (type == "press" && keyToSend == "Hangul_Jamo") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Jamo,0);
	}
	if (type == "release" && keyToSend == "Hangul_Jamo") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Jamo,0);
	}

	if (type == "press" && keyToSend == "Hangul_Romaja") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Romaja,0);
	}
	if (type == "release" && keyToSend == "Hangul_Romaja") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Romaja,0);
	}

	if (type == "press" && keyToSend == "Hangul_Jeonja") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Jeonja,0);
	}
	if (type == "release" && keyToSend == "Hangul_Jeonja") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Jeonja,0);
	}

	if (type == "press" && keyToSend == "Hangul_Banja") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Banja,0);
	}
	if (type == "release" && keyToSend == "Hangul_Banja") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Banja,0);
	}

	if (type == "press" && keyToSend == "Hangul_PreHanja") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_PreHanja,0);
	}
	if (type == "release" && keyToSend == "Hangul_PreHanja") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_PreHanja,0);
	}

	if (type == "press" && keyToSend == "Hangul_PostHanja") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_PostHanja,0);
	}
	if (type == "release" && keyToSend == "Hangul_PostHanja") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_PostHanja,0);
	}

	if (type == "press" && keyToSend == "Hangul_Special") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangul_Special,0);
	}
	if (type == "release" && keyToSend == "Hangul_Special") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangul_Special,0);
	}

	if (type == "press" && keyToSend == "Dead_Grave") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Grave,0);
	}
	if (type == "release" && keyToSend == "Dead_Grave") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Grave,0);
	}

	if (type == "press" && keyToSend == "Dead_Acute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Acute,0);
	}
	if (type == "release" && keyToSend == "Dead_Acute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Acute,0);
	}

	if (type == "press" && keyToSend == "Dead_Circumflex") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Circumflex,0);
	}
	if (type == "release" && keyToSend == "Dead_Circumflex") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Circumflex,0);
	}

	if (type == "press" && keyToSend == "Dead_Tilde") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Tilde,0);
	}
	if (type == "release" && keyToSend == "Dead_Tilde") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Tilde,0);
	}

	if (type == "press" && keyToSend == "Dead_Macron") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Macron,0);
	}
	if (type == "release" && keyToSend == "Dead_Macron") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Macron,0);
	}

	if (type == "press" && keyToSend == "Dead_Breve") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Breve,0);
	}
	if (type == "release" && keyToSend == "Dead_Breve") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Breve,0);
	}

	if (type == "press" && keyToSend == "Dead_Abovedot") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Abovedot,0);
	}
	if (type == "release" && keyToSend == "Dead_Abovedot") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Abovedot,0);
	}

	if (type == "press" && keyToSend == "Dead_Diaeresis") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Diaeresis,0);
	}
	if (type == "release" && keyToSend == "Dead_Diaeresis") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Diaeresis,0);
	}

	if (type == "press" && keyToSend == "Dead_Abovering") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Abovering,0);
	}
	if (type == "release" && keyToSend == "Dead_Abovering") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Abovering,0);
	}

	if (type == "press" && keyToSend == "Dead_Doubleacute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Doubleacute,0);
	}
	if (type == "release" && keyToSend == "Dead_Doubleacute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Doubleacute,0);
	}

	if (type == "press" && keyToSend == "Dead_Caron") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Caron,0);
	}
	if (type == "release" && keyToSend == "Dead_Caron") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Caron,0);
	}

	if (type == "press" && keyToSend == "Dead_Cedilla") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Cedilla,0);
	}
	if (type == "release" && keyToSend == "Dead_Cedilla") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Cedilla,0);
	}

	if (type == "press" && keyToSend == "Dead_Ogonek") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Ogonek,0);
	}
	if (type == "release" && keyToSend == "Dead_Ogonek") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Ogonek,0);
	}

	if (type == "press" && keyToSend == "Dead_Iota") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Iota,0);
	}
	if (type == "release" && keyToSend == "Dead_Iota") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Iota,0);
	}

	if (type == "press" && keyToSend == "Dead_Voiced_Sound") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Voiced_Sound,0);
	}
	if (type == "release" && keyToSend == "Dead_Voiced_Sound") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Voiced_Sound,0);
	}

	if (type == "press" && keyToSend == "Dead_Semivoiced_Sound") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Semivoiced_Sound,0);
	}
	if (type == "release" && keyToSend == "Dead_Semivoiced_Sound") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Semivoiced_Sound,0);
	}

	if (type == "press" && keyToSend == "Dead_Belowdot") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Belowdot,0);
	}
	if (type == "release" && keyToSend == "Dead_Belowdot") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Belowdot,0);
	}

	if (type == "press" && keyToSend == "Dead_Hook") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Hook,0);
	}
	if (type == "release" && keyToSend == "Dead_Hook") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Hook,0);
	}

	if (type == "press" && keyToSend == "Dead_Horn") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Dead_Horn,0);
	}
	if (type == "release" && keyToSend == "Dead_Horn") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Dead_Horn,0);
	}

	if (type == "press" && keyToSend == "Back") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Back,0);
	}
	if (type == "release" && keyToSend == "Back") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Back,0);
	}

	if (type == "press" && keyToSend == "Forward") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Forward,0);
	}
	if (type == "release" && keyToSend == "Forward") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Forward,0);
	}

	if (type == "press" && keyToSend == "Stop") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Stop,0);
	}
	if (type == "release" && keyToSend == "Stop") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Stop,0);
	}

	if (type == "press" && keyToSend == "Refresh") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Refresh,0);
	}
	if (type == "release" && keyToSend == "Refresh") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Refresh,0);
	}

	if (type == "press" && keyToSend == "VolumeDown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_VolumeDown,0);
	}
	if (type == "release" && keyToSend == "VolumeDown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_VolumeDown,0);
	}

	if (type == "press" && keyToSend == "VolumeMute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_VolumeMute,0);
	}
	if (type == "release" && keyToSend == "VolumeMute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_VolumeMute,0);
	}

	if (type == "press" && keyToSend == "VolumeUp") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_VolumeUp,0);
	}
	if (type == "release" && keyToSend == "VolumeUp") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_VolumeUp,0);
	}

	if (type == "press" && keyToSend == "BassBoost") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BassBoost,0);
	}
	if (type == "release" && keyToSend == "BassBoost") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BassBoost,0);
	}

	if (type == "press" && keyToSend == "BassUp") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BassUp,0);
	}
	if (type == "release" && keyToSend == "BassUp") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BassUp,0);
	}

	if (type == "press" && keyToSend == "BassDown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BassDown,0);
	}
	if (type == "release" && keyToSend == "BassDown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BassDown,0);
	}

	if (type == "press" && keyToSend == "TrebleUp") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_TrebleUp,0);
	}
	if (type == "release" && keyToSend == "TrebleUp") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_TrebleUp,0);
	}

	if (type == "press" && keyToSend == "TrebleDown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_TrebleDown,0);
	}
	if (type == "release" && keyToSend == "TrebleDown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_TrebleDown,0);
	}

	if (type == "press" && keyToSend == "MediaPlay") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaPlay,0);
	}
	if (type == "release" && keyToSend == "MediaPlay") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaPlay,0);
	}

	if (type == "press" && keyToSend == "MediaStop") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaStop,0);
	}
	if (type == "release" && keyToSend == "MediaStop") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaStop,0);
	}

	if (type == "press" && keyToSend == "MediaPrevious") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaPrevious,0);
	}
	if (type == "release" && keyToSend == "MediaPrevious") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaPrevious,0);
	}

	if (type == "press" && keyToSend == "MediaNext") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaNext,0);
	}
	if (type == "release" && keyToSend == "MediaNext") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaNext,0);
	}

	if (type == "press" && keyToSend == "MediaRecord") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaRecord,0);
	}
	if (type == "release" && keyToSend == "MediaRecord") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaRecord,0);
	}

	if (type == "press" && keyToSend == "MediaPause") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaPause,0);
	}
	if (type == "release" && keyToSend == "MediaPause") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaPause,0);
	}

	if (type == "press" && keyToSend == "MediaTogglePlayPause") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaTogglePlayPause,0);
	}
	if (type == "release" && keyToSend == "MediaTogglePlayPause") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaTogglePlayPause,0);
	}

	if (type == "press" && keyToSend == "HomePage") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_HomePage,0);
	}
	if (type == "release" && keyToSend == "HomePage") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_HomePage,0);
	}

	if (type == "press" && keyToSend == "Favorites") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Favorites,0);
	}
	if (type == "release" && keyToSend == "Favorites") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Favorites,0);
	}

	if (type == "press" && keyToSend == "Search") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Search,0);
	}
	if (type == "release" && keyToSend == "Search") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Search,0);
	}

	if (type == "press" && keyToSend == "Standby") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Standby,0);
	}
	if (type == "release" && keyToSend == "Standby") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Standby,0);
	}

	if (type == "press" && keyToSend == "OpenUrl") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_OpenUrl,0);
	}
	if (type == "release" && keyToSend == "OpenUrl") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_OpenUrl,0);
	}

	if (type == "press" && keyToSend == "LaunchMail") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchMail,0);
	}
	if (type == "release" && keyToSend == "LaunchMail") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchMail,0);
	}

	if (type == "press" && keyToSend == "LaunchMedia") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchMedia,0);
	}
	if (type == "release" && keyToSend == "LaunchMedia") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchMedia,0);
	}

	if (type == "press" && keyToSend == "Launch0") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch0,0);
	}
	if (type == "release" && keyToSend == "Launch0") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch0,0);
	}

	if (type == "press" && keyToSend == "Launch1") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch1,0);
	}
	if (type == "release" && keyToSend == "Launch1") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch1,0);
	}

	if (type == "press" && keyToSend == "Launch2") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch2,0);
	}
	if (type == "release" && keyToSend == "Launch2") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch2,0);
	}

	if (type == "press" && keyToSend == "Launch3") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch3,0);
	}
	if (type == "release" && keyToSend == "Launch3") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch3,0);
	}

	if (type == "press" && keyToSend == "Launch4") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch4,0);
	}
	if (type == "release" && keyToSend == "Launch4") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch4,0);
	}

	if (type == "press" && keyToSend == "Launch5") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch5,0);
	}
	if (type == "release" && keyToSend == "Launch5") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch5,0);
	}

	if (type == "press" && keyToSend == "Launch6") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch6,0);
	}
	if (type == "release" && keyToSend == "Launch6") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch6,0);
	}

	if (type == "press" && keyToSend == "Launch7") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch7,0);
	}
	if (type == "release" && keyToSend == "Launch7") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch7,0);
	}

	if (type == "press" && keyToSend == "Launch8") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch8,0);
	}
	if (type == "release" && keyToSend == "Launch8") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch8,0);
	}

	if (type == "press" && keyToSend == "Launch9") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch9,0);
	}
	if (type == "release" && keyToSend == "Launch9") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch9,0);
	}

	if (type == "press" && keyToSend == "LaunchA") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchA,0);
	}
	if (type == "release" && keyToSend == "LaunchA") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchA,0);
	}

	if (type == "press" && keyToSend == "LaunchB") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchB,0);
	}
	if (type == "release" && keyToSend == "LaunchB") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchB,0);
	}

	if (type == "press" && keyToSend == "LaunchC") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchC,0);
	}
	if (type == "release" && keyToSend == "LaunchC") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchC,0);
	}

	if (type == "press" && keyToSend == "LaunchD") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchD,0);
	}
	if (type == "release" && keyToSend == "LaunchD") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchD,0);
	}

	if (type == "press" && keyToSend == "LaunchE") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchE,0);
	}
	if (type == "release" && keyToSend == "LaunchE") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchE,0);
	}

	if (type == "press" && keyToSend == "LaunchF") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchF,0);
	}
	if (type == "release" && keyToSend == "LaunchF") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchF,0);
	}

	if (type == "press" && keyToSend == "LaunchG") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchG,0);
	}
	if (type == "release" && keyToSend == "LaunchG") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchG,0);
	}

	if (type == "press" && keyToSend == "LaunchH") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LaunchH,0);
	}
	if (type == "release" && keyToSend == "LaunchH") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LaunchH,0);
	}

	if (type == "press" && keyToSend == "MonBrightnessUp") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MonBrightnessUp,0);
	}
	if (type == "release" && keyToSend == "MonBrightnessUp") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MonBrightnessUp,0);
	}

	if (type == "press" && keyToSend == "MonBrightnessDown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MonBrightnessDown,0);
	}
	if (type == "release" && keyToSend == "MonBrightnessDown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MonBrightnessDown,0);
	}

	if (type == "press" && keyToSend == "KeyboardLightOnOff") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_KeyboardLightOnOff,0);
	}
	if (type == "release" && keyToSend == "KeyboardLightOnOff") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_KeyboardLightOnOff,0);
	}

	if (type == "press" && keyToSend == "KeyboardBrightnessUp") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_KeyboardBrightnessUp,0);
	}
	if (type == "release" && keyToSend == "KeyboardBrightnessUp") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_KeyboardBrightnessUp,0);
	}

	if (type == "press" && keyToSend == "KeyboardBrightnessDown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_KeyboardBrightnessDown,0);
	}
	if (type == "release" && keyToSend == "KeyboardBrightnessDown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_KeyboardBrightnessDown,0);
	}

	if (type == "press" && keyToSend == "PowerOff") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_PowerOff,0);
	}
	if (type == "release" && keyToSend == "PowerOff") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PowerOff,0);
	}

	if (type == "press" && keyToSend == "WakeUp") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_WakeUp,0);
	}
	if (type == "release" && keyToSend == "WakeUp") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_WakeUp,0);
	}

	if (type == "press" && keyToSend == "Eject") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Eject,0);
	}
	if (type == "release" && keyToSend == "Eject") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Eject,0);
	}

	if (type == "press" && keyToSend == "ScreenSaver") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ScreenSaver,0);
	}
	if (type == "release" && keyToSend == "ScreenSaver") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ScreenSaver,0);
	}

	if (type == "press" && keyToSend == "WWW") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_WWW,0);
	}
	if (type == "release" && keyToSend == "WWW") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_WWW,0);
	}

	if (type == "press" && keyToSend == "Memo") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Memo,0);
	}
	if (type == "release" && keyToSend == "Memo") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Memo,0);
	}

	if (type == "press" && keyToSend == "LightBulb") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LightBulb,0);
	}
	if (type == "release" && keyToSend == "LightBulb") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LightBulb,0);
	}

	if (type == "press" && keyToSend == "Shop") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Shop,0);
	}
	if (type == "release" && keyToSend == "Shop") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Shop,0);
	}

	if (type == "press" && keyToSend == "History") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_History,0);
	}
	if (type == "release" && keyToSend == "History") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_History,0);
	}

	if (type == "press" && keyToSend == "AddFavorite") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AddFavorite,0);
	}
	if (type == "release" && keyToSend == "AddFavorite") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AddFavorite,0);
	}

	if (type == "press" && keyToSend == "HotLinks") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_HotLinks,0);
	}
	if (type == "release" && keyToSend == "HotLinks") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_HotLinks,0);
	}

	if (type == "press" && keyToSend == "BrightnessAdjust") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BrightnessAdjust,0);
	}
	if (type == "release" && keyToSend == "BrightnessAdjust") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BrightnessAdjust,0);
	}

	if (type == "press" && keyToSend == "Finance") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Finance,0);
	}
	if (type == "release" && keyToSend == "Finance") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Finance,0);
	}

	if (type == "press" && keyToSend == "Community") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Community,0);
	}
	if (type == "release" && keyToSend == "Community") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Community,0);
	}

	if (type == "press" && keyToSend == "AudioRewind") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioRewind,0);
	}
	if (type == "release" && keyToSend == "AudioRewind") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioRewind,0);
	}

	if (type == "press" && keyToSend == "BackForward") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_BackForward,0);
	}
	if (type == "release" && keyToSend == "BackForward") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_BackForward,0);
	}

	if (type == "press" && keyToSend == "ApplicationLeft") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ApplicationLeft,0);
	}
	if (type == "release" && keyToSend == "ApplicationLeft") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ApplicationLeft,0);
	}

	if (type == "press" && keyToSend == "ApplicationRight") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ApplicationRight,0);
	}
	if (type == "release" && keyToSend == "ApplicationRight") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ApplicationRight,0);
	}

	if (type == "press" && keyToSend == "Book") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Book,0);
	}
	if (type == "release" && keyToSend == "Book") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Book,0);
	}

	if (type == "press" && keyToSend == "CD") {
		return new QKeyEvent(QEvent::KeyPress,Qt::Key_CD,Qt::ShiftModifier);
	}
	if (type == "release" && keyToSend == "CD") {
		return new QKeyEvent(QEvent::KeyRelease,Qt::Key_CD,Qt::ShiftModifier);
	}

	if (type == "press" && keyToSend == "cd") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_CD,0);
	}
	if (type == "release" && keyToSend == "cd") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_CD,0);
	}

	if (type == "press" && keyToSend == "Calculator") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Calculator,0);
	}
	if (type == "release" && keyToSend == "Calculator") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Calculator,0);
	}

	if (type == "press" && keyToSend == "Launch1") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Launch1,0);
	}
	if (type == "release" && keyToSend == "Launch1") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Launch1,0);
	}

	if (type == "press" && keyToSend == "ToDoList") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ToDoList,0);
	}
	if (type == "release" && keyToSend == "ToDoList") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ToDoList,0);
	}

	if (type == "press" && keyToSend == "ClearGrab") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ClearGrab,0);
	}
	if (type == "release" && keyToSend == "ClearGrab") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ClearGrab,0);
	}

	if (type == "press" && keyToSend == "Close") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Close,0);
	}
	if (type == "release" && keyToSend == "Close") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Close,0);
	}

	if (type == "press" && keyToSend == "Copy") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Copy,0);
	}
	if (type == "release" && keyToSend == "Copy") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Copy,0);
	}

	if (type == "press" && keyToSend == "Cut") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Cut,0);
	}
	if (type == "release" && keyToSend == "Cut") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Cut,0);
	}

	if (type == "press" && keyToSend == "Display") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Display,0);
	}
	if (type == "release" && keyToSend == "Display") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Display,0);
	}

	if (type == "press" && keyToSend == "DOS") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_DOS,0);
	}
	if (type == "release" && keyToSend == "DOS") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_DOS,0);
	}

	if (type == "press" && keyToSend == "Documents") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Documents,0);
	}
	if (type == "release" && keyToSend == "Documents") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Documents,0);
	}

	if (type == "press" && keyToSend == "Excel") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Excel,0);
	}
	if (type == "release" && keyToSend == "Excel") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Excel,0);
	}

	if (type == "press" && keyToSend == "Explorer") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Explorer,0);
	}
	if (type == "release" && keyToSend == "Explorer") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Explorer,0);
	}

	if (type == "press" && keyToSend == "Game") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Game,0);
	}
	if (type == "release" && keyToSend == "Game") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Game,0);
	}

	if (type == "press" && keyToSend == "Go") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Go,0);
	}
	if (type == "release" && keyToSend == "Go") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Go,0);
	}

	if (type == "press" && keyToSend == "iTouch") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_iTouch,0);
	}
	if (type == "release" && keyToSend == "iTouch") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_iTouch,0);
	}

	if (type == "press" && keyToSend == "LogOff") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LogOff,0);
	}
	if (type == "release" && keyToSend == "LogOff") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LogOff,0);
	}

	if (type == "press" && keyToSend == "Market") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Market,0);
	}
	if (type == "release" && keyToSend == "Market") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Market,0);
	}

	if (type == "press" && keyToSend == "Meeting") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Meeting,0);
	}
	if (type == "release" && keyToSend == "Meeting") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Meeting,0);
	}

	if (type == "press" && keyToSend == "MenuKB") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MenuKB,0);
	}
	if (type == "release" && keyToSend == "MenuKB") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MenuKB,0);
	}

	if (type == "press" && keyToSend == "MenuPB") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MenuPB,0);
	}
	if (type == "release" && keyToSend == "MenuPB") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MenuPB,0);
	}

	if (type == "press" && keyToSend == "MySites") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MySites,0);
	}
	if (type == "release" && keyToSend == "MySites") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MySites,0);
	}

	if (type == "press" && keyToSend == "News") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_News,0);
	}
	if (type == "release" && keyToSend == "News") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_News,0);
	}

	if (type == "press" && keyToSend == "OfficeHome") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_OfficeHome,0);
	}
	if (type == "release" && keyToSend == "OfficeHome") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_OfficeHome,0);
	}

	if (type == "press" && keyToSend == "Option") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Option,0);
	}
	if (type == "release" && keyToSend == "Option") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Option,0);
	}

	if (type == "press" && keyToSend == "Paste") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Paste,0);
	}
	if (type == "release" && keyToSend == "Paste") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Paste,0);
	}

	if (type == "press" && keyToSend == "Phone") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Phone,0);
	}
	if (type == "release" && keyToSend == "Phone") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Phone,0);
	}

	if (type == "press" && keyToSend == "Calendar") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Calendar,0);
	}
	if (type == "release" && keyToSend == "Calendar") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Calendar,0);
	}

	if (type == "press" && keyToSend == "Reply") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Reply,0);
	}
	if (type == "release" && keyToSend == "Reply") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Reply,0);
	}

	if (type == "press" && keyToSend == "Reload") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Reload,0);
	}
	if (type == "release" && keyToSend == "Reload") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Reload,0);
	}

	if (type == "press" && keyToSend == "RotateWindows") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_RotateWindows,0);
	}
	if (type == "release" && keyToSend == "RotateWindows") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_RotateWindows,0);
	}

	if (type == "press" && keyToSend == "RotationPB") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_RotationPB,0);
	}
	if (type == "release" && keyToSend == "RotationPB") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_RotationPB,0);
	}

	if (type == "press" && keyToSend == "RotationKB") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_RotationKB,0);
	}
	if (type == "release" && keyToSend == "RotationKB") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_RotationKB,0);
	}

	if (type == "press" && keyToSend == "Save") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Save,0);
	}
	if (type == "release" && keyToSend == "Save") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Save,0);
	}

	if (type == "press" && keyToSend == "Send") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Send,0);
	}
	if (type == "release" && keyToSend == "Send") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Send,0);
	}

	if (type == "press" && keyToSend == "Spell") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Spell,0);
	}
	if (type == "release" && keyToSend == "Spell") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Spell,0);
	}

	if (type == "press" && keyToSend == "SplitScreen") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_SplitScreen,0);
	}
	if (type == "release" && keyToSend == "SplitScreen") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_SplitScreen,0);
	}

	if (type == "press" && keyToSend == "Support") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Support,0);
	}
	if (type == "release" && keyToSend == "Support") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Support,0);
	}

	if (type == "press" && keyToSend == "TaskPane") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_TaskPane,0);
	}
	if (type == "release" && keyToSend == "TaskPane") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_TaskPane,0);
	}

	if (type == "press" && keyToSend == "Terminal") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Terminal,0);
	}
	if (type == "release" && keyToSend == "Terminal") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Terminal,0);
	}

	if (type == "press" && keyToSend == "Tools") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Tools,0);
	}
	if (type == "release" && keyToSend == "Tools") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Tools,0);
	}

	if (type == "press" && keyToSend == "Travel") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Travel,0);
	}
	if (type == "release" && keyToSend == "Travel") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Travel,0);
	}

	if (type == "press" && keyToSend == "Video") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Video,0);
	}
	if (type == "release" && keyToSend == "Video") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Video,0);
	}

	if (type == "press" && keyToSend == "Word") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Word,0);
	}
	if (type == "release" && keyToSend == "Word") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Word,0);
	}

	if (type == "press" && keyToSend == "Xfer") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Xfer,0);
	}
	if (type == "release" && keyToSend == "Xfer") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Xfer,0);
	}

	if (type == "press" && keyToSend == "ZoomIn") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ZoomIn,0);
	}
	if (type == "release" && keyToSend == "ZoomIn") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ZoomIn,0);
	}

	if (type == "press" && keyToSend == "ZoomOut") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ZoomOut,0);
	}
	if (type == "release" && keyToSend == "ZoomOut") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ZoomOut,0);
	}

	if (type == "press" && keyToSend == "Away") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Away,0);
	}
	if (type == "release" && keyToSend == "Away") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Away,0);
	}

	if (type == "press" && keyToSend == "Messenger") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Messenger,0);
	}
	if (type == "release" && keyToSend == "Messenger") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Messenger,0);
	}

	if (type == "press" && keyToSend == "WebCam") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_WebCam,0);
	}
	if (type == "release" && keyToSend == "WebCam") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_WebCam,0);
	}

	if (type == "press" && keyToSend == "MailForward") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MailForward,0);
	}
	if (type == "release" && keyToSend == "MailForward") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MailForward,0);
	}

	if (type == "press" && keyToSend == "Pictures") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Pictures,0);
	}
	if (type == "release" && keyToSend == "Pictures") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Pictures,0);
	}

	if (type == "press" && keyToSend == "Music") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Music,0);
	}
	if (type == "release" && keyToSend == "Music") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Music,0);
	}

	if (type == "press" && keyToSend == "Battery") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Battery,0);
	}
	if (type == "release" && keyToSend == "Battery") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Battery,0);
	}

	if (type == "press" && keyToSend == "Bluetooth") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Bluetooth,0);
	}
	if (type == "release" && keyToSend == "Bluetooth") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Bluetooth,0);
	}

	if (type == "press" && keyToSend == "WLAN") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_WLAN,0);
	}
	if (type == "release" && keyToSend == "WLAN") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_WLAN,0);
	}

	if (type == "press" && keyToSend == "UWB") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_UWB,0);
	}
	if (type == "release" && keyToSend == "UWB") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_UWB,0);
	}

	if (type == "press" && keyToSend == "AudioForward") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioForward,0);
	}
	if (type == "release" && keyToSend == "AudioForward") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioForward,0);
	}

	if (type == "press" && keyToSend == "AudioRepeat") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioRepeat,0);
	}
	if (type == "release" && keyToSend == "AudioRepeat") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioRepeat,0);
	}

	if (type == "press" && keyToSend == "AudioRandomPlay") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioRandomPlay,0);
	}
	if (type == "release" && keyToSend == "AudioRandomPlay") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioRandomPlay,0);
	}

	if (type == "press" && keyToSend == "Subtitle") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Subtitle,0);
	}
	if (type == "release" && keyToSend == "Subtitle") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Subtitle,0);
	}

	if (type == "press" && keyToSend == "AudioCycleTrack") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_AudioCycleTrack,0);
	}
	if (type == "release" && keyToSend == "AudioCycleTrack") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_AudioCycleTrack,0);
	}

	if (type == "press" && keyToSend == "Time") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Time,0);
	}
	if (type == "release" && keyToSend == "Time") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Time,0);
	}

	if (type == "press" && keyToSend == "Hibernate") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hibernate,0);
	}
	if (type == "release" && keyToSend == "Hibernate") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hibernate,0);
	}

	if (type == "press" && keyToSend == "View") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_View,0);
	}
	if (type == "release" && keyToSend == "View") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_View,0);
	}

	if (type == "press" && keyToSend == "TopMenu") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_TopMenu,0);
	}
	if (type == "release" && keyToSend == "TopMenu") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_TopMenu,0);
	}

	if (type == "press" && keyToSend == "PowerDown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_PowerDown,0);
	}
	if (type == "release" && keyToSend == "PowerDown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_PowerDown,0);
	}

	if (type == "press" && keyToSend == "Suspend") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Suspend,0);
	}
	if (type == "release" && keyToSend == "Suspend") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Suspend,0);
	}

	if (type == "press" && keyToSend == "ContrastAdjust") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ContrastAdjust,0);
	}
	if (type == "release" && keyToSend == "ContrastAdjust") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ContrastAdjust,0);
	}

	if (type == "press" && keyToSend == "MediaLast") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_MediaLast,0);
	}
	if (type == "release" && keyToSend == "MediaLast") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_MediaLast,0);
	}

	if (type == "press" && keyToSend == "unknown") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_unknown,0);
	}
	if (type == "release" && keyToSend == "unknown") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_unknown,0);
	}

	if (type == "press" && keyToSend == "Call") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Call,0);
	}
	if (type == "release" && keyToSend == "Call") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Call,0);
	}

	if (type == "press" && keyToSend == "ToggleCallHangup") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ToggleCallHangup,0);
	}
	if (type == "release" && keyToSend == "ToggleCallHangup") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ToggleCallHangup,0);
	}

	if (type == "press" && keyToSend == "Camera") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Camera,0);
	}
	if (type == "release" && keyToSend == "Camera") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Camera,0);
	}

	if (type == "press" && keyToSend == "CameraFocus") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_CameraFocus,0);
	}
	if (type == "release" && keyToSend == "CameraFocus") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_CameraFocus,0);
	}

	if (type == "press" && keyToSend == "Context1") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Context1,0);
	}
	if (type == "release" && keyToSend == "Context1") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Context1,0);
	}

	if (type == "press" && keyToSend == "Context2") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Context2,0);
	}
	if (type == "release" && keyToSend == "Context2") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Context2,0);
	}

	if (type == "press" && keyToSend == "Context3") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Context3,0);
	}
	if (type == "release" && keyToSend == "Context3") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Context3,0);
	}

	if (type == "press" && keyToSend == "Context4") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Context4,0);
	}
	if (type == "release" && keyToSend == "Context4") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Context4,0);
	}

	if (type == "press" && keyToSend == "Flip") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Flip,0);
	}
	if (type == "release" && keyToSend == "Flip") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Flip,0);
	}

	if (type == "press" && keyToSend == "Hangup") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Hangup,0);
	}
	if (type == "release" && keyToSend == "Hangup") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Hangup,0);
	}

	if (type == "press" && keyToSend == "ToggleCallHangup") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ToggleCallHangup,0);
	}
	if (type == "release" && keyToSend == "ToggleCallHangup") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ToggleCallHangup,0);
	}

	if (type == "press" && keyToSend == "No") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_No,0);
	}
	if (type == "release" && keyToSend == "No") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_No,0);
	}

	if (type == "press" && keyToSend == "Select") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Select,0);
	}
	if (type == "release" && keyToSend == "Select") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Select,0);
	}

	if (type == "press" && keyToSend == "Yes") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Yes,0);
	}
	if (type == "release" && keyToSend == "Yes") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Yes,0);
	}

	if (type == "press" && keyToSend == "ToggleCallHangup") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_ToggleCallHangup,0);
	}
	if (type == "release" && keyToSend == "ToggleCallHangup") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_ToggleCallHangup,0);
	}

	if (type == "press" && keyToSend == "VoiceDial") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_VoiceDial,0);
	}
	if (type == "release" && keyToSend == "VoiceDial") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_VoiceDial,0);
	}

	if (type == "press" && keyToSend == "LastNumberRedial") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_LastNumberRedial,0);
	}
	if (type == "release" && keyToSend == "LastNumberRedial") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_LastNumberRedial,0);
	}

	if (type == "press" && keyToSend == "Execute") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Execute,0);
	}
	if (type == "release" && keyToSend == "Execute") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Execute,0);
	}

	if (type == "press" && keyToSend == "Printer") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Printer,0);
	}
	if (type == "release" && keyToSend == "Printer") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Printer,0);
	}

	if (type == "press" && keyToSend == "Play") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Play,0);
	}
	if (type == "release" && keyToSend == "Play") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Play,0);
	}

	if (type == "press" && keyToSend == "Sleep") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Sleep,0);
	}
	if (type == "release" && keyToSend == "Sleep") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Sleep,0);
	}

	if (type == "press" && keyToSend == "Zoom") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Zoom,0);
	}
	if (type == "release" && keyToSend == "Zoom") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Zoom,0);
	}

	if (type == "press" && keyToSend == "Cancel") {
        return new QKeyEvent(QEvent::KeyPress,Qt::Key_Cancel,0);
	}
	if (type == "release" && keyToSend == "Cancel") {
        return new QKeyEvent(QEvent::KeyRelease,Qt::Key_Cancel,0);
	}

    return new QKeyEvent(QEvent::KeyPress,Qt::Key_0,0);
}
#endif // GETKEYCODE_H
