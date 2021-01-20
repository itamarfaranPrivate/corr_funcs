// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// corrcalc_c
NumericMatrix corrcalc_c(NumericMatrix matr, int p, int m, NumericVector order_vecti, NumericVector order_vectj);
RcppExport SEXP _corrfuncs_corrcalc_c(SEXP matrSEXP, SEXP pSEXP, SEXP mSEXP, SEXP order_vectiSEXP, SEXP order_vectjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type matr(matrSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type order_vecti(order_vectiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type order_vectj(order_vectjSEXP);
    rcpp_result_gen = Rcpp::wrap(corrcalc_c(matr, p, m, order_vecti, order_vectj));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_corrfuncs_corrcalc_c", (DL_FUNC) &_corrfuncs_corrcalc_c, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_corrfuncs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
