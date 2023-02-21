#include <iostream>
#include <benchmark/benchmark.h>

// int main()
// {
//     std::cout << "Hi main" << std::endl;
// }

static void BM_SomeFunction(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    std::cout << "Hi main" << std::endl;
    // SomeFunction();
  }
}
// Register the function as a benchmark
BENCHMARK(BM_SomeFunction);
// Run the benchmark
BENCHMARK_MAIN();