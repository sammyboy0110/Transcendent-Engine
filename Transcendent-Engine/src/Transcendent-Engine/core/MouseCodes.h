#pragma once

namespace TE {
	typedef enum class MouseCode : uint16_t
	{
		// From glfw3.h
		Button0 = 0,
		Button1 = 1,
		Button2 = 2,
		Button3 = 3,
		Button4 = 4,
		Button5 = 5,
		Button6 = 6,
		Button7 = 7,

		ButtonLast = Button7,
		ButtonLeft = Button0,
		ButtonRight = Button1,
		ButtonMiddle = Button2
	} Mouse;

	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}
}

#define TE_MOUSE_BUTTON_0      ::TE::Mouse::Button0
#define TE_MOUSE_BUTTON_1      ::TE::Mouse::Button1
#define TE_MOUSE_BUTTON_2      ::TE::Mouse::Button2
#define TE_MOUSE_BUTTON_3      ::TE::Mouse::Button3
#define TE_MOUSE_BUTTON_4      ::TE::Mouse::Button4
#define TE_MOUSE_BUTTON_5      ::TE::Mouse::Button5
#define TE_MOUSE_BUTTON_6      ::TE::Mouse::Button6
#define TE_MOUSE_BUTTON_7      ::TE::Mouse::Button7
#define TE_MOUSE_BUTTON_LAST   ::TE::Mouse::ButtonLast
#define TE_MOUSE_BUTTON_LEFT   ::TE::Mouse::ButtonLeft
#define TE_MOUSE_BUTTON_RIGHT  ::TE::Mouse::ButtonRight
#define TE_MOUSE_BUTTON_MIDDLE ::TE::Mouse::ButtonMiddle
