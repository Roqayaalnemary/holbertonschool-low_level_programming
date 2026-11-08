# Green Efficiency Analysis

## Measurement Methodology

The experiments used C programs compiled with GCC using the required flags: -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long. Execution time was measured using the clock() function from time.h and converted into seconds using CLOCKS_PER_SEC.

The baseline loop experiment was executed three times. The recorded execution times were 0.225924, 0.226058, and 0.226522 seconds. The average execution time was approximately 0.226168 seconds.

The algorithm comparison experiment was also executed three times using a dataset of 50,000 integers. The naive algorithm recorded 2.749675, 2.744237, and 2.759518 seconds. The single-pass algorithm recorded 0.000116, 0.000106, and 0.000107 seconds.

The controlled instrumentation experiment measured total execution time and three separate phases: BUILD_DATA, PROCESS, and REDUCE. Each measurement was repeated three times.

## Observed Performance Differences

The algorithm comparison showed a substantial difference in execution time. The naive algorithm had an average execution time of approximately 2.751143 seconds, while the single-pass algorithm averaged approximately 0.000109667 seconds. Based on these averages, the naive algorithm was approximately 25,086 times slower.

The instrumentation experiment provided additional information about program execution. The average total time was 0.000782 seconds. BUILD_DATA averaged 0.000317667 seconds, PROCESS averaged 0.000319667 seconds, and REDUCE averaged 0.000138 seconds.

PROCESS had the highest average execution time among the three individual phases. REDUCE had the lowest average execution time. These measurements help identify where execution time was spent in this particular program.

## Relation Between Runtime and Energy Consumption

Runtime and energy consumption are related engineering considerations, but they are not identical measurements. A shorter execution time may be useful when evaluating efficiency, but execution time alone cannot establish the amount of energy consumed.

In these experiments, CPU execution time was measured using clock(). No power meter or energy-monitoring tool was used. Therefore, the results demonstrate differences in runtime, not measured energy savings.

The single-pass algorithm was significantly faster than the naive algorithm in the recorded experiment. However, these measurements do not prove a specific reduction in electricity consumption.

## Limitations of the Experiment

The experiments were conducted in one computing environment. Results may differ on other hardware or under different system conditions. Only three runs were recorded for each experiment, which is a limited sample.

The instrumentation measurements were very short, with total execution times below one millisecond. Timer resolution and measurement overhead may therefore influence the recorded values.

Another important limitation is that the naive and single-pass algorithms produced different results: 625025000 and 25000 respectively. The naive algorithm repeatedly counts even values from previous iterations, while the single-pass algorithm counts each array element once. Therefore, their timing results are not a comparison of two implementations producing identical results.

## Practical Engineering Takeaway

These experiments demonstrate why developers should measure performance rather than rely only on assumptions. The algorithm comparison highlights the substantial runtime difference between nested loops and a single-pass approach.

Engineers should examine algorithmic complexity, identify expensive program phases, and use consistent measurement methods. They should also distinguish execution-time measurements from actual energy measurements.

The practical conclusion is that improving algorithmic efficiency can significantly reduce execution time. However, additional power measurements are necessary before claiming verified energy savings.
