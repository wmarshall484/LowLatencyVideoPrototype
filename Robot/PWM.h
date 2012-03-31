#ifndef PWM_H
#define PWM_H

#include <stdint.h>

//TODO: make this a virtual class, and implement file/io,linux API, possibly other classes

class PWM_driver
	{
	public:
		PWM_driver(const char * path_with_trailing_slash, int8_t default_value );
		~PWM_driver();
		void set_level( int8_t level );

	private:
		int8_t default_value;
		char * path;
	};

#endif
