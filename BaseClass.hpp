#pragma once

namespace My {


	class Base {

	public:
		Base() = default;
		~Base() = default;
		virtual void print() = 0;
		virtual void setUTF8() = 0;
	};
}
