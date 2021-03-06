// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// z_findBound
List z_findBound(int len, NumericMatrix V, NumericVector target, NumericVector me, IntegerVector initialLB, IntegerVector initialUB, int findBoundTimes, bool useBinarySearch, bool UBfirst);
RcppExport SEXP _FLSSS_z_findBound(SEXP lenSEXP, SEXP VSEXP, SEXP targetSEXP, SEXP meSEXP, SEXP initialLBSEXP, SEXP initialUBSEXP, SEXP findBoundTimesSEXP, SEXP useBinarySearchSEXP, SEXP UBfirstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V(VSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type target(targetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type me(meSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initialLB(initialLBSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initialUB(initialUBSEXP);
    Rcpp::traits::input_parameter< int >::type findBoundTimes(findBoundTimesSEXP);
    Rcpp::traits::input_parameter< bool >::type useBinarySearch(useBinarySearchSEXP);
    Rcpp::traits::input_parameter< bool >::type UBfirst(UBfirstSEXP);
    rcpp_result_gen = Rcpp::wrap(z_findBound(len, V, target, me, initialLB, initialUB, findBoundTimes, useBinarySearch, UBfirst));
    return rcpp_result_gen;
END_RCPP
}
// z_findBoundIntegerized
List z_findBoundIntegerized(int len, NumericMatrix V, NumericVector mask, NumericVector target, NumericVector me, IntegerVector initialLB, IntegerVector initialUB, int findBoundTimes, bool useBinarySearch, bool UBfirst);
RcppExport SEXP _FLSSS_z_findBoundIntegerized(SEXP lenSEXP, SEXP VSEXP, SEXP maskSEXP, SEXP targetSEXP, SEXP meSEXP, SEXP initialLBSEXP, SEXP initialUBSEXP, SEXP findBoundTimesSEXP, SEXP useBinarySearchSEXP, SEXP UBfirstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V(VSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type target(targetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type me(meSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initialLB(initialLBSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initialUB(initialUBSEXP);
    Rcpp::traits::input_parameter< int >::type findBoundTimes(findBoundTimesSEXP);
    Rcpp::traits::input_parameter< bool >::type useBinarySearch(useBinarySearchSEXP);
    Rcpp::traits::input_parameter< bool >::type UBfirst(UBfirstSEXP);
    rcpp_result_gen = Rcpp::wrap(z_findBoundIntegerized(len, V, mask, target, me, initialLB, initialUB, findBoundTimes, useBinarySearch, UBfirst));
    return rcpp_result_gen;
END_RCPP
}
// z_FLSSS
List z_FLSSS(int len, NumericVector v, double target, double ME, IntegerVector LB, IntegerVector UB, int solutionNeed, double tlimit, bool useBiSrchInFB, bool useFloat);
RcppExport SEXP _FLSSS_z_FLSSS(SEXP lenSEXP, SEXP vSEXP, SEXP targetSEXP, SEXP MESEXP, SEXP LBSEXP, SEXP UBSEXP, SEXP solutionNeedSEXP, SEXP tlimitSEXP, SEXP useBiSrchInFBSEXP, SEXP useFloatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type target(targetSEXP);
    Rcpp::traits::input_parameter< double >::type ME(MESEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type LB(LBSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type UB(UBSEXP);
    Rcpp::traits::input_parameter< int >::type solutionNeed(solutionNeedSEXP);
    Rcpp::traits::input_parameter< double >::type tlimit(tlimitSEXP);
    Rcpp::traits::input_parameter< bool >::type useBiSrchInFB(useBiSrchInFBSEXP);
    Rcpp::traits::input_parameter< bool >::type useFloat(useFloatSEXP);
    rcpp_result_gen = Rcpp::wrap(z_FLSSS(len, v, target, ME, LB, UB, solutionNeed, tlimit, useBiSrchInFB, useFloat));
    return rcpp_result_gen;
END_RCPP
}
// z_GAP
IntegerVector z_GAP(int maxCore, int len, NumericMatrix V, NumericVector maskV, int dlst, int dl, int dust, int du, NumericMatrix targetMat, NumericVector profitVec, NumericVector MEr, IntegerVector zeroBasedLB, IntegerVector zeroBasedUB, double duration, bool useBiSearch, int threadLoad, bool verbose, bool heuristic);
RcppExport SEXP _FLSSS_z_GAP(SEXP maxCoreSEXP, SEXP lenSEXP, SEXP VSEXP, SEXP maskVSEXP, SEXP dlstSEXP, SEXP dlSEXP, SEXP dustSEXP, SEXP duSEXP, SEXP targetMatSEXP, SEXP profitVecSEXP, SEXP MErSEXP, SEXP zeroBasedLBSEXP, SEXP zeroBasedUBSEXP, SEXP durationSEXP, SEXP useBiSearchSEXP, SEXP threadLoadSEXP, SEXP verboseSEXP, SEXP heuristicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type maxCore(maxCoreSEXP);
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V(VSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type maskV(maskVSEXP);
    Rcpp::traits::input_parameter< int >::type dlst(dlstSEXP);
    Rcpp::traits::input_parameter< int >::type dl(dlSEXP);
    Rcpp::traits::input_parameter< int >::type dust(dustSEXP);
    Rcpp::traits::input_parameter< int >::type du(duSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type targetMat(targetMatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type profitVec(profitVecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type MEr(MErSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type zeroBasedLB(zeroBasedLBSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type zeroBasedUB(zeroBasedUBSEXP);
    Rcpp::traits::input_parameter< double >::type duration(durationSEXP);
    Rcpp::traits::input_parameter< bool >::type useBiSearch(useBiSearchSEXP);
    Rcpp::traits::input_parameter< int >::type threadLoad(threadLoadSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type heuristic(heuristicSEXP);
    rcpp_result_gen = Rcpp::wrap(z_GAP(maxCore, len, V, maskV, dlst, dl, dust, du, targetMat, profitVec, MEr, zeroBasedLB, zeroBasedUB, duration, useBiSearch, threadLoad, verbose, heuristic));
    return rcpp_result_gen;
END_RCPP
}
// z_Gknapsack
IntegerVector z_Gknapsack(int len, NumericMatrix vr, NumericVector maskV, NumericVector profitVec, NumericMatrix targetMat, NumericVector MEr, IntegerVector LBr, IntegerVector UBr, double duration, bool useBiSearch, int maxCore, int avgThreadLoad, bool verbose, bool approx);
RcppExport SEXP _FLSSS_z_Gknapsack(SEXP lenSEXP, SEXP vrSEXP, SEXP maskVSEXP, SEXP profitVecSEXP, SEXP targetMatSEXP, SEXP MErSEXP, SEXP LBrSEXP, SEXP UBrSEXP, SEXP durationSEXP, SEXP useBiSearchSEXP, SEXP maxCoreSEXP, SEXP avgThreadLoadSEXP, SEXP verboseSEXP, SEXP approxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vr(vrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type maskV(maskVSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type profitVec(profitVecSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type targetMat(targetMatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type MEr(MErSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type LBr(LBrSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type UBr(UBrSEXP);
    Rcpp::traits::input_parameter< double >::type duration(durationSEXP);
    Rcpp::traits::input_parameter< bool >::type useBiSearch(useBiSearchSEXP);
    Rcpp::traits::input_parameter< int >::type maxCore(maxCoreSEXP);
    Rcpp::traits::input_parameter< int >::type avgThreadLoad(avgThreadLoadSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type approx(approxSEXP);
    rcpp_result_gen = Rcpp::wrap(z_Gknapsack(len, vr, maskV, profitVec, targetMat, MEr, LBr, UBr, duration, useBiSearch, maxCore, avgThreadLoad, verbose, approx));
    return rcpp_result_gen;
END_RCPP
}
// z_mFLSSS
List z_mFLSSS(int maxCore, int len, NumericMatrix vr, NumericVector maskV, int d, int dlst, int dl, int dust, int du, NumericMatrix targetMat, NumericVector MEr, IntegerVector LBr, IntegerVector UBr, int sizeNeed, double duration, bool useBiSearch);
RcppExport SEXP _FLSSS_z_mFLSSS(SEXP maxCoreSEXP, SEXP lenSEXP, SEXP vrSEXP, SEXP maskVSEXP, SEXP dSEXP, SEXP dlstSEXP, SEXP dlSEXP, SEXP dustSEXP, SEXP duSEXP, SEXP targetMatSEXP, SEXP MErSEXP, SEXP LBrSEXP, SEXP UBrSEXP, SEXP sizeNeedSEXP, SEXP durationSEXP, SEXP useBiSearchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type maxCore(maxCoreSEXP);
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vr(vrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type maskV(maskVSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type dlst(dlstSEXP);
    Rcpp::traits::input_parameter< int >::type dl(dlSEXP);
    Rcpp::traits::input_parameter< int >::type dust(dustSEXP);
    Rcpp::traits::input_parameter< int >::type du(duSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type targetMat(targetMatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type MEr(MErSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type LBr(LBrSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type UBr(UBrSEXP);
    Rcpp::traits::input_parameter< int >::type sizeNeed(sizeNeedSEXP);
    Rcpp::traits::input_parameter< double >::type duration(durationSEXP);
    Rcpp::traits::input_parameter< bool >::type useBiSearch(useBiSearchSEXP);
    rcpp_result_gen = Rcpp::wrap(z_mFLSSS(maxCore, len, vr, maskV, d, dlst, dl, dust, du, targetMat, MEr, LBr, UBr, sizeNeed, duration, useBiSearch));
    return rcpp_result_gen;
END_RCPP
}
// z_mFLSSScomoPar
List z_mFLSSScomoPar(int maxCore, int len, NumericMatrix vr, NumericVector maskV, int d, int dlst, int dl, int dust, int du, NumericVector targetr, NumericVector MEr, IntegerVector LBr, IntegerVector UBr, int sizeNeededForAll, double duration, bool useBiSearch, int avgThreadLoad);
RcppExport SEXP _FLSSS_z_mFLSSScomoPar(SEXP maxCoreSEXP, SEXP lenSEXP, SEXP vrSEXP, SEXP maskVSEXP, SEXP dSEXP, SEXP dlstSEXP, SEXP dlSEXP, SEXP dustSEXP, SEXP duSEXP, SEXP targetrSEXP, SEXP MErSEXP, SEXP LBrSEXP, SEXP UBrSEXP, SEXP sizeNeededForAllSEXP, SEXP durationSEXP, SEXP useBiSearchSEXP, SEXP avgThreadLoadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type maxCore(maxCoreSEXP);
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vr(vrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type maskV(maskVSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type dlst(dlstSEXP);
    Rcpp::traits::input_parameter< int >::type dl(dlSEXP);
    Rcpp::traits::input_parameter< int >::type dust(dustSEXP);
    Rcpp::traits::input_parameter< int >::type du(duSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type targetr(targetrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type MEr(MErSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type LBr(LBrSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type UBr(UBrSEXP);
    Rcpp::traits::input_parameter< int >::type sizeNeededForAll(sizeNeededForAllSEXP);
    Rcpp::traits::input_parameter< double >::type duration(durationSEXP);
    Rcpp::traits::input_parameter< bool >::type useBiSearch(useBiSearchSEXP);
    Rcpp::traits::input_parameter< int >::type avgThreadLoad(avgThreadLoadSEXP);
    rcpp_result_gen = Rcpp::wrap(z_mFLSSScomoPar(maxCore, len, vr, maskV, d, dlst, dl, dust, du, targetr, MEr, LBr, UBr, sizeNeededForAll, duration, useBiSearch, avgThreadLoad));
    return rcpp_result_gen;
END_RCPP
}
// z_integerize
List z_integerize(int len, NumericMatrix V, NumericVector target, NumericVector ME, IntegerVector precisionLevel);
RcppExport SEXP _FLSSS_z_integerize(SEXP lenSEXP, SEXP VSEXP, SEXP targetSEXP, SEXP MESEXP, SEXP precisionLevelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V(VSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type target(targetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ME(MESEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type precisionLevel(precisionLevelSEXP);
    rcpp_result_gen = Rcpp::wrap(z_integerize(len, V, target, ME, precisionLevel));
    return rcpp_result_gen;
END_RCPP
}
// z_which64intAndSize
List z_which64intAndSize(IntegerVector largestSubsetSum);
RcppExport SEXP _FLSSS_z_which64intAndSize(SEXP largestSubsetSumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type largestSubsetSum(largestSubsetSumSEXP);
    rcpp_result_gen = Rcpp::wrap(z_which64intAndSize(largestSubsetSum));
    return rcpp_result_gen;
END_RCPP
}
// z_collapseTo64int
NumericMatrix z_collapseTo64int(IntegerMatrix x, IntegerVector which64int, IntegerVector bitSize);
RcppExport SEXP _FLSSS_z_collapseTo64int(SEXP xSEXP, SEXP which64intSEXP, SEXP bitSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type which64int(which64intSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type bitSize(bitSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(z_collapseTo64int(x, which64int, bitSize));
    return rcpp_result_gen;
END_RCPP
}
// z_mask
NumericVector z_mask(IntegerVector which64int, IntegerVector bitSize);
RcppExport SEXP _FLSSS_z_mask(SEXP which64intSEXP, SEXP bitSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type which64int(which64intSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type bitSize(bitSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(z_mask(which64int, bitSize));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FLSSS_z_findBound", (DL_FUNC) &_FLSSS_z_findBound, 9},
    {"_FLSSS_z_findBoundIntegerized", (DL_FUNC) &_FLSSS_z_findBoundIntegerized, 10},
    {"_FLSSS_z_FLSSS", (DL_FUNC) &_FLSSS_z_FLSSS, 10},
    {"_FLSSS_z_GAP", (DL_FUNC) &_FLSSS_z_GAP, 18},
    {"_FLSSS_z_Gknapsack", (DL_FUNC) &_FLSSS_z_Gknapsack, 14},
    {"_FLSSS_z_mFLSSS", (DL_FUNC) &_FLSSS_z_mFLSSS, 16},
    {"_FLSSS_z_mFLSSScomoPar", (DL_FUNC) &_FLSSS_z_mFLSSScomoPar, 17},
    {"_FLSSS_z_integerize", (DL_FUNC) &_FLSSS_z_integerize, 5},
    {"_FLSSS_z_which64intAndSize", (DL_FUNC) &_FLSSS_z_which64intAndSize, 1},
    {"_FLSSS_z_collapseTo64int", (DL_FUNC) &_FLSSS_z_collapseTo64int, 3},
    {"_FLSSS_z_mask", (DL_FUNC) &_FLSSS_z_mask, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_FLSSS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
