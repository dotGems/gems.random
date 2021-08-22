# 🎲 `gems.random` Technology

> Random Number Generator for `.gems`

## Quickstart

```c++
gems::random::generate();
//=> [124893134312]

gems::random::generate(3);
//=> [124893134312, 13841233324, 8952134124]

gems::random::generate(1, "a00fc59e33ec144693904c833cc40a9b177c8a7e7ba68cefb5338116798cd926");
//=> [891241231412]

gems::random::generate(1, "2021-08-21T00:00:00");
//=> [751341241123]

gems::random::generate(3, -10, 10);
//=> [-4, 2, 8]

gems::random::generate(2, "a00fc59e33ec144693904c833cc40a9b177c8a7e7ba68cefb5338116798cd926", "2021-08-21T00:00:00", 0, 500, 250);
//=> [124, 380]
```

## Optional params

- `{uint8_t} [size=1]` - (optional) N number of items in array
- `{checksum256} [trx_id=null]` - (optional) transaction ID (defaults to current transaction ID)
- `{time_point_sec/time_point} [time=null]` - 1s or 500ms intervals (defaults to `current_time_point()`)
- `{int64_t} [min_value=null]` - (optional) minimum value (can be negative)
- `{int64_t} [max_value=null]` - (optional) maximum value (can be negative)
- `{uint64_t} [salt=null]` - (optional) random number as additional input
- `{bool} [unique=true]` - (optional) all random numbers must be unique
