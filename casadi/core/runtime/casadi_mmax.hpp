// NOLINT(legal/copyright)

// C-REPLACE "std::numeric_limits<double>::infinity()" "casadi_inf"
// SYMBOL "mmax"
template<typename T1>
T1 casadi_mmax(const T1* x, casadi_int n, casadi_int is_dense) {
  T1 r = is_dense ? -std::numeric_limits<double>::infinity() : 0;
  if (!x) return r;
  return casadi_vfmax(x, n, r);
}
