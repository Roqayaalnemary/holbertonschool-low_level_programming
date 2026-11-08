# Algorithmic Efficiency Comparison

## Run 1
Naive algorithm result: 625025000
Naive algorithm time: 2.749675 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000116 seconds

## Run 2
Naive algorithm result: 625025000
Naive algorithm time: 2.744237 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds

## Run 3
Naive algorithm result: 625025000
Naive algorithm time: 2.759518 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000107 seconds

## Average Execution Time

Naive algorithm average: 2.751143 seconds
Single-pass algorithm average: 0.000109667 seconds

## Relative Difference

Naive algorithm is approximately 25086 times slower
than the single-pass algorithm.

## Complexity Analysis

Naive algorithm: O(n^2)
Single-pass algorithm: O(n)

## Observation

The single-pass implementation is significantly faster.
The naive implementation repeatedly counts even numbers
from previous iterations, so the two implementations
produce different results.
