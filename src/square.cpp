#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
double square_cpp(double x) {
  return x * x;
}
