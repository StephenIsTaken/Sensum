#pragma once
#include "../helpers/vfunc.h"
#include <cstdint>

enum class ButtonCode : int32_t {
    ButtonCodeInvalid = -1,
    ButtonCodeNone,
    ButtonCodeFirst = 0,
    KeyFirst = 0,
    KeyNone = 0,
    Key0,
    Key1,
    Key2,
    Key3,
    Key4,
    Key5,
    Key6,
    Key7,
    Key8,
    Key9,
    KeyA,
    KeyB,
    KeyC,
    KeyD,
    KeyE,
    KeyF,
    KeyG,
    KeyH,
    KeyI,
    KeyJ,
    KeyK,
    KeyL,
    KeyM,
    KeyN,
    KeyO,
    KeyP,
    KeyQ,
    KeyR,
    KeyS,
    KeyT,
    KeyU,
    KeyV,
    KeyW,
    KeyX,
    KeyY,
    KeyZ,
    KeyPad0,
    KeyPad1,
    KeyPad2,
    KeyPad3,
    KeyPad4,
    KeyPad5,
    KeyPad6,
    KeyPad7,
    KeyPad8,
    KeyPad9,
    KeyPadDivide,
    KeyPadMultiply,
    KeyPadMinus,
    KeyPadPlus,
    KeyPadEnter,
    KeyPadDecimal,
    KeyLess,
    KeyLbracket,
    KeyRbracket,
    KeySemicolon,
    KeyApostrophe,
    KeyBackQuote,
    KeyComma,
    KeyPeriod,
    KeySlash,
    KeyBackslash,
    KeyMinus,
    KeyEqual,
    KeyEnter,
    KeySpace,
    KeyBackspace,
    KeyTab,
    KeyCapslock,
    KeyNumLock,
    KeyEscape,
    KeyScrollLock,
    KeyInsert,
    KeyDelete,
    KeyHome,
    KeyEnd,
    KeyPageup,
    KeyPagedown,
    KeyBreak,
    KeyLshift,
    KeyRshift,
    KeyLAlt,
    KeyRAlt,
    KeyLControl,
    KeyRControl,
    KeyLWin,
    KeyRWin,
    KeyApp,
    KeyUp,
    KeyLeft,
    KeyDown,
    KeyRight,
    KeyF1,
    KeyF2,
    KeyF3,
    KeyF4,
    KeyF5,
    KeyF6,
    KeyF7,
    KeyF8,
    KeyF9,
    KeyF10,
    KeyF11,
    KeyF12,
    KeyCapsLockToggle,
    KeyNumLockToggle,
    KeyScrollLockToggle,
    KeyAcBack,
    KeyAcBookmarks,
    KeyAcForward,
    KeyAcHome,
    KeyAcRefresh,
    KeyAcSearch,
    KeyAcStop,
    KeyAgain,
    KeyAltErase,
    KeyAmpersand,
    KeyAsterisk,
    KeyAt,
    KeyAudioMute,
    KeyAudioNext,
    KeyAudioPlay,
    KeyAudioPrev,
    KeyAudioStop,
    KeyBrightnessDown,
    KeyBrightnessUp,
    KeyCalculator,
    KeyCancel,
    KeyCaret,
    KeyClear,
    KeyClearAgain,
    KeyColon,
    KeyComputer,
    KeyCopy,
    KeyCrsel,
    KeyCurrencySubunit,
    KeyCurrencyUnit,
    KeyCut,
    KeyDecimalSeparator,
    KeyDisplaySwitch,
    KeyDollar,
    KeyEject,
    KeyExclaim,
    KeyBtnExecute,
    KeyExsel,
    KeyF13,
    KeyF14,
    KeyF15,
    KeyF16,
    KeyF17,
    KeyF18,
    KeyF19,
    KeyF20,
    KeyF21,
    KeyF22,
    KeyF23,
    KeyF24,
    KeyFind,
    KeyGreater,
    KeyHash,
    KeyHelp,
    KeyKbdillumDown,
    KeyKbdillumToggle,
    KeyKbdillumUp,
    KeyKp00,
    KeyKp000,
    KeyKpA,
    KeyKpAmpersand,
    KeyKpAt,
    KeyKpB,
    KeyKpBackspace,
    KeyKpBinary,
    KeyKpC,
    KeyKpClear,
    KeyKpClearEntry,
    KeyKpColon,
    KeyKpComma,
    KeyKpD,
    KeyKpDblAmpersand,
    KeyKpDblVerticalBar,
    KeyKpDecimal,
    KeyKpE,
    KeyKpEquals,
    KeyKpEqualSas400,
    KeyKpExclam,
    KeyKpF,
    KeyKpGreater,
    KeyKpHash,
    KeyKpHexadecimal,
    KeyKpLeftBrace,
    KeyKpLeftParen,
    KeyKpLess,
    KeyKpMemAdd,
    KeyKpMemClear,
    KeyKpMemDivide,
    KeyKpMemMultiply,
    KeyKpMemRecall,
    KeyKpMemStore,
    KeyKpMemSubtract,
    KeyKpOctal,
    KeyKpPercent,
    KeyKpPlusMinus,
    KeyKpPower,
    KeyKpRightBrace,
    KeyKpRightParen,
    KeyKpSpace,
    KeyKpTab,
    KeyKpVerticalBar,
    KeyKpXor,
    KeyLeftParen,
    KeyMail,
    KeyMediaSelect,
    KeyMode,
    KeyMute,
    KeyOper,
    KeyOut,
    KeyPaste,
    KeyPercent,
    KeyPlus,
    KeyPower,
    KeyPrintScreen,
    KeyPrior,
    KeyQuestion,
    KeyQuotedBl,
    KeyReturn2,
    KeyRightParen,
    KeySelect,
    KeySeparator,
    KeySleep,
    KeyStop,
    KeySysReq,
    KeyThousandsSeparator,
    KeyUnderscore,
    KeyUndo,
    KeyVolumeDown,
    KeyVolumeUp,
    KeyWww,
    KeyInvertedExclamationMark,
    KeyCentSign,
    KeyPoundSign,
    KeyCurrencySign,
    KeyYenSign,
    KeyBrokenBar,
    KeySectionSign,
    KeyDiaeresis,
    KeyCopyrightSign,
    KeyFeminineOrdinalIndicator,
    KeyLeftPointingDoubleAngleQuotationMark,
    KeyNotSign,
    KeyRegisteredSign,
    KeyMacron,
    KeyDegreeSymbol,
    KeyPlusMinusSign,
    KeySuperscriptTwo,
    KeySuperscriptThree,
    KeyAcuteAccent,
    KeyMicroSign,
    KeyPilcrowSign,
    KeyMiddleDot,
    KeyCedilla,
    KeySuperscriptOne,
    KeyMasculineOrdinalIndicator,
    KeyRightPointingDoubleAngleQuotationMark,
    KeyVulgarFractionOneQuarter,
    KeyVulgarFractionOneHalf,
    KeyVulgarFractionThreeQuarters,
    KeyInvertedQuestionMark,
    KeyMultiplicationSign,
    KeySharpS,
    KeyAWithGrave,
    KeyAWithAcute,
    KeyAWithCircumflex,
    KeyAWithTilde,
    KeyAWithDiaeresis,
    KeyAWithRingAbove,
    KeyAe,
    KeyCWithCedilla,
    KeyEWithGrave,
    KeyEWithAcute,
    KeyEWithCircumflex,
    KeyEWithDiaeresis,
    KeyIWithGrave,
    KeyIWithAcute,
    KeyIWithCircumflex,
    KeyIWithDiaeresis,
    KeyEth,
    KeyNWithTilde,
    KeyOWithGrave,
    KeyOWithAcute,
    KeyOWithCircumflex,
    KeyOWithTilde,
    KeyOWithDiaeresis,
    KeyDivisionSign,
    KeyOWithStroke,
    KeyUWithGrave,
    KeyUWithAcute,
    KeyUWithCircumflex,
    KeyUWithDiaeresis,
    KeyYWithAcute,
    KeyThorn,
    KeyYWithDiaeresis,
    KeyEuroSign,
    KeyTilde,
    KeyLeftCurlyBracket,
    KeyRightCurlyBracket,
    KeyVerticalBar,
    KeyCyrillicYu,
    KeyCyrillicE,
    KeyCyrillicHardSign,
    KeyCyrillicHa,
    KeyCyrillicIo,
    KeyCyrillicZhe,
    KeyCyrillicBe,
    KeyLast = 0x139,
    MouseFirst,
    MouseLeft = 0x13A,
    MouseRight,
    MouseMiddle,
    MouseBack,
    MouseForward,
    MouseWheelUp,
    MouseWheelDown,
    MouseLast = 0x140,
    MouseCount = 7,
    JoystickFirst = 0x141,
    JoystickFirstButton = 0x141,
    JoystickLastButton = 0x1C0,
    JoystickFirstPovButton,
    JoystickLastPovButton = 0x1D0,
    JoystickFirstAxisButton,
    JoystickLastAxisButton = 0x200,
    JoystickLast = 0x200,
    ButtonCodeCount,
    ButtonCodeLast = 0x200,
    KeyXButtonUp = 0x1C1,
    KeyXButtonRight,
    KeyXButtonDown,
    KeyXButtonLeft,
    KeyXButtonA = 0x141,
    KeyXButtonB,
    KeyXButtonX,
    KeyXButtonY,
    KeyXButtonLeftShoulder,
    KeyXButtonRightShoulder,
    KeyXButtonBack,
    KeyXButtonStart,
    KeyXButtonStick1,
    KeyXButtonStick2,
    KeyXButtonInactiveStart,
    KeyXStick1Right = 0x1D1,
    KeyXStick1Left,
    KeyXStick1Down,
    KeyXStick1Up,
    KeyXButtonLTrigger,
    KeyXButtonRTrigger,
    KeyXStick2Right,
    KeyXStick2Left,
    KeyXStick2Down,
    KeyXStick2Up
};

class CInputSystem
{
public:
	bool IsButtonDown(ButtonCode code)
	{
        return GetVirtual<bool(__thiscall*)(void*, ButtonCode)>(this, 18)(this, code);
	}

    ButtonCode VirtualKeyToButtonCode(int vkey)
    {
        return GetVirtual<ButtonCode(__thiscall*)(void*, int)>(this, 44)(this, vkey);
    }
};