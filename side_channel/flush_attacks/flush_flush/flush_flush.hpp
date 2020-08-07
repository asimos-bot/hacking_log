#ifndef FLUSH_FLUSH_HPP
#define FLUSH_FLUSH_HPP

#include "../cache_timing_attack/cache_timing_attack.hpp"

class FlushFlush : public CacheTimingAttack {

	public:
		void operation() const;

		FlushFlush(const char* exec, unsigned int offset);

		FlushFlush(const FlushFlush&);
};

#endif
