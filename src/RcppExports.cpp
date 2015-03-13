// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// na_omit
NumericVector na_omit(NumericVector x);
RcppExport SEXP WRShd_na_omit(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        NumericVector __result = na_omit(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hd
double hd(NumericVector x, double q = 0.5, int cores = 1);
RcppExport SEXP WRShd_hd(SEXP xSEXP, SEXP qSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type q(qSEXP );
        Rcpp::traits::input_parameter< int >::type cores(coresSEXP );
        double __result = hd(x, q, cores);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hdseb
double hdseb(NumericVector x, double q = 0.5, int nboot = 100, int cores = 1);
RcppExport SEXP WRShd_hdseb(SEXP xSEXP, SEXP qSEXP, SEXP nbootSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type q(qSEXP );
        Rcpp::traits::input_parameter< int >::type nboot(nbootSEXP );
        Rcpp::traits::input_parameter< int >::type cores(coresSEXP );
        double __result = hdseb(x, q, nboot, cores);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hdpb
List hdpb(NumericVector x, double q = 0.5, double alpha = 0.05, int nboot = 2000, double nv = 0, int cores = 1);
RcppExport SEXP WRShd_hdpb(SEXP xSEXP, SEXP qSEXP, SEXP alphaSEXP, SEXP nbootSEXP, SEXP nvSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type q(qSEXP );
        Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< int >::type nboot(nbootSEXP );
        Rcpp::traits::input_parameter< double >::type nv(nvSEXP );
        Rcpp::traits::input_parameter< int >::type cores(coresSEXP );
        List __result = hdpb(x, q, alpha, nboot, nv, cores);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// qcom_sub
List qcom_sub(NumericVector x, NumericVector y, double q, double alpha = 0.05, int nboot = 2000, int cores = 1);
RcppExport SEXP WRShd_qcom_sub(SEXP xSEXP, SEXP ySEXP, SEXP qSEXP, SEXP alphaSEXP, SEXP nbootSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< double >::type q(qSEXP );
        Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< int >::type nboot(nbootSEXP );
        Rcpp::traits::input_parameter< int >::type cores(coresSEXP );
        List __result = qcom_sub(x, y, q, alpha, nboot, cores);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
