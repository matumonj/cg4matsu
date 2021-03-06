#pragma once

#include "ap.Base.h"

namespace ap
{

	class Touch
	{
	public:
		Touch() {}
		virtual ~Touch() {}

		virtual void GetPosition(float& x, float& y) {}
		
		static Touch* Create(Window* window);
	};

}