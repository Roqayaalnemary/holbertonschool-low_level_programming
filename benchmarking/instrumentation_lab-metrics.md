# Controlled Instrumentation Experiment

## Run 1

TOTAL seconds: 0.000759
BUILD_DATA seconds: 0.000300
PROCESS seconds: 0.000318
REDUCE seconds: 0.000135

## Run 2

TOTAL seconds: 0.000830
BUILD_DATA seconds: 0.000364
PROCESS seconds: 0.000322
REDUCE seconds: 0.000136

## Run 3

TOTAL seconds: 0.000757
BUILD_DATA seconds: 0.000289
PROCESS seconds: 0.000319
REDUCE seconds: 0.000143

## Average Execution Times

TOTAL average: 0.000782 seconds
BUILD_DATA average: 0.000317667 seconds
PROCESS average: 0.000319667 seconds
REDUCE average: 0.000138 seconds

## Measurement Boundaries

TOTAL measurement starts immediately before build_dataset()
and ends immediately after reduce_checksum().

BUILD_DATA measures only the build_dataset() function.
PROCESS measures only the process_dataset() function.
REDUCE measures only the reduce_checksum() function.

The same clock-based measurement method is used
consistently for all phases.

## Analysis

The PROCESS phase has the highest average execution time
among the three individual phases.

The TOTAL time is greater than each individual phase time.
Small differences between TOTAL and the sum of the phase
times are caused by measurement overhead.

## Conclusion

The experiment measures the CPU time spent in each phase
and the overall execution time using clock() and
CLOCKS_PER_SEC.
