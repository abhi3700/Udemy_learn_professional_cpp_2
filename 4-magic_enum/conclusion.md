## Conclusion
> NOTE: If using `pprint.hpp`, then no need to use this `magic_enum.hpp`

* Limitations:
	- follow the compiler compatibility
	- Enum value must be in range `[MAGIC_ENUM_RANGE_MIN, MAGIC_ENUM_RANGE_MAX]`. By default `MAGIC_ENUM_RANGE_MIN = -128`, `MAGIC_ENUM_RANGE_MAX = 128`
		+ redefine like this:
```cpp
#define MAGIC_ENUM_RANGE_MIN = 0
#define MAGIC_ENUM_RANGE_MIN = 256
```
