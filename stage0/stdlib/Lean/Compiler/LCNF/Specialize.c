// Lean compiler output
// Module: Lean.Compiler.LCNF.Specialize
// Imports: Init Lean.Util.ForEachExpr Lean.Compiler.Specialize Lean.Compiler.LCNF.Simp Lean.Compiler.LCNF.SpecInfo Lean.Compiler.LCNF.PrettyPrinter Lean.Compiler.LCNF.ToExpr Lean.Compiler.LCNF.Level
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at_Lean_Compiler_LCNF_Specialize_visitCode___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__2;
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___closed__1;
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__3;
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__15;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2___closed__1;
static lean_object* l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___closed__1;
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_ToHide_visitVisibleExpr_visit___spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withParams___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__14;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withLetDecl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791_(lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__10;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__6(lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__4(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_markVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp___at_Lean_Compiler_LCNF_Specialize_visitCode___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5;
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_State_params___default;
lean_object* l_Lean_MessageData_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_getRemainingArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_instantiateValueLevelParams(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__3;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_Collector_collect___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDeclCore_toExpr(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1;
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__7;
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Compiler_SpecState_addEntry___spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_specExtension;
lean_object* l_Lean_Compiler_LCNF_Code_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_isGround(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_specialize___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_specialize___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_specialize___closed__2;
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__13;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withLetDecl(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__9;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_isTemplateLike(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__3;
static lean_object* l_Lean_Compiler_LCNF_specialize___closed__1;
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* l_Lean_Compiler_LCNF_Decl_setLevelParams(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__5;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Compiler_getCachedSpecialization___spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__3;
lean_object* l_Std_PersistentHashMap_instInhabitedPersistentHashMap___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__2;
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecState;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_Collector_collect___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_State_decls___default;
LEAN_EXPORT lean_object* l_Array_filterMapM___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__2;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__1;
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_specialize___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_State_decls___default;
static lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_specialize___closed__3;
lean_object* l_List_mapTRAux___at_Lean_Compiler_LCNF_saveSpecParamInfo___spec__10(lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__5;
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__1;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__7;
static lean_object* l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_specialize;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2;
extern lean_object* l_Lean_Expr_instHashableExpr;
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__6;
lean_object* l_Lean_Expr_sort___override(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_specialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_isGround___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Internalize_internalizeFunDecl___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__2;
lean_object* l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__12;
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__1;
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_expandCodeDecls_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_expandCodeDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__2;
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_Compiler_LCNF_ToExpr_withFVar___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__11;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___closed__1;
static lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__2;
lean_object* l_Lean_Compiler_LCNF_mkForallParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_expandCodeDecls_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___boxed(lean_object**);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__1;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__8;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectParams___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_findCore___at_Lean_Compiler_LCNF_Code_bind_go___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specCacheExt;
static lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__3;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__6;
static lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__1;
lean_object* l_instInhabitedReaderT___rarg___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadCoreM;
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__4;
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_getRemainingArgs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getStage1Decl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10_(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__1;
lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTRAux___at_Lean_mkConstWithLevelParams___spec__1(lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__3;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_insert___at___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___spec__3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__8;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withFVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_markVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_insert___at_Lean_Meta_ToHide_visitVisibleExpr_visit___spec__3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__2;
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_instBEqExpr;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams_go___at_Lean_Compiler_LCNF_Specialize_mkKey___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_saveSpecParamInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withParams___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_expandCodeDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_InferType_mkForallParams___spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_getRemainingArgs___spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_find_x3f___at_Lean_Compiler_LCNF_getSpecParamInfoCore_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Context_scope___default;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__1(size_t, size_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__1;
static lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__1;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Compiler_LCNF_normLevelParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_getRemainingArgs(lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withParams(lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__4;
lean_object* l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4;
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Context_ground___default;
lean_object* l_Lean_Compiler_LCNF_CodeDecl_fvarId(lean_object*);
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withFVar(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_specialize___elambda__1___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__3;
static lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791____closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__2(size_t, size_t, lean_object*);
extern lean_object* l_instInhabitedPUnit;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams_go___at_Lean_Compiler_LCNF_Specialize_mkKey___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInstance(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_State_visited___default;
lean_object* l_ReaderT_bind___at_Lean_Compiler_LCNF_FunDeclCore_toExprM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_saveLCNFType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__1;
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__3;
x_2 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__4;
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_insert___at_Lean_Compiler_SpecState_addEntry___spec__13(x_3, x_1, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specCacheExt;
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_st_ref_take(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 4);
lean_dec(x_11);
x_12 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Specialize_cacheSpec___lambda__1), 3, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
x_13 = l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1;
x_14 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(x_13, x_10, x_12);
x_15 = l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__3;
lean_ctor_set(x_7, 4, x_15);
lean_ctor_set(x_7, 0, x_14);
x_16 = lean_st_ref_set(x_4, x_7, x_8);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
x_25 = lean_ctor_get(x_7, 2);
x_26 = lean_ctor_get(x_7, 3);
x_27 = lean_ctor_get(x_7, 5);
x_28 = lean_ctor_get(x_7, 6);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_29 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Specialize_cacheSpec___lambda__1), 3, 2);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_2);
x_30 = l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1;
x_31 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(x_30, x_23, x_29);
x_32 = l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__3;
x_33 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_24);
lean_ctor_set(x_33, 2, x_25);
lean_ctor_set(x_33, 3, x_26);
lean_ctor_set(x_33, 4, x_32);
lean_ctor_set(x_33, 5, x_27);
lean_ctor_set(x_33, 6, x_28);
x_34 = lean_st_ref_set(x_4, x_33, x_8);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_36 = x_34;
} else {
 lean_dec_ref(x_34);
 x_36 = lean_box(0);
}
x_37 = lean_box(0);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_cacheSpec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Compiler_LCNF_Specialize_cacheSpec(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_instBEqExpr;
x_2 = l_Lean_Expr_instHashableExpr;
x_3 = l_Std_PersistentHashMap_instInhabitedPersistentHashMap___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___closed__1;
x_10 = l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1;
x_11 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_9, x_10, x_8);
lean_dec(x_8);
x_12 = l_Std_PersistentHashMap_find_x3f___at_Lean_Compiler_getCachedSpecialization___spec__2(x_11, x_1);
lean_ctor_set(x_5, 0, x_12);
return x_5;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_5);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___closed__1;
x_17 = l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1;
x_18 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_16, x_17, x_15);
lean_dec(x_15);
x_19 = l_Std_PersistentHashMap_find_x3f___at_Lean_Compiler_getCachedSpecialization___spec__2(x_18, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Context_scope___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Context_ground___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_State_decls___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_10 = lean_box(0);
x_11 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_4, x_7, x_10);
x_2 = x_9;
x_4 = x_11;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withParams___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_array_get_size(x_1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_11, x_11);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_11);
x_16 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = 0;
x_18 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_19 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_1, x_17, x_18, x_10);
lean_ctor_set(x_3, 0, x_19);
x_20 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_3, 1);
x_23 = lean_ctor_get(x_3, 2);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_3);
x_24 = lean_array_get_size(x_1);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_nat_dec_lt(x_25, x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_24);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_23);
x_28 = lean_apply_6(x_2, x_27, x_4, x_5, x_6, x_7, x_8);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = lean_nat_dec_le(x_24, x_24);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_24);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_23);
x_31 = lean_apply_6(x_2, x_30, x_4, x_5, x_6, x_7, x_8);
return x_31;
}
else
{
size_t x_32; size_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = 0;
x_33 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_34 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_1, x_32, x_33, x_21);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_22);
lean_ctor_set(x_35, 2, x_23);
x_36 = lean_apply_6(x_2, x_35, x_4, x_5, x_6, x_7, x_8);
return x_36;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withParams(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Specialize_withParams___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withParams___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Compiler_LCNF_Specialize_withParams___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withFVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_box(0);
x_12 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_10, x_1, x_11);
lean_ctor_set(x_3, 0, x_12);
x_13 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_17 = lean_box(0);
x_18 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_14, x_1, x_17);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_16);
x_20 = lean_apply_6(x_2, x_19, x_4, x_5, x_6, x_7, x_8);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withFVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Specialize_withFVar___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_hasFVar(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_Std_RBNode_findCore___at_Lean_Compiler_LCNF_Code_bind_go___spec__1(x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = 0;
return x_8;
}
}
case 5:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(x_1, x_9);
if (x_11 == 0)
{
x_2 = x_10;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
case 6:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
x_16 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(x_1, x_14);
if (x_16 == 0)
{
x_2 = x_15;
goto _start;
}
else
{
uint8_t x_18; 
x_18 = 1;
return x_18;
}
}
case 7:
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 2);
x_21 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(x_1, x_19);
if (x_21 == 0)
{
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_23; 
x_23 = 1;
return x_23;
}
}
case 8:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_2, 1);
x_25 = lean_ctor_get(x_2, 2);
x_26 = lean_ctor_get(x_2, 3);
x_27 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(x_1, x_24);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(x_1, x_25);
if (x_28 == 0)
{
x_2 = x_26;
goto _start;
}
else
{
uint8_t x_30; 
x_30 = 1;
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = 1;
return x_31;
}
}
case 10:
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_2, 1);
x_2 = x_32;
goto _start;
}
case 11:
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_2, 2);
x_2 = x_34;
goto _start;
}
default: 
{
uint8_t x_36; 
x_36 = 0;
return x_36;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_isGround(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(x_8, x_1);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 1;
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Compiler_LCNF_Specialize_isGround___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_isGround___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Compiler_LCNF_Specialize_isGround(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withLetDecl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
x_10 = l_Lean_Compiler_LCNF_Specialize_isGround(x_9, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
x_17 = lean_box(0);
lean_inc(x_13);
x_18 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_15, x_13, x_17);
x_19 = lean_unbox(x_11);
lean_dec(x_11);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_13);
lean_ctor_set(x_3, 0, x_18);
x_20 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_7, x_12);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_16, x_13, x_17);
lean_ctor_set(x_3, 1, x_21);
lean_ctor_set(x_3, 0, x_18);
x_22 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_7, x_12);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = lean_ctor_get(x_3, 1);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_3);
x_26 = lean_box(0);
lean_inc(x_13);
x_27 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_23, x_13, x_26);
x_28 = lean_unbox(x_11);
lean_dec(x_11);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_13);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_24);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_apply_6(x_2, x_29, x_4, x_5, x_6, x_7, x_12);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_24, x_13, x_26);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_32, 2, x_25);
x_33 = lean_apply_6(x_2, x_32, x_4, x_5, x_6, x_7, x_12);
return x_33;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_withLetDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Specialize_withLetDecl___rarg), 8, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_State_visited___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_State_params___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_State_decls___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_markVisited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_2, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_box(0);
x_17 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_15, x_1, x_16);
lean_ctor_set(x_12, 0, x_17);
x_18 = lean_st_ref_set(x_2, x_12, x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
x_25 = lean_ctor_get(x_12, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_26 = lean_box(0);
x_27 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_23, x_1, x_26);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
lean_ctor_set(x_28, 2, x_25);
x_29 = lean_st_ref_set(x_2, x_28, x_13);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_markVisited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Compiler_LCNF_Specialize_Collector_markVisited(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectParams___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_eq(x_2, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = lean_usize_add(x_2, x_18);
x_2 = x_19;
x_4 = x_16;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_9, x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = 0;
x_18 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_19 = lean_box(0);
x_20 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectParams___spec__1(x_1, x_17, x_18, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_get(x_3, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_ToHide_visitVisibleExpr_visit___spec__1(x_15, x_2);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_32; 
lean_free_object(x_13);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_32 = lean_apply_8(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_box(0);
x_18 = x_36;
x_19 = x_35;
goto block_31;
}
else
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
x_38 = lean_ctor_get(x_2, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_2, 1);
lean_inc(x_39);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_40 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
lean_inc(x_9);
x_42 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_18 = x_43;
x_19 = x_44;
goto block_31;
}
else
{
uint8_t x_45; 
lean_dec(x_9);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_42);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_39);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_40);
if (x_49 == 0)
{
return x_40;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_40, 0);
x_51 = lean_ctor_get(x_40, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_40);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
case 6:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_32, 1);
lean_inc(x_53);
lean_dec(x_32);
x_54 = lean_ctor_get(x_2, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_2, 2);
lean_inc(x_55);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_56 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_54, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_53);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
lean_inc(x_9);
x_58 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_55, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_18 = x_59;
x_19 = x_60;
goto block_31;
}
else
{
uint8_t x_61; 
lean_dec(x_9);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_58);
if (x_61 == 0)
{
return x_58;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_58, 0);
x_63 = lean_ctor_get(x_58, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_58);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_55);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_56);
if (x_65 == 0)
{
return x_56;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_56, 0);
x_67 = lean_ctor_get(x_56, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_56);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
case 7:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_32, 1);
lean_inc(x_69);
lean_dec(x_32);
x_70 = lean_ctor_get(x_2, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_2, 2);
lean_inc(x_71);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_72 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_70, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_69);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
lean_inc(x_9);
x_74 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_71, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_73);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_18 = x_75;
x_19 = x_76;
goto block_31;
}
else
{
uint8_t x_77; 
lean_dec(x_9);
lean_dec(x_2);
x_77 = !lean_is_exclusive(x_74);
if (x_77 == 0)
{
return x_74;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_74, 0);
x_79 = lean_ctor_get(x_74, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_74);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_71);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_72);
if (x_81 == 0)
{
return x_72;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_72, 0);
x_83 = lean_ctor_get(x_72, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_72);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
case 8:
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_85 = lean_ctor_get(x_32, 1);
lean_inc(x_85);
lean_dec(x_32);
x_86 = lean_ctor_get(x_2, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_2, 2);
lean_inc(x_87);
x_88 = lean_ctor_get(x_2, 3);
lean_inc(x_88);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_89 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_86, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_85);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_91 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_87, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
lean_inc(x_9);
x_93 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_88, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_92);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_18 = x_94;
x_19 = x_95;
goto block_31;
}
else
{
uint8_t x_96; 
lean_dec(x_9);
lean_dec(x_2);
x_96 = !lean_is_exclusive(x_93);
if (x_96 == 0)
{
return x_93;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_93, 0);
x_98 = lean_ctor_get(x_93, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_93);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_88);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_91);
if (x_100 == 0)
{
return x_91;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_91, 0);
x_102 = lean_ctor_get(x_91, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_91);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_89);
if (x_104 == 0)
{
return x_89;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_89, 0);
x_106 = lean_ctor_get(x_89, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_89);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
case 10:
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_32, 1);
lean_inc(x_108);
lean_dec(x_32);
x_109 = lean_ctor_get(x_2, 1);
lean_inc(x_109);
lean_inc(x_9);
x_110 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_109, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_108);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_18 = x_111;
x_19 = x_112;
goto block_31;
}
else
{
uint8_t x_113; 
lean_dec(x_9);
lean_dec(x_2);
x_113 = !lean_is_exclusive(x_110);
if (x_113 == 0)
{
return x_110;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_110, 0);
x_115 = lean_ctor_get(x_110, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_110);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
case 11:
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_32, 1);
lean_inc(x_117);
lean_dec(x_32);
x_118 = lean_ctor_get(x_2, 2);
lean_inc(x_118);
lean_inc(x_9);
x_119 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_118, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_117);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_18 = x_120;
x_19 = x_121;
goto block_31;
}
else
{
uint8_t x_122; 
lean_dec(x_9);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_119);
if (x_122 == 0)
{
return x_119;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_119, 0);
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_119);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
default: 
{
lean_object* x_126; lean_object* x_127; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_126 = lean_ctor_get(x_32, 1);
lean_inc(x_126);
lean_dec(x_32);
x_127 = lean_box(0);
x_18 = x_127;
x_19 = x_126;
goto block_31;
}
}
}
}
else
{
uint8_t x_128; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_128 = !lean_is_exclusive(x_32);
if (x_128 == 0)
{
return x_32;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_32, 0);
x_130 = lean_ctor_get(x_32, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_32);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
block_31:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_20 = lean_st_ref_get(x_9, x_19);
lean_dec(x_9);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_take(x_3, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_18);
x_25 = l_Std_HashMap_insert___at_Lean_Meta_ToHide_visitVisibleExpr_visit___spec__3(x_23, x_2, x_18);
x_26 = lean_st_ref_set(x_3, x_25, x_24);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_18);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_132; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_132 = lean_ctor_get(x_17, 0);
lean_inc(x_132);
lean_dec(x_17);
lean_ctor_set(x_13, 0, x_132);
return x_13;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_13, 0);
x_134 = lean_ctor_get(x_13, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_13);
lean_inc(x_2);
x_135 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_ToHide_visitVisibleExpr_visit___spec__1(x_133, x_2);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_149; 
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_149 = lean_apply_8(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_134);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; uint8_t x_151; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_unbox(x_150);
lean_dec(x_150);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_152 = lean_ctor_get(x_149, 1);
lean_inc(x_152);
lean_dec(x_149);
x_153 = lean_box(0);
x_136 = x_153;
x_137 = x_152;
goto block_148;
}
else
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_154 = lean_ctor_get(x_149, 1);
lean_inc(x_154);
lean_dec(x_149);
x_155 = lean_ctor_get(x_2, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_2, 1);
lean_inc(x_156);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_157 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_155, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_154);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
lean_inc(x_9);
x_159 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_156, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_158);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
lean_dec(x_159);
x_136 = x_160;
x_137 = x_161;
goto block_148;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_9);
lean_dec(x_2);
x_162 = lean_ctor_get(x_159, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_159, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_164 = x_159;
} else {
 lean_dec_ref(x_159);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(1, 2, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_163);
return x_165;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_156);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_166 = lean_ctor_get(x_157, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_157, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_168 = x_157;
} else {
 lean_dec_ref(x_157);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
case 6:
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_170 = lean_ctor_get(x_149, 1);
lean_inc(x_170);
lean_dec(x_149);
x_171 = lean_ctor_get(x_2, 1);
lean_inc(x_171);
x_172 = lean_ctor_get(x_2, 2);
lean_inc(x_172);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_173 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_171, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_170);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; lean_object* x_175; 
x_174 = lean_ctor_get(x_173, 1);
lean_inc(x_174);
lean_dec(x_173);
lean_inc(x_9);
x_175 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_172, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_174);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; 
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_136 = x_176;
x_137 = x_177;
goto block_148;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_9);
lean_dec(x_2);
x_178 = lean_ctor_get(x_175, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_175, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_180 = x_175;
} else {
 lean_dec_ref(x_175);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(1, 2, 0);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_178);
lean_ctor_set(x_181, 1, x_179);
return x_181;
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_172);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_182 = lean_ctor_get(x_173, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_173, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 lean_ctor_release(x_173, 1);
 x_184 = x_173;
} else {
 lean_dec_ref(x_173);
 x_184 = lean_box(0);
}
if (lean_is_scalar(x_184)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_184;
}
lean_ctor_set(x_185, 0, x_182);
lean_ctor_set(x_185, 1, x_183);
return x_185;
}
}
case 7:
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_186 = lean_ctor_get(x_149, 1);
lean_inc(x_186);
lean_dec(x_149);
x_187 = lean_ctor_get(x_2, 1);
lean_inc(x_187);
x_188 = lean_ctor_get(x_2, 2);
lean_inc(x_188);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_189 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_187, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_186);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; 
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
lean_dec(x_189);
lean_inc(x_9);
x_191 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_188, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_190);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_136 = x_192;
x_137 = x_193;
goto block_148;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
lean_dec(x_9);
lean_dec(x_2);
x_194 = lean_ctor_get(x_191, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_191, 1);
lean_inc(x_195);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_196 = x_191;
} else {
 lean_dec_ref(x_191);
 x_196 = lean_box(0);
}
if (lean_is_scalar(x_196)) {
 x_197 = lean_alloc_ctor(1, 2, 0);
} else {
 x_197 = x_196;
}
lean_ctor_set(x_197, 0, x_194);
lean_ctor_set(x_197, 1, x_195);
return x_197;
}
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_188);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_198 = lean_ctor_get(x_189, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_189, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 x_200 = x_189;
} else {
 lean_dec_ref(x_189);
 x_200 = lean_box(0);
}
if (lean_is_scalar(x_200)) {
 x_201 = lean_alloc_ctor(1, 2, 0);
} else {
 x_201 = x_200;
}
lean_ctor_set(x_201, 0, x_198);
lean_ctor_set(x_201, 1, x_199);
return x_201;
}
}
case 8:
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_202 = lean_ctor_get(x_149, 1);
lean_inc(x_202);
lean_dec(x_149);
x_203 = lean_ctor_get(x_2, 1);
lean_inc(x_203);
x_204 = lean_ctor_get(x_2, 2);
lean_inc(x_204);
x_205 = lean_ctor_get(x_2, 3);
lean_inc(x_205);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_206 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_203, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_202);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; 
x_207 = lean_ctor_get(x_206, 1);
lean_inc(x_207);
lean_dec(x_206);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_208 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_204, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_207);
if (lean_obj_tag(x_208) == 0)
{
lean_object* x_209; lean_object* x_210; 
x_209 = lean_ctor_get(x_208, 1);
lean_inc(x_209);
lean_dec(x_208);
lean_inc(x_9);
x_210 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_205, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_209);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; lean_object* x_212; 
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
lean_dec(x_210);
x_136 = x_211;
x_137 = x_212;
goto block_148;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_dec(x_9);
lean_dec(x_2);
x_213 = lean_ctor_get(x_210, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_210, 1);
lean_inc(x_214);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_215 = x_210;
} else {
 lean_dec_ref(x_210);
 x_215 = lean_box(0);
}
if (lean_is_scalar(x_215)) {
 x_216 = lean_alloc_ctor(1, 2, 0);
} else {
 x_216 = x_215;
}
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_214);
return x_216;
}
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_205);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_217 = lean_ctor_get(x_208, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_208, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 x_219 = x_208;
} else {
 lean_dec_ref(x_208);
 x_219 = lean_box(0);
}
if (lean_is_scalar(x_219)) {
 x_220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_220 = x_219;
}
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_218);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
lean_dec(x_205);
lean_dec(x_204);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_221 = lean_ctor_get(x_206, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_206, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_223 = x_206;
} else {
 lean_dec_ref(x_206);
 x_223 = lean_box(0);
}
if (lean_is_scalar(x_223)) {
 x_224 = lean_alloc_ctor(1, 2, 0);
} else {
 x_224 = x_223;
}
lean_ctor_set(x_224, 0, x_221);
lean_ctor_set(x_224, 1, x_222);
return x_224;
}
}
case 10:
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_149, 1);
lean_inc(x_225);
lean_dec(x_149);
x_226 = lean_ctor_get(x_2, 1);
lean_inc(x_226);
lean_inc(x_9);
x_227 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_226, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_225);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; lean_object* x_229; 
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec(x_227);
x_136 = x_228;
x_137 = x_229;
goto block_148;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
lean_dec(x_9);
lean_dec(x_2);
x_230 = lean_ctor_get(x_227, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_227, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_232 = x_227;
} else {
 lean_dec_ref(x_227);
 x_232 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_233 = lean_alloc_ctor(1, 2, 0);
} else {
 x_233 = x_232;
}
lean_ctor_set(x_233, 0, x_230);
lean_ctor_set(x_233, 1, x_231);
return x_233;
}
}
case 11:
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_149, 1);
lean_inc(x_234);
lean_dec(x_149);
x_235 = lean_ctor_get(x_2, 2);
lean_inc(x_235);
lean_inc(x_9);
x_236 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_235, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_234);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; lean_object* x_238; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_236, 1);
lean_inc(x_238);
lean_dec(x_236);
x_136 = x_237;
x_137 = x_238;
goto block_148;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_9);
lean_dec(x_2);
x_239 = lean_ctor_get(x_236, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_236, 1);
lean_inc(x_240);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_241 = x_236;
} else {
 lean_dec_ref(x_236);
 x_241 = lean_box(0);
}
if (lean_is_scalar(x_241)) {
 x_242 = lean_alloc_ctor(1, 2, 0);
} else {
 x_242 = x_241;
}
lean_ctor_set(x_242, 0, x_239);
lean_ctor_set(x_242, 1, x_240);
return x_242;
}
}
default: 
{
lean_object* x_243; lean_object* x_244; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_243 = lean_ctor_get(x_149, 1);
lean_inc(x_243);
lean_dec(x_149);
x_244 = lean_box(0);
x_136 = x_244;
x_137 = x_243;
goto block_148;
}
}
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_245 = lean_ctor_get(x_149, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_149, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_247 = x_149;
} else {
 lean_dec_ref(x_149);
 x_247 = lean_box(0);
}
if (lean_is_scalar(x_247)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_247;
}
lean_ctor_set(x_248, 0, x_245);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
block_148:
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_138 = lean_st_ref_get(x_9, x_137);
lean_dec(x_9);
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
lean_dec(x_138);
x_140 = lean_st_ref_take(x_3, x_139);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
lean_inc(x_136);
x_143 = l_Std_HashMap_insert___at_Lean_Meta_ToHide_visitVisibleExpr_visit___spec__3(x_141, x_2, x_136);
x_144 = lean_st_ref_set(x_3, x_143, x_142);
x_145 = lean_ctor_get(x_144, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_146 = x_144;
} else {
 lean_dec_ref(x_144);
 x_146 = lean_box(0);
}
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(0, 2, 0);
} else {
 x_147 = x_146;
}
lean_ctor_set(x_147, 0, x_136);
lean_ctor_set(x_147, 1, x_145);
return x_147;
}
}
else
{
lean_object* x_249; lean_object* x_250; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_249 = lean_ctor_get(x_135, 0);
lean_inc(x_249);
lean_dec(x_135);
x_250 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_134);
return x_250;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = 1;
x_14 = lean_box(x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = 1;
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = 1;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___lambda__1), 8, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__1;
x_12 = lean_st_mk_ref(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__2;
lean_inc(x_7);
x_16 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_15, x_1, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_get(x_7, x_18);
lean_dec(x_7);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_13, x_20);
lean_dec(x_13);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_17);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_17);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_7);
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
return x_16;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Core_instMonadCoreM;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__1;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__2;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__3;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__4;
x_2 = l_instInhabitedPUnit;
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__5;
x_10 = lean_panic_fn(x_9, x_1);
x_11 = lean_apply_7(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.Specialize", 29);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.Specialize.Collector.collectFVar", 51);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unreachable code has been reached", 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__1;
x_2 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__2;
x_3 = lean_unsigned_to_nat(210u);
x_4 = lean_unsigned_to_nat(10u);
x_5 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_2, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Std_RBNode_findCore___at_Lean_Compiler_LCNF_Code_bind_go___spec__1(x_15, x_1);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_free_object(x_11);
lean_inc(x_1);
x_17 = l_Lean_Compiler_LCNF_Specialize_Collector_markVisited(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 1);
x_20 = lean_ctor_get(x_17, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_3, 0);
lean_inc(x_21);
x_22 = l_Std_RBNode_findCore___at_Lean_Compiler_LCNF_Code_bind_go___spec__1(x_21, x_1);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_box(0);
lean_ctor_set(x_17, 0, x_23);
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_22);
lean_free_object(x_17);
lean_inc(x_1);
x_24 = l_Lean_Compiler_LCNF_findFunDecl_x3f(x_1, x_5, x_6, x_7, x_19);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_1);
x_27 = l_Lean_Compiler_LCNF_findParam_x3f(x_1, x_5, x_6, x_7, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Compiler_LCNF_findLetDecl_x3f(x_1, x_5, x_6, x_7, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__4;
x_34 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1(x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_31, 0);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_35, 2);
lean_inc(x_39);
x_40 = lean_ctor_get(x_35, 3);
lean_inc(x_40);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_39);
x_41 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_39, x_2, x_3, x_4, x_5, x_6, x_7, x_36);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_Compiler_LCNF_Specialize_isGround(x_40, x_3, x_4, x_5, x_6, x_7, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_unbox(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_dec(x_40);
lean_dec(x_35);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = lean_st_ref_get(x_7, x_46);
lean_dec(x_7);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_st_ref_take(x_2, x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = !lean_is_exclusive(x_50);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_53 = lean_ctor_get(x_50, 1);
x_54 = 0;
x_55 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_55, 0, x_37);
lean_ctor_set(x_55, 1, x_38);
lean_ctor_set(x_55, 2, x_39);
lean_ctor_set_uint8(x_55, sizeof(void*)*3, x_54);
x_56 = lean_array_push(x_53, x_55);
lean_ctor_set(x_50, 1, x_56);
x_57 = lean_st_ref_set(x_2, x_50, x_51);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
x_60 = lean_box(0);
lean_ctor_set(x_57, 0, x_60);
return x_57;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
lean_dec(x_57);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_64 = lean_ctor_get(x_50, 0);
x_65 = lean_ctor_get(x_50, 1);
x_66 = lean_ctor_get(x_50, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_50);
x_67 = 0;
x_68 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_68, 0, x_37);
lean_ctor_set(x_68, 1, x_38);
lean_ctor_set(x_68, 2, x_39);
lean_ctor_set_uint8(x_68, sizeof(void*)*3, x_67);
x_69 = lean_array_push(x_65, x_68);
x_70 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_70, 0, x_64);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_70, 2, x_66);
x_71 = lean_st_ref_set(x_2, x_70, x_51);
lean_dec(x_2);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_73 = x_71;
} else {
 lean_dec_ref(x_71);
 x_73 = lean_box(0);
}
x_74 = lean_box(0);
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
x_76 = lean_ctor_get(x_43, 1);
lean_inc(x_76);
lean_dec(x_43);
lean_inc(x_7);
lean_inc(x_2);
x_77 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_76);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_st_ref_get(x_7, x_78);
lean_dec(x_7);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_st_ref_take(x_2, x_80);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = !lean_is_exclusive(x_82);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_85 = lean_ctor_get(x_82, 2);
x_86 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_86, 0, x_35);
x_87 = lean_array_push(x_85, x_86);
lean_ctor_set(x_82, 2, x_87);
x_88 = lean_st_ref_set(x_2, x_82, x_83);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_88, 0);
lean_dec(x_90);
x_91 = lean_box(0);
lean_ctor_set(x_88, 0, x_91);
return x_88;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_88, 1);
lean_inc(x_92);
lean_dec(x_88);
x_93 = lean_box(0);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_95 = lean_ctor_get(x_82, 0);
x_96 = lean_ctor_get(x_82, 1);
x_97 = lean_ctor_get(x_82, 2);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_82);
x_98 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_98, 0, x_35);
x_99 = lean_array_push(x_97, x_98);
x_100 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_100, 0, x_95);
lean_ctor_set(x_100, 1, x_96);
lean_ctor_set(x_100, 2, x_99);
x_101 = lean_st_ref_set(x_2, x_100, x_83);
lean_dec(x_2);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_103 = x_101;
} else {
 lean_dec_ref(x_101);
 x_103 = lean_box(0);
}
x_104 = lean_box(0);
if (lean_is_scalar(x_103)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_103;
}
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_102);
return x_105;
}
}
else
{
uint8_t x_106; 
lean_dec(x_35);
lean_dec(x_7);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_77);
if (x_106 == 0)
{
return x_77;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_77, 0);
x_108 = lean_ctor_get(x_77, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_77);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_110 = !lean_is_exclusive(x_41);
if (x_110 == 0)
{
return x_41;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_41, 0);
x_112 = lean_ctor_get(x_41, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_41);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_1);
x_114 = lean_ctor_get(x_27, 1);
lean_inc(x_114);
lean_dec(x_27);
x_115 = lean_ctor_get(x_28, 0);
lean_inc(x_115);
lean_dec(x_28);
x_116 = lean_ctor_get(x_115, 2);
lean_inc(x_116);
lean_inc(x_7);
lean_inc(x_2);
x_117 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_116, x_2, x_3, x_4, x_5, x_6, x_7, x_114);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_118 = lean_ctor_get(x_117, 1);
lean_inc(x_118);
lean_dec(x_117);
x_119 = lean_st_ref_get(x_7, x_118);
lean_dec(x_7);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
x_121 = lean_st_ref_take(x_2, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = !lean_is_exclusive(x_122);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_125 = lean_ctor_get(x_122, 1);
x_126 = lean_array_push(x_125, x_115);
lean_ctor_set(x_122, 1, x_126);
x_127 = lean_st_ref_set(x_2, x_122, x_123);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_127, 0);
lean_dec(x_129);
x_130 = lean_box(0);
lean_ctor_set(x_127, 0, x_130);
return x_127;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_127, 1);
lean_inc(x_131);
lean_dec(x_127);
x_132 = lean_box(0);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_134 = lean_ctor_get(x_122, 0);
x_135 = lean_ctor_get(x_122, 1);
x_136 = lean_ctor_get(x_122, 2);
lean_inc(x_136);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_122);
x_137 = lean_array_push(x_135, x_115);
x_138 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_138, 0, x_134);
lean_ctor_set(x_138, 1, x_137);
lean_ctor_set(x_138, 2, x_136);
x_139 = lean_st_ref_set(x_2, x_138, x_123);
lean_dec(x_2);
x_140 = lean_ctor_get(x_139, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_141 = x_139;
} else {
 lean_dec_ref(x_139);
 x_141 = lean_box(0);
}
x_142 = lean_box(0);
if (lean_is_scalar(x_141)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_141;
}
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_140);
return x_143;
}
}
else
{
uint8_t x_144; 
lean_dec(x_115);
lean_dec(x_7);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_117);
if (x_144 == 0)
{
return x_117;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_117, 0);
x_146 = lean_ctor_get(x_117, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_117);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_1);
x_148 = lean_ctor_get(x_24, 1);
lean_inc(x_148);
lean_dec(x_24);
x_149 = lean_ctor_get(x_25, 0);
lean_inc(x_149);
lean_dec(x_25);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_149);
x_150 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFunDecl(x_149, x_2, x_3, x_4, x_5, x_6, x_7, x_148);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
x_151 = lean_ctor_get(x_150, 1);
lean_inc(x_151);
lean_dec(x_150);
x_152 = lean_st_ref_get(x_7, x_151);
lean_dec(x_7);
x_153 = lean_ctor_get(x_152, 1);
lean_inc(x_153);
lean_dec(x_152);
x_154 = lean_st_ref_take(x_2, x_153);
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
x_157 = !lean_is_exclusive(x_155);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; uint8_t x_162; 
x_158 = lean_ctor_get(x_155, 2);
x_159 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_159, 0, x_149);
x_160 = lean_array_push(x_158, x_159);
lean_ctor_set(x_155, 2, x_160);
x_161 = lean_st_ref_set(x_2, x_155, x_156);
lean_dec(x_2);
x_162 = !lean_is_exclusive(x_161);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; 
x_163 = lean_ctor_get(x_161, 0);
lean_dec(x_163);
x_164 = lean_box(0);
lean_ctor_set(x_161, 0, x_164);
return x_161;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_161, 1);
lean_inc(x_165);
lean_dec(x_161);
x_166 = lean_box(0);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_165);
return x_167;
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_168 = lean_ctor_get(x_155, 0);
x_169 = lean_ctor_get(x_155, 1);
x_170 = lean_ctor_get(x_155, 2);
lean_inc(x_170);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_155);
x_171 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_171, 0, x_149);
x_172 = lean_array_push(x_170, x_171);
x_173 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_173, 0, x_168);
lean_ctor_set(x_173, 1, x_169);
lean_ctor_set(x_173, 2, x_172);
x_174 = lean_st_ref_set(x_2, x_173, x_156);
lean_dec(x_2);
x_175 = lean_ctor_get(x_174, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_176 = x_174;
} else {
 lean_dec_ref(x_174);
 x_176 = lean_box(0);
}
x_177 = lean_box(0);
if (lean_is_scalar(x_176)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_176;
}
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_175);
return x_178;
}
}
else
{
uint8_t x_179; 
lean_dec(x_149);
lean_dec(x_7);
lean_dec(x_2);
x_179 = !lean_is_exclusive(x_150);
if (x_179 == 0)
{
return x_150;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_150, 0);
x_181 = lean_ctor_get(x_150, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_150);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_17, 1);
lean_inc(x_183);
lean_dec(x_17);
x_184 = lean_ctor_get(x_3, 0);
lean_inc(x_184);
x_185 = l_Std_RBNode_findCore___at_Lean_Compiler_LCNF_Code_bind_go___spec__1(x_184, x_1);
lean_dec(x_184);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; lean_object* x_187; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_186 = lean_box(0);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_183);
return x_187;
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_185);
lean_inc(x_1);
x_188 = l_Lean_Compiler_LCNF_findFunDecl_x3f(x_1, x_5, x_6, x_7, x_183);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
lean_inc(x_1);
x_191 = l_Lean_Compiler_LCNF_findParam_x3f(x_1, x_5, x_6, x_7, x_190);
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = l_Lean_Compiler_LCNF_findLetDecl_x3f(x_1, x_5, x_6, x_7, x_193);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__4;
x_198 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1(x_197, x_2, x_3, x_4, x_5, x_6, x_7, x_196);
return x_198;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_199 = lean_ctor_get(x_195, 0);
lean_inc(x_199);
lean_dec(x_195);
x_200 = lean_ctor_get(x_194, 1);
lean_inc(x_200);
lean_dec(x_194);
x_201 = lean_ctor_get(x_199, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 1);
lean_inc(x_202);
x_203 = lean_ctor_get(x_199, 2);
lean_inc(x_203);
x_204 = lean_ctor_get(x_199, 3);
lean_inc(x_204);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_203);
x_205 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_203, x_2, x_3, x_4, x_5, x_6, x_7, x_200);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; uint8_t x_209; 
x_206 = lean_ctor_get(x_205, 1);
lean_inc(x_206);
lean_dec(x_205);
x_207 = l_Lean_Compiler_LCNF_Specialize_isGround(x_204, x_3, x_4, x_5, x_6, x_7, x_206);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_unbox(x_208);
lean_dec(x_208);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_204);
lean_dec(x_199);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_210 = lean_ctor_get(x_207, 1);
lean_inc(x_210);
lean_dec(x_207);
x_211 = lean_st_ref_get(x_7, x_210);
lean_dec(x_7);
x_212 = lean_ctor_get(x_211, 1);
lean_inc(x_212);
lean_dec(x_211);
x_213 = lean_st_ref_take(x_2, x_212);
x_214 = lean_ctor_get(x_213, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_213, 1);
lean_inc(x_215);
lean_dec(x_213);
x_216 = lean_ctor_get(x_214, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_214, 1);
lean_inc(x_217);
x_218 = lean_ctor_get(x_214, 2);
lean_inc(x_218);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 lean_ctor_release(x_214, 2);
 x_219 = x_214;
} else {
 lean_dec_ref(x_214);
 x_219 = lean_box(0);
}
x_220 = 0;
x_221 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_221, 0, x_201);
lean_ctor_set(x_221, 1, x_202);
lean_ctor_set(x_221, 2, x_203);
lean_ctor_set_uint8(x_221, sizeof(void*)*3, x_220);
x_222 = lean_array_push(x_217, x_221);
if (lean_is_scalar(x_219)) {
 x_223 = lean_alloc_ctor(0, 3, 0);
} else {
 x_223 = x_219;
}
lean_ctor_set(x_223, 0, x_216);
lean_ctor_set(x_223, 1, x_222);
lean_ctor_set(x_223, 2, x_218);
x_224 = lean_st_ref_set(x_2, x_223, x_215);
lean_dec(x_2);
x_225 = lean_ctor_get(x_224, 1);
lean_inc(x_225);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_226 = x_224;
} else {
 lean_dec_ref(x_224);
 x_226 = lean_box(0);
}
x_227 = lean_box(0);
if (lean_is_scalar(x_226)) {
 x_228 = lean_alloc_ctor(0, 2, 0);
} else {
 x_228 = x_226;
}
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_225);
return x_228;
}
else
{
lean_object* x_229; lean_object* x_230; 
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_201);
x_229 = lean_ctor_get(x_207, 1);
lean_inc(x_229);
lean_dec(x_207);
lean_inc(x_7);
lean_inc(x_2);
x_230 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_204, x_2, x_3, x_4, x_5, x_6, x_7, x_229);
if (lean_obj_tag(x_230) == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_231 = lean_ctor_get(x_230, 1);
lean_inc(x_231);
lean_dec(x_230);
x_232 = lean_st_ref_get(x_7, x_231);
lean_dec(x_7);
x_233 = lean_ctor_get(x_232, 1);
lean_inc(x_233);
lean_dec(x_232);
x_234 = lean_st_ref_take(x_2, x_233);
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_234, 1);
lean_inc(x_236);
lean_dec(x_234);
x_237 = lean_ctor_get(x_235, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_235, 1);
lean_inc(x_238);
x_239 = lean_ctor_get(x_235, 2);
lean_inc(x_239);
if (lean_is_exclusive(x_235)) {
 lean_ctor_release(x_235, 0);
 lean_ctor_release(x_235, 1);
 lean_ctor_release(x_235, 2);
 x_240 = x_235;
} else {
 lean_dec_ref(x_235);
 x_240 = lean_box(0);
}
x_241 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_241, 0, x_199);
x_242 = lean_array_push(x_239, x_241);
if (lean_is_scalar(x_240)) {
 x_243 = lean_alloc_ctor(0, 3, 0);
} else {
 x_243 = x_240;
}
lean_ctor_set(x_243, 0, x_237);
lean_ctor_set(x_243, 1, x_238);
lean_ctor_set(x_243, 2, x_242);
x_244 = lean_st_ref_set(x_2, x_243, x_236);
lean_dec(x_2);
x_245 = lean_ctor_get(x_244, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 lean_ctor_release(x_244, 1);
 x_246 = x_244;
} else {
 lean_dec_ref(x_244);
 x_246 = lean_box(0);
}
x_247 = lean_box(0);
if (lean_is_scalar(x_246)) {
 x_248 = lean_alloc_ctor(0, 2, 0);
} else {
 x_248 = x_246;
}
lean_ctor_set(x_248, 0, x_247);
lean_ctor_set(x_248, 1, x_245);
return x_248;
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_199);
lean_dec(x_7);
lean_dec(x_2);
x_249 = lean_ctor_get(x_230, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_230, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_251 = x_230;
} else {
 lean_dec_ref(x_230);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
}
lean_ctor_set(x_252, 0, x_249);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_199);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_253 = lean_ctor_get(x_205, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_205, 1);
lean_inc(x_254);
if (lean_is_exclusive(x_205)) {
 lean_ctor_release(x_205, 0);
 lean_ctor_release(x_205, 1);
 x_255 = x_205;
} else {
 lean_dec_ref(x_205);
 x_255 = lean_box(0);
}
if (lean_is_scalar(x_255)) {
 x_256 = lean_alloc_ctor(1, 2, 0);
} else {
 x_256 = x_255;
}
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
lean_dec(x_1);
x_257 = lean_ctor_get(x_191, 1);
lean_inc(x_257);
lean_dec(x_191);
x_258 = lean_ctor_get(x_192, 0);
lean_inc(x_258);
lean_dec(x_192);
x_259 = lean_ctor_get(x_258, 2);
lean_inc(x_259);
lean_inc(x_7);
lean_inc(x_2);
x_260 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_259, x_2, x_3, x_4, x_5, x_6, x_7, x_257);
if (lean_obj_tag(x_260) == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_261 = lean_ctor_get(x_260, 1);
lean_inc(x_261);
lean_dec(x_260);
x_262 = lean_st_ref_get(x_7, x_261);
lean_dec(x_7);
x_263 = lean_ctor_get(x_262, 1);
lean_inc(x_263);
lean_dec(x_262);
x_264 = lean_st_ref_take(x_2, x_263);
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
x_267 = lean_ctor_get(x_265, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_265, 1);
lean_inc(x_268);
x_269 = lean_ctor_get(x_265, 2);
lean_inc(x_269);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 lean_ctor_release(x_265, 2);
 x_270 = x_265;
} else {
 lean_dec_ref(x_265);
 x_270 = lean_box(0);
}
x_271 = lean_array_push(x_268, x_258);
if (lean_is_scalar(x_270)) {
 x_272 = lean_alloc_ctor(0, 3, 0);
} else {
 x_272 = x_270;
}
lean_ctor_set(x_272, 0, x_267);
lean_ctor_set(x_272, 1, x_271);
lean_ctor_set(x_272, 2, x_269);
x_273 = lean_st_ref_set(x_2, x_272, x_266);
lean_dec(x_2);
x_274 = lean_ctor_get(x_273, 1);
lean_inc(x_274);
if (lean_is_exclusive(x_273)) {
 lean_ctor_release(x_273, 0);
 lean_ctor_release(x_273, 1);
 x_275 = x_273;
} else {
 lean_dec_ref(x_273);
 x_275 = lean_box(0);
}
x_276 = lean_box(0);
if (lean_is_scalar(x_275)) {
 x_277 = lean_alloc_ctor(0, 2, 0);
} else {
 x_277 = x_275;
}
lean_ctor_set(x_277, 0, x_276);
lean_ctor_set(x_277, 1, x_274);
return x_277;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
lean_dec(x_258);
lean_dec(x_7);
lean_dec(x_2);
x_278 = lean_ctor_get(x_260, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_260, 1);
lean_inc(x_279);
if (lean_is_exclusive(x_260)) {
 lean_ctor_release(x_260, 0);
 lean_ctor_release(x_260, 1);
 x_280 = x_260;
} else {
 lean_dec_ref(x_260);
 x_280 = lean_box(0);
}
if (lean_is_scalar(x_280)) {
 x_281 = lean_alloc_ctor(1, 2, 0);
} else {
 x_281 = x_280;
}
lean_ctor_set(x_281, 0, x_278);
lean_ctor_set(x_281, 1, x_279);
return x_281;
}
}
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
lean_dec(x_1);
x_282 = lean_ctor_get(x_188, 1);
lean_inc(x_282);
lean_dec(x_188);
x_283 = lean_ctor_get(x_189, 0);
lean_inc(x_283);
lean_dec(x_189);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_283);
x_284 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFunDecl(x_283, x_2, x_3, x_4, x_5, x_6, x_7, x_282);
if (lean_obj_tag(x_284) == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_285 = lean_ctor_get(x_284, 1);
lean_inc(x_285);
lean_dec(x_284);
x_286 = lean_st_ref_get(x_7, x_285);
lean_dec(x_7);
x_287 = lean_ctor_get(x_286, 1);
lean_inc(x_287);
lean_dec(x_286);
x_288 = lean_st_ref_take(x_2, x_287);
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
x_291 = lean_ctor_get(x_289, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_289, 1);
lean_inc(x_292);
x_293 = lean_ctor_get(x_289, 2);
lean_inc(x_293);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 lean_ctor_release(x_289, 1);
 lean_ctor_release(x_289, 2);
 x_294 = x_289;
} else {
 lean_dec_ref(x_289);
 x_294 = lean_box(0);
}
x_295 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_295, 0, x_283);
x_296 = lean_array_push(x_293, x_295);
if (lean_is_scalar(x_294)) {
 x_297 = lean_alloc_ctor(0, 3, 0);
} else {
 x_297 = x_294;
}
lean_ctor_set(x_297, 0, x_291);
lean_ctor_set(x_297, 1, x_292);
lean_ctor_set(x_297, 2, x_296);
x_298 = lean_st_ref_set(x_2, x_297, x_290);
lean_dec(x_2);
x_299 = lean_ctor_get(x_298, 1);
lean_inc(x_299);
if (lean_is_exclusive(x_298)) {
 lean_ctor_release(x_298, 0);
 lean_ctor_release(x_298, 1);
 x_300 = x_298;
} else {
 lean_dec_ref(x_298);
 x_300 = lean_box(0);
}
x_301 = lean_box(0);
if (lean_is_scalar(x_300)) {
 x_302 = lean_alloc_ctor(0, 2, 0);
} else {
 x_302 = x_300;
}
lean_ctor_set(x_302, 0, x_301);
lean_ctor_set(x_302, 1, x_299);
return x_302;
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_283);
lean_dec(x_7);
lean_dec(x_2);
x_303 = lean_ctor_get(x_284, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_284, 1);
lean_inc(x_304);
if (lean_is_exclusive(x_284)) {
 lean_ctor_release(x_284, 0);
 lean_ctor_release(x_284, 1);
 x_305 = x_284;
} else {
 lean_dec_ref(x_284);
 x_305 = lean_box(0);
}
if (lean_is_scalar(x_305)) {
 x_306 = lean_alloc_ctor(1, 2, 0);
} else {
 x_306 = x_305;
}
lean_ctor_set(x_306, 0, x_303);
lean_ctor_set(x_306, 1, x_304);
return x_306;
}
}
}
}
}
else
{
lean_object* x_307; 
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_307 = lean_box(0);
lean_ctor_set(x_11, 0, x_307);
return x_11;
}
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_308 = lean_ctor_get(x_11, 0);
x_309 = lean_ctor_get(x_11, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_11);
x_310 = lean_ctor_get(x_308, 0);
lean_inc(x_310);
lean_dec(x_308);
x_311 = l_Std_RBNode_findCore___at_Lean_Compiler_LCNF_Code_bind_go___spec__1(x_310, x_1);
lean_dec(x_310);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_inc(x_1);
x_312 = l_Lean_Compiler_LCNF_Specialize_Collector_markVisited(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_309);
x_313 = lean_ctor_get(x_312, 1);
lean_inc(x_313);
if (lean_is_exclusive(x_312)) {
 lean_ctor_release(x_312, 0);
 lean_ctor_release(x_312, 1);
 x_314 = x_312;
} else {
 lean_dec_ref(x_312);
 x_314 = lean_box(0);
}
x_315 = lean_ctor_get(x_3, 0);
lean_inc(x_315);
x_316 = l_Std_RBNode_findCore___at_Lean_Compiler_LCNF_Code_bind_go___spec__1(x_315, x_1);
lean_dec(x_315);
if (lean_obj_tag(x_316) == 0)
{
lean_object* x_317; lean_object* x_318; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_317 = lean_box(0);
if (lean_is_scalar(x_314)) {
 x_318 = lean_alloc_ctor(0, 2, 0);
} else {
 x_318 = x_314;
}
lean_ctor_set(x_318, 0, x_317);
lean_ctor_set(x_318, 1, x_313);
return x_318;
}
else
{
lean_object* x_319; lean_object* x_320; 
lean_dec(x_316);
lean_dec(x_314);
lean_inc(x_1);
x_319 = l_Lean_Compiler_LCNF_findFunDecl_x3f(x_1, x_5, x_6, x_7, x_313);
x_320 = lean_ctor_get(x_319, 0);
lean_inc(x_320);
if (lean_obj_tag(x_320) == 0)
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_321 = lean_ctor_get(x_319, 1);
lean_inc(x_321);
lean_dec(x_319);
lean_inc(x_1);
x_322 = l_Lean_Compiler_LCNF_findParam_x3f(x_1, x_5, x_6, x_7, x_321);
x_323 = lean_ctor_get(x_322, 0);
lean_inc(x_323);
if (lean_obj_tag(x_323) == 0)
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; 
x_324 = lean_ctor_get(x_322, 1);
lean_inc(x_324);
lean_dec(x_322);
x_325 = l_Lean_Compiler_LCNF_findLetDecl_x3f(x_1, x_5, x_6, x_7, x_324);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_327 = lean_ctor_get(x_325, 1);
lean_inc(x_327);
lean_dec(x_325);
x_328 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__4;
x_329 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1(x_328, x_2, x_3, x_4, x_5, x_6, x_7, x_327);
return x_329;
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_330 = lean_ctor_get(x_326, 0);
lean_inc(x_330);
lean_dec(x_326);
x_331 = lean_ctor_get(x_325, 1);
lean_inc(x_331);
lean_dec(x_325);
x_332 = lean_ctor_get(x_330, 0);
lean_inc(x_332);
x_333 = lean_ctor_get(x_330, 1);
lean_inc(x_333);
x_334 = lean_ctor_get(x_330, 2);
lean_inc(x_334);
x_335 = lean_ctor_get(x_330, 3);
lean_inc(x_335);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_334);
x_336 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_334, x_2, x_3, x_4, x_5, x_6, x_7, x_331);
if (lean_obj_tag(x_336) == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; uint8_t x_340; 
x_337 = lean_ctor_get(x_336, 1);
lean_inc(x_337);
lean_dec(x_336);
x_338 = l_Lean_Compiler_LCNF_Specialize_isGround(x_335, x_3, x_4, x_5, x_6, x_7, x_337);
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_unbox(x_339);
lean_dec(x_339);
if (x_340 == 0)
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; uint8_t x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
lean_dec(x_335);
lean_dec(x_330);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_341 = lean_ctor_get(x_338, 1);
lean_inc(x_341);
lean_dec(x_338);
x_342 = lean_st_ref_get(x_7, x_341);
lean_dec(x_7);
x_343 = lean_ctor_get(x_342, 1);
lean_inc(x_343);
lean_dec(x_342);
x_344 = lean_st_ref_take(x_2, x_343);
x_345 = lean_ctor_get(x_344, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_344, 1);
lean_inc(x_346);
lean_dec(x_344);
x_347 = lean_ctor_get(x_345, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_345, 1);
lean_inc(x_348);
x_349 = lean_ctor_get(x_345, 2);
lean_inc(x_349);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 lean_ctor_release(x_345, 2);
 x_350 = x_345;
} else {
 lean_dec_ref(x_345);
 x_350 = lean_box(0);
}
x_351 = 0;
x_352 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_352, 0, x_332);
lean_ctor_set(x_352, 1, x_333);
lean_ctor_set(x_352, 2, x_334);
lean_ctor_set_uint8(x_352, sizeof(void*)*3, x_351);
x_353 = lean_array_push(x_348, x_352);
if (lean_is_scalar(x_350)) {
 x_354 = lean_alloc_ctor(0, 3, 0);
} else {
 x_354 = x_350;
}
lean_ctor_set(x_354, 0, x_347);
lean_ctor_set(x_354, 1, x_353);
lean_ctor_set(x_354, 2, x_349);
x_355 = lean_st_ref_set(x_2, x_354, x_346);
lean_dec(x_2);
x_356 = lean_ctor_get(x_355, 1);
lean_inc(x_356);
if (lean_is_exclusive(x_355)) {
 lean_ctor_release(x_355, 0);
 lean_ctor_release(x_355, 1);
 x_357 = x_355;
} else {
 lean_dec_ref(x_355);
 x_357 = lean_box(0);
}
x_358 = lean_box(0);
if (lean_is_scalar(x_357)) {
 x_359 = lean_alloc_ctor(0, 2, 0);
} else {
 x_359 = x_357;
}
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_356);
return x_359;
}
else
{
lean_object* x_360; lean_object* x_361; 
lean_dec(x_334);
lean_dec(x_333);
lean_dec(x_332);
x_360 = lean_ctor_get(x_338, 1);
lean_inc(x_360);
lean_dec(x_338);
lean_inc(x_7);
lean_inc(x_2);
x_361 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_335, x_2, x_3, x_4, x_5, x_6, x_7, x_360);
if (lean_obj_tag(x_361) == 0)
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_362 = lean_ctor_get(x_361, 1);
lean_inc(x_362);
lean_dec(x_361);
x_363 = lean_st_ref_get(x_7, x_362);
lean_dec(x_7);
x_364 = lean_ctor_get(x_363, 1);
lean_inc(x_364);
lean_dec(x_363);
x_365 = lean_st_ref_take(x_2, x_364);
x_366 = lean_ctor_get(x_365, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_365, 1);
lean_inc(x_367);
lean_dec(x_365);
x_368 = lean_ctor_get(x_366, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_366, 1);
lean_inc(x_369);
x_370 = lean_ctor_get(x_366, 2);
lean_inc(x_370);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 lean_ctor_release(x_366, 1);
 lean_ctor_release(x_366, 2);
 x_371 = x_366;
} else {
 lean_dec_ref(x_366);
 x_371 = lean_box(0);
}
x_372 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_372, 0, x_330);
x_373 = lean_array_push(x_370, x_372);
if (lean_is_scalar(x_371)) {
 x_374 = lean_alloc_ctor(0, 3, 0);
} else {
 x_374 = x_371;
}
lean_ctor_set(x_374, 0, x_368);
lean_ctor_set(x_374, 1, x_369);
lean_ctor_set(x_374, 2, x_373);
x_375 = lean_st_ref_set(x_2, x_374, x_367);
lean_dec(x_2);
x_376 = lean_ctor_get(x_375, 1);
lean_inc(x_376);
if (lean_is_exclusive(x_375)) {
 lean_ctor_release(x_375, 0);
 lean_ctor_release(x_375, 1);
 x_377 = x_375;
} else {
 lean_dec_ref(x_375);
 x_377 = lean_box(0);
}
x_378 = lean_box(0);
if (lean_is_scalar(x_377)) {
 x_379 = lean_alloc_ctor(0, 2, 0);
} else {
 x_379 = x_377;
}
lean_ctor_set(x_379, 0, x_378);
lean_ctor_set(x_379, 1, x_376);
return x_379;
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
lean_dec(x_330);
lean_dec(x_7);
lean_dec(x_2);
x_380 = lean_ctor_get(x_361, 0);
lean_inc(x_380);
x_381 = lean_ctor_get(x_361, 1);
lean_inc(x_381);
if (lean_is_exclusive(x_361)) {
 lean_ctor_release(x_361, 0);
 lean_ctor_release(x_361, 1);
 x_382 = x_361;
} else {
 lean_dec_ref(x_361);
 x_382 = lean_box(0);
}
if (lean_is_scalar(x_382)) {
 x_383 = lean_alloc_ctor(1, 2, 0);
} else {
 x_383 = x_382;
}
lean_ctor_set(x_383, 0, x_380);
lean_ctor_set(x_383, 1, x_381);
return x_383;
}
}
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; 
lean_dec(x_335);
lean_dec(x_334);
lean_dec(x_333);
lean_dec(x_332);
lean_dec(x_330);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_384 = lean_ctor_get(x_336, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_336, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_336)) {
 lean_ctor_release(x_336, 0);
 lean_ctor_release(x_336, 1);
 x_386 = x_336;
} else {
 lean_dec_ref(x_336);
 x_386 = lean_box(0);
}
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(1, 2, 0);
} else {
 x_387 = x_386;
}
lean_ctor_set(x_387, 0, x_384);
lean_ctor_set(x_387, 1, x_385);
return x_387;
}
}
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; 
lean_dec(x_1);
x_388 = lean_ctor_get(x_322, 1);
lean_inc(x_388);
lean_dec(x_322);
x_389 = lean_ctor_get(x_323, 0);
lean_inc(x_389);
lean_dec(x_323);
x_390 = lean_ctor_get(x_389, 2);
lean_inc(x_390);
lean_inc(x_7);
lean_inc(x_2);
x_391 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_390, x_2, x_3, x_4, x_5, x_6, x_7, x_388);
if (lean_obj_tag(x_391) == 0)
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_392 = lean_ctor_get(x_391, 1);
lean_inc(x_392);
lean_dec(x_391);
x_393 = lean_st_ref_get(x_7, x_392);
lean_dec(x_7);
x_394 = lean_ctor_get(x_393, 1);
lean_inc(x_394);
lean_dec(x_393);
x_395 = lean_st_ref_take(x_2, x_394);
x_396 = lean_ctor_get(x_395, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_395, 1);
lean_inc(x_397);
lean_dec(x_395);
x_398 = lean_ctor_get(x_396, 0);
lean_inc(x_398);
x_399 = lean_ctor_get(x_396, 1);
lean_inc(x_399);
x_400 = lean_ctor_get(x_396, 2);
lean_inc(x_400);
if (lean_is_exclusive(x_396)) {
 lean_ctor_release(x_396, 0);
 lean_ctor_release(x_396, 1);
 lean_ctor_release(x_396, 2);
 x_401 = x_396;
} else {
 lean_dec_ref(x_396);
 x_401 = lean_box(0);
}
x_402 = lean_array_push(x_399, x_389);
if (lean_is_scalar(x_401)) {
 x_403 = lean_alloc_ctor(0, 3, 0);
} else {
 x_403 = x_401;
}
lean_ctor_set(x_403, 0, x_398);
lean_ctor_set(x_403, 1, x_402);
lean_ctor_set(x_403, 2, x_400);
x_404 = lean_st_ref_set(x_2, x_403, x_397);
lean_dec(x_2);
x_405 = lean_ctor_get(x_404, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 x_406 = x_404;
} else {
 lean_dec_ref(x_404);
 x_406 = lean_box(0);
}
x_407 = lean_box(0);
if (lean_is_scalar(x_406)) {
 x_408 = lean_alloc_ctor(0, 2, 0);
} else {
 x_408 = x_406;
}
lean_ctor_set(x_408, 0, x_407);
lean_ctor_set(x_408, 1, x_405);
return x_408;
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; 
lean_dec(x_389);
lean_dec(x_7);
lean_dec(x_2);
x_409 = lean_ctor_get(x_391, 0);
lean_inc(x_409);
x_410 = lean_ctor_get(x_391, 1);
lean_inc(x_410);
if (lean_is_exclusive(x_391)) {
 lean_ctor_release(x_391, 0);
 lean_ctor_release(x_391, 1);
 x_411 = x_391;
} else {
 lean_dec_ref(x_391);
 x_411 = lean_box(0);
}
if (lean_is_scalar(x_411)) {
 x_412 = lean_alloc_ctor(1, 2, 0);
} else {
 x_412 = x_411;
}
lean_ctor_set(x_412, 0, x_409);
lean_ctor_set(x_412, 1, x_410);
return x_412;
}
}
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; 
lean_dec(x_1);
x_413 = lean_ctor_get(x_319, 1);
lean_inc(x_413);
lean_dec(x_319);
x_414 = lean_ctor_get(x_320, 0);
lean_inc(x_414);
lean_dec(x_320);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_414);
x_415 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFunDecl(x_414, x_2, x_3, x_4, x_5, x_6, x_7, x_413);
if (lean_obj_tag(x_415) == 0)
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_416 = lean_ctor_get(x_415, 1);
lean_inc(x_416);
lean_dec(x_415);
x_417 = lean_st_ref_get(x_7, x_416);
lean_dec(x_7);
x_418 = lean_ctor_get(x_417, 1);
lean_inc(x_418);
lean_dec(x_417);
x_419 = lean_st_ref_take(x_2, x_418);
x_420 = lean_ctor_get(x_419, 0);
lean_inc(x_420);
x_421 = lean_ctor_get(x_419, 1);
lean_inc(x_421);
lean_dec(x_419);
x_422 = lean_ctor_get(x_420, 0);
lean_inc(x_422);
x_423 = lean_ctor_get(x_420, 1);
lean_inc(x_423);
x_424 = lean_ctor_get(x_420, 2);
lean_inc(x_424);
if (lean_is_exclusive(x_420)) {
 lean_ctor_release(x_420, 0);
 lean_ctor_release(x_420, 1);
 lean_ctor_release(x_420, 2);
 x_425 = x_420;
} else {
 lean_dec_ref(x_420);
 x_425 = lean_box(0);
}
x_426 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_426, 0, x_414);
x_427 = lean_array_push(x_424, x_426);
if (lean_is_scalar(x_425)) {
 x_428 = lean_alloc_ctor(0, 3, 0);
} else {
 x_428 = x_425;
}
lean_ctor_set(x_428, 0, x_422);
lean_ctor_set(x_428, 1, x_423);
lean_ctor_set(x_428, 2, x_427);
x_429 = lean_st_ref_set(x_2, x_428, x_421);
lean_dec(x_2);
x_430 = lean_ctor_get(x_429, 1);
lean_inc(x_430);
if (lean_is_exclusive(x_429)) {
 lean_ctor_release(x_429, 0);
 lean_ctor_release(x_429, 1);
 x_431 = x_429;
} else {
 lean_dec_ref(x_429);
 x_431 = lean_box(0);
}
x_432 = lean_box(0);
if (lean_is_scalar(x_431)) {
 x_433 = lean_alloc_ctor(0, 2, 0);
} else {
 x_433 = x_431;
}
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_430);
return x_433;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; 
lean_dec(x_414);
lean_dec(x_7);
lean_dec(x_2);
x_434 = lean_ctor_get(x_415, 0);
lean_inc(x_434);
x_435 = lean_ctor_get(x_415, 1);
lean_inc(x_435);
if (lean_is_exclusive(x_415)) {
 lean_ctor_release(x_415, 0);
 lean_ctor_release(x_415, 1);
 x_436 = x_415;
} else {
 lean_dec_ref(x_415);
 x_436 = lean_box(0);
}
if (lean_is_scalar(x_436)) {
 x_437 = lean_alloc_ctor(1, 2, 0);
} else {
 x_437 = x_436;
}
lean_ctor_set(x_437, 0, x_434);
lean_ctor_set(x_437, 1, x_435);
return x_437;
}
}
}
}
else
{
lean_object* x_438; lean_object* x_439; 
lean_dec(x_311);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_438 = lean_box(0);
x_439 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_439, 0, x_438);
lean_ctor_set(x_439, 1, x_309);
return x_439;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectFunDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_Compiler_LCNF_Specialize_Collector_collectParams(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
lean_dec(x_1);
x_16 = l_Lean_Compiler_LCNF_Specialize_Collector_collectCode(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_eq(x_2, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = lean_usize_add(x_2, x_17);
x_2 = x_18;
x_4 = x_15;
x_11 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_eq(x_2, x_3);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 2);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Compiler_LCNF_Specialize_Collector_collectParams(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Compiler_LCNF_Specialize_Collector_collectCode(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = lean_usize_add(x_2, x_21);
x_2 = x_22;
x_4 = x_19;
x_11 = x_20;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
return x_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_33 = l_Lean_Compiler_LCNF_Specialize_Collector_collectCode(x_32, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = 1;
x_37 = lean_usize_add(x_2, x_36);
x_2 = x_37;
x_4 = x_34;
x_11 = x_35;
goto _start;
}
else
{
uint8_t x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_33);
if (x_39 == 0)
{
return x_33;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_33, 0);
x_41 = lean_ctor_get(x_33, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_33);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
lean_object* x_43; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_4);
lean_ctor_set(x_43, 1, x_11);
return x_43;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectCode(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 2);
lean_inc(x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_9, 3);
lean_inc(x_14);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_1 = x_10;
x_8 = x_16;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
case 3:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_array_get_size(x_26);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_lt(x_28, x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_8);
return x_31;
}
else
{
uint8_t x_32; 
x_32 = lean_nat_dec_le(x_27, x_27);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_8);
return x_34;
}
else
{
size_t x_35; size_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = 0;
x_36 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_37 = lean_box(0);
x_38 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__1(x_26, x_35, x_36, x_37, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_26);
return x_38;
}
}
}
case 4:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_41 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_39, 2);
lean_inc(x_43);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_44 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar(x_43, x_2, x_3, x_4, x_5, x_6, x_7, x_42);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_46 = lean_ctor_get(x_44, 1);
x_47 = lean_ctor_get(x_44, 0);
lean_dec(x_47);
x_48 = lean_ctor_get(x_39, 3);
lean_inc(x_48);
lean_dec(x_39);
x_49 = lean_array_get_size(x_48);
x_50 = lean_unsigned_to_nat(0u);
x_51 = lean_nat_dec_lt(x_50, x_49);
if (x_51 == 0)
{
lean_object* x_52; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_box(0);
lean_ctor_set(x_44, 0, x_52);
return x_44;
}
else
{
uint8_t x_53; 
x_53 = lean_nat_dec_le(x_49, x_49);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = lean_box(0);
lean_ctor_set(x_44, 0, x_54);
return x_44;
}
else
{
size_t x_55; size_t x_56; lean_object* x_57; lean_object* x_58; 
lean_free_object(x_44);
x_55 = 0;
x_56 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_57 = lean_box(0);
x_58 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__2(x_48, x_55, x_56, x_57, x_2, x_3, x_4, x_5, x_6, x_7, x_46);
lean_dec(x_48);
return x_58;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_44, 1);
lean_inc(x_59);
lean_dec(x_44);
x_60 = lean_ctor_get(x_39, 3);
lean_inc(x_60);
lean_dec(x_39);
x_61 = lean_array_get_size(x_60);
x_62 = lean_unsigned_to_nat(0u);
x_63 = lean_nat_dec_lt(x_62, x_61);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_59);
return x_65;
}
else
{
uint8_t x_66; 
x_66 = lean_nat_dec_le(x_61, x_61);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_59);
return x_68;
}
else
{
size_t x_69; size_t x_70; lean_object* x_71; lean_object* x_72; 
x_69 = 0;
x_70 = lean_usize_of_nat(x_61);
lean_dec(x_61);
x_71 = lean_box(0);
x_72 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__2(x_60, x_69, x_70, x_71, x_2, x_3, x_4, x_5, x_6, x_7, x_59);
lean_dec(x_60);
return x_72;
}
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_39);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_44);
if (x_73 == 0)
{
return x_44;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_44, 0);
x_75 = lean_ctor_get(x_44, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_44);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_39);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_77 = !lean_is_exclusive(x_41);
if (x_77 == 0)
{
return x_41;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_41, 0);
x_79 = lean_ctor_get(x_41, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_41);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
case 5:
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_1, 0);
lean_inc(x_81);
lean_dec(x_1);
x_82 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar(x_81, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_82;
}
case 6:
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_1, 0);
lean_inc(x_83);
lean_dec(x_1);
x_84 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_83, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_84;
}
default: 
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_1, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_1, 1);
lean_inc(x_86);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_87 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFunDecl(x_85, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_1 = x_86;
x_8 = x_88;
goto _start;
}
else
{
uint8_t x_90; 
lean_dec(x_86);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_90 = !lean_is_exclusive(x_87);
if (x_90 == 0)
{
return x_87;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_87, 0);
x_92 = lean_ctor_get(x_87, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_87);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectParams___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collectParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Compiler_LCNF_Specialize_Collector_collectParams(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ForEachExpr_visit___at_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_Collector_collectCode___spec__2(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_Collector_collect___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_3, x_2);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; uint8_t x_25; 
x_14 = lean_array_uget(x_1, x_3);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
x_25 = !lean_is_exclusive(x_4);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_4, 0);
x_27 = lean_ctor_get(x_4, 1);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_26, 2);
lean_inc(x_30);
x_31 = lean_nat_dec_lt(x_29, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_4);
x_16 = x_32;
x_17 = x_11;
goto block_24;
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_26);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_26, 2);
lean_dec(x_34);
x_35 = lean_ctor_get(x_26, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_26, 0);
lean_dec(x_36);
x_37 = lean_array_fget(x_28, x_29);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_29, x_38);
lean_dec(x_29);
lean_ctor_set(x_26, 1, x_39);
x_40 = lean_box(x_15);
if (lean_obj_tag(x_40) == 4)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_37);
x_41 = lean_box(0);
x_42 = lean_array_push(x_27, x_41);
lean_ctor_set(x_4, 1, x_42);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_4);
x_16 = x_43;
x_17 = x_11;
goto block_24;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_40);
lean_inc(x_37);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_37);
x_45 = lean_array_push(x_27, x_44);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_46 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
lean_ctor_set(x_4, 1, x_45);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_4);
x_16 = x_48;
x_17 = x_47;
goto block_24;
}
else
{
uint8_t x_49; 
lean_dec(x_45);
lean_dec(x_26);
lean_free_object(x_4);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_49 = !lean_is_exclusive(x_46);
if (x_49 == 0)
{
return x_46;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_46, 0);
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_46);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_26);
x_53 = lean_array_fget(x_28, x_29);
x_54 = lean_unsigned_to_nat(1u);
x_55 = lean_nat_add(x_29, x_54);
lean_dec(x_29);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_28);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_56, 2, x_30);
x_57 = lean_box(x_15);
if (lean_obj_tag(x_57) == 4)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_53);
x_58 = lean_box(0);
x_59 = lean_array_push(x_27, x_58);
lean_ctor_set(x_4, 1, x_59);
lean_ctor_set(x_4, 0, x_56);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_4);
x_16 = x_60;
x_17 = x_11;
goto block_24;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_57);
lean_inc(x_53);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_53);
x_62 = lean_array_push(x_27, x_61);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_63 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
lean_ctor_set(x_4, 1, x_62);
lean_ctor_set(x_4, 0, x_56);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_4);
x_16 = x_65;
x_17 = x_64;
goto block_24;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_62);
lean_dec(x_56);
lean_free_object(x_4);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_66 = lean_ctor_get(x_63, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_68 = x_63;
} else {
 lean_dec_ref(x_63);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
}
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_70 = lean_ctor_get(x_4, 0);
x_71 = lean_ctor_get(x_4, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_4);
x_72 = lean_ctor_get(x_70, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
x_74 = lean_ctor_get(x_70, 2);
lean_inc(x_74);
x_75 = lean_nat_dec_lt(x_73, x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_70);
lean_ctor_set(x_76, 1, x_71);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_16 = x_77;
x_17 = x_11;
goto block_24;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 lean_ctor_release(x_70, 2);
 x_78 = x_70;
} else {
 lean_dec_ref(x_70);
 x_78 = lean_box(0);
}
x_79 = lean_array_fget(x_72, x_73);
x_80 = lean_unsigned_to_nat(1u);
x_81 = lean_nat_add(x_73, x_80);
lean_dec(x_73);
if (lean_is_scalar(x_78)) {
 x_82 = lean_alloc_ctor(0, 3, 0);
} else {
 x_82 = x_78;
}
lean_ctor_set(x_82, 0, x_72);
lean_ctor_set(x_82, 1, x_81);
lean_ctor_set(x_82, 2, x_74);
x_83 = lean_box(x_15);
if (lean_obj_tag(x_83) == 4)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_79);
x_84 = lean_box(0);
x_85 = lean_array_push(x_71, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_82);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_16 = x_87;
x_17 = x_11;
goto block_24;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_83);
lean_inc(x_79);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_79);
x_89 = lean_array_push(x_71, x_88);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_90 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr(x_79, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_82);
lean_ctor_set(x_92, 1, x_89);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_16 = x_93;
x_17 = x_91;
goto block_24;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_89);
lean_dec(x_82);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_94 = lean_ctor_get(x_90, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_90, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_96 = x_90;
} else {
 lean_dec_ref(x_90);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
}
block_24:
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; 
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
lean_dec(x_16);
x_21 = 1;
x_22 = lean_usize_add(x_3, x_21);
x_3 = x_22;
x_4 = x_20;
x_11 = x_17;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collect(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_toSubarray___rarg(x_2, x_11, x_10);
x_13 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_array_get_size(x_1);
x_16 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_17 = 0;
x_18 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_Collector_collect___spec__1(x_1, x_16, x_17, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_Collector_collect___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_Collector_collect___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_Collector_collect___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Compiler_LCNF_Specialize_Collector_collect(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_4, x_3);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; uint8_t x_25; 
x_14 = lean_array_uget(x_2, x_4);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
x_25 = !lean_is_exclusive(x_5);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_5, 1);
x_27 = lean_ctor_get(x_5, 0);
lean_dec(x_27);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_26, 2);
lean_inc(x_30);
x_31 = lean_nat_dec_lt(x_29, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_5);
x_16 = x_32;
x_17 = x_11;
goto block_24;
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_26);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_26, 2);
lean_dec(x_34);
x_35 = lean_ctor_get(x_26, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_26, 0);
lean_dec(x_36);
x_37 = lean_array_fget(x_28, x_29);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_29, x_38);
lean_dec(x_29);
lean_ctor_set(x_26, 1, x_39);
x_40 = lean_box(x_15);
switch (lean_obj_tag(x_40)) {
case 1:
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_37);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1;
lean_ctor_set(x_5, 0, x_41);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_5);
x_16 = x_42;
x_17 = x_11;
goto block_24;
}
case 2:
{
lean_object* x_43; 
lean_dec(x_37);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_5);
x_16 = x_43;
x_17 = x_11;
goto block_24;
}
case 4:
{
lean_object* x_44; 
lean_dec(x_37);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_5);
x_16 = x_44;
x_17 = x_11;
goto block_24;
}
default: 
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_40);
x_45 = l_Lean_Compiler_LCNF_Specialize_isGround(x_37, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_37);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_unbox(x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_5);
x_16 = x_49;
x_17 = x_48;
goto block_24;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_dec(x_45);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1;
lean_ctor_set(x_5, 0, x_51);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_5);
x_16 = x_52;
x_17 = x_50;
goto block_24;
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_26);
x_53 = lean_array_fget(x_28, x_29);
x_54 = lean_unsigned_to_nat(1u);
x_55 = lean_nat_add(x_29, x_54);
lean_dec(x_29);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_28);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_56, 2, x_30);
x_57 = lean_box(x_15);
switch (lean_obj_tag(x_57)) {
case 1:
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_53);
x_58 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1;
lean_ctor_set(x_5, 1, x_56);
lean_ctor_set(x_5, 0, x_58);
x_59 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_59, 0, x_5);
x_16 = x_59;
x_17 = x_11;
goto block_24;
}
case 2:
{
lean_object* x_60; 
lean_dec(x_53);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_56);
lean_ctor_set(x_5, 0, x_1);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_5);
x_16 = x_60;
x_17 = x_11;
goto block_24;
}
case 4:
{
lean_object* x_61; 
lean_dec(x_53);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_56);
lean_ctor_set(x_5, 0, x_1);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_5);
x_16 = x_61;
x_17 = x_11;
goto block_24;
}
default: 
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_dec(x_57);
x_62 = l_Lean_Compiler_LCNF_Specialize_isGround(x_53, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_53);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_unbox(x_63);
lean_dec(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_dec(x_62);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_56);
lean_ctor_set(x_5, 0, x_1);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_5);
x_16 = x_66;
x_17 = x_65;
goto block_24;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_62, 1);
lean_inc(x_67);
lean_dec(x_62);
x_68 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1;
lean_ctor_set(x_5, 1, x_56);
lean_ctor_set(x_5, 0, x_68);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_5);
x_16 = x_69;
x_17 = x_67;
goto block_24;
}
}
}
}
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_70 = lean_ctor_get(x_5, 1);
lean_inc(x_70);
lean_dec(x_5);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_70, 2);
lean_inc(x_73);
x_74 = lean_nat_dec_lt(x_72, x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_inc(x_1);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_1);
lean_ctor_set(x_75, 1, x_70);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_16 = x_76;
x_17 = x_11;
goto block_24;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 lean_ctor_release(x_70, 2);
 x_77 = x_70;
} else {
 lean_dec_ref(x_70);
 x_77 = lean_box(0);
}
x_78 = lean_array_fget(x_71, x_72);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_nat_add(x_72, x_79);
lean_dec(x_72);
if (lean_is_scalar(x_77)) {
 x_81 = lean_alloc_ctor(0, 3, 0);
} else {
 x_81 = x_77;
}
lean_ctor_set(x_81, 0, x_71);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_81, 2, x_73);
x_82 = lean_box(x_15);
switch (lean_obj_tag(x_82)) {
case 1:
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_78);
x_83 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1;
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_16 = x_85;
x_17 = x_11;
goto block_24;
}
case 2:
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_78);
lean_inc(x_1);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_1);
lean_ctor_set(x_86, 1, x_81);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_16 = x_87;
x_17 = x_11;
goto block_24;
}
case 4:
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_78);
lean_inc(x_1);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_1);
lean_ctor_set(x_88, 1, x_81);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_16 = x_89;
x_17 = x_11;
goto block_24;
}
default: 
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; 
lean_dec(x_82);
x_90 = l_Lean_Compiler_LCNF_Specialize_isGround(x_78, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_78);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_unbox(x_91);
lean_dec(x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
lean_dec(x_90);
lean_inc(x_1);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_1);
lean_ctor_set(x_94, 1, x_81);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_16 = x_95;
x_17 = x_93;
goto block_24;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_dec(x_90);
x_97 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1;
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_81);
x_99 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_16 = x_99;
x_17 = x_96;
goto block_24;
}
}
}
}
}
block_24:
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; 
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
lean_dec(x_16);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_4 = x_22;
x_5 = x_20;
x_11 = x_17;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___lambda__1___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_get_size(x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_toSubarray___rarg(x_2, x_10, x_9);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = lean_array_get_size(x_1);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
x_17 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1(x_12, x_1, x_15, x_16, x_13, x_3, x_4, x_5, x_6, x_7, x_8);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___closed__1;
x_22 = lean_box(0);
x_23 = lean_apply_7(x_21, x_22, x_3, x_4, x_5, x_6, x_7, x_20);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_17, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_26);
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_dec(x_17);
x_28 = lean_ctor_get(x_19, 0);
lean_inc(x_28);
lean_dec(x_19);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1(x_1, x_2, x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Compiler_LCNF_Specialize_shouldSpecialize(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_expandCodeDecls_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = lean_expr_abstract(x_1, x_2);
x_9 = lean_expr_instantiate_rev(x_8, x_5);
lean_dec(x_5);
lean_dec(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_array_fget(x_3, x_4);
x_11 = lean_expr_abstract_range(x_10, x_4, x_2);
lean_dec(x_10);
x_12 = lean_expr_instantiate_rev(x_11, x_5);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_15 = lean_array_push(x_5, x_12);
x_4 = x_14;
x_5 = x_15;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_expandCodeDecls_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Compiler_LCNF_Specialize_expandCodeDecls_go(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = l_Lean_Compiler_LCNF_CodeDecl_fvarId(x_5);
lean_dec(x_5);
x_9 = l_Lean_Expr_fvar___override(x_8);
x_10 = 1;
x_11 = lean_usize_add(x_2, x_10);
x_12 = lean_array_uset(x_7, x_2, x_9);
x_2 = x_11;
x_3 = x_12;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_array_uset(x_7, x_2, x_11);
x_2 = x_9;
x_3 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
lean_dec(x_5);
x_15 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_16 = l_Lean_Compiler_LCNF_FunDeclCore_toExpr(x_14, x_15);
x_17 = lean_array_uset(x_7, x_2, x_16);
x_2 = x_9;
x_3 = x_17;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_expandCodeDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
lean_inc(x_1);
x_10 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__1(x_8, x_9, x_1);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__2(x_8, x_9, x_1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_14 = l_Lean_Compiler_LCNF_Specialize_expandCodeDecls_go(x_2, x_10, x_11, x_12, x_13);
lean_dec(x_11);
lean_dec(x_10);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_6);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_expandCodeDecls___spec__2(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_expandCodeDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Compiler_LCNF_Specialize_expandCodeDecls(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams_go___at_Lean_Compiler_LCNF_Specialize_mkKey___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ToExpr_abstractM___boxed), 3, 1);
lean_closure_set(x_7, 0, x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___boxed), 4, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_array_get_size(x_3);
x_10 = lean_nat_dec_lt(x_4, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_11 = l_ReaderT_bind___at_Lean_Compiler_LCNF_FunDeclCore_toExprM___spec__1___rarg(x_7, x_8, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
x_12 = lean_array_fget(x_3, x_4);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_4, x_14);
lean_dec(x_4);
lean_inc(x_5);
x_16 = l_Std_RBNode_insert___at_Lean_Compiler_LCNF_ToExpr_withFVar___spec__1(x_6, x_13, x_5);
x_17 = lean_nat_add(x_5, x_14);
lean_dec(x_5);
x_4 = x_15;
x_5 = x_17;
x_6 = x_16;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkKey(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Compiler_LCNF_Specialize_expandCodeDecls(x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_box(0);
x_12 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_13 = l_Lean_Compiler_LCNF_ToExpr_withParams_go___at_Lean_Compiler_LCNF_Specialize_mkKey___spec__1(x_1, x_10, x_1, x_12, x_12, x_11);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Compiler_LCNF_normLevelParams(x_14);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = lean_box(0);
x_19 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_20 = l_Lean_Compiler_LCNF_ToExpr_withParams_go___at_Lean_Compiler_LCNF_Specialize_mkKey___spec__1(x_1, x_16, x_1, x_19, x_19, x_18);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Compiler_LCNF_normLevelParams(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams_go___at_Lean_Compiler_LCNF_Specialize_mkKey___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Compiler_LCNF_ToExpr_withParams_go___at_Lean_Compiler_LCNF_Specialize_mkKey___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkKey___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Compiler_LCNF_Specialize_mkKey(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_2, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_11 = lean_array_uget(x_3, x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_3, x_2, x_12);
x_14 = l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(x_11, x_4, x_5, x_6, x_7, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = lean_usize_add(x_2, x_17);
x_19 = lean_array_uset(x_13, x_2, x_15);
x_2 = x_18;
x_3 = x_19;
x_8 = x_16;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_5, x_4);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_24; 
x_14 = lean_array_uget(x_3, x_5);
x_24 = !lean_is_exclusive(x_6);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_6, 0);
x_26 = lean_ctor_get(x_6, 1);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_25, 2);
lean_inc(x_29);
x_30 = lean_nat_dec_lt(x_28, x_29);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_14);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_6);
x_15 = x_31;
x_16 = x_11;
goto block_23;
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_25, 2);
lean_dec(x_33);
x_34 = lean_ctor_get(x_25, 1);
lean_dec(x_34);
x_35 = lean_ctor_get(x_25, 0);
lean_dec(x_35);
x_36 = lean_array_fget(x_27, x_28);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_28, x_37);
lean_dec(x_28);
lean_ctor_set(x_25, 1, x_38);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_14);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_40 = lean_ctor_get(x_14, 2);
x_41 = lean_ctor_get(x_1, 1);
x_42 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(x_41, x_2, x_40);
lean_ctor_set(x_14, 2, x_42);
x_43 = l_Lean_Compiler_LCNF_Internalize_internalizeParam(x_14, x_7, x_8, x_9, x_10, x_11);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_array_push(x_26, x_44);
lean_ctor_set(x_6, 1, x_46);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_6);
x_15 = x_47;
x_16 = x_45;
goto block_23;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_48 = lean_ctor_get(x_14, 0);
x_49 = lean_ctor_get(x_14, 1);
x_50 = lean_ctor_get(x_14, 2);
x_51 = lean_ctor_get_uint8(x_14, sizeof(void*)*3);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_14);
x_52 = lean_ctor_get(x_1, 1);
x_53 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(x_52, x_2, x_50);
x_54 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_49);
lean_ctor_set(x_54, 2, x_53);
lean_ctor_set_uint8(x_54, sizeof(void*)*3, x_51);
x_55 = l_Lean_Compiler_LCNF_Internalize_internalizeParam(x_54, x_7, x_8, x_9, x_10, x_11);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_array_push(x_26, x_56);
lean_ctor_set(x_6, 1, x_58);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_6);
x_15 = x_59;
x_16 = x_57;
goto block_23;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_60 = lean_ctor_get(x_36, 0);
lean_inc(x_60);
lean_dec(x_36);
x_61 = lean_st_ref_get(x_7, x_11);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(x_62, x_60);
x_65 = lean_st_ref_get(x_10, x_63);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_st_ref_take(x_7, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_14, 0);
lean_inc(x_70);
lean_dec(x_14);
x_71 = l_Std_HashMap_insert___at___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___spec__3(x_68, x_70, x_64);
x_72 = lean_st_ref_set(x_7, x_71, x_69);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_6);
x_15 = x_74;
x_16 = x_73;
goto block_23;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_25);
x_75 = lean_array_fget(x_27, x_28);
x_76 = lean_unsigned_to_nat(1u);
x_77 = lean_nat_add(x_28, x_76);
lean_dec(x_28);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_27);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_78, 2, x_29);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_79 = lean_ctor_get(x_14, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_14, 1);
lean_inc(x_80);
x_81 = lean_ctor_get(x_14, 2);
lean_inc(x_81);
x_82 = lean_ctor_get_uint8(x_14, sizeof(void*)*3);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 x_83 = x_14;
} else {
 lean_dec_ref(x_14);
 x_83 = lean_box(0);
}
x_84 = lean_ctor_get(x_1, 1);
x_85 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(x_84, x_2, x_81);
if (lean_is_scalar(x_83)) {
 x_86 = lean_alloc_ctor(0, 3, 1);
} else {
 x_86 = x_83;
}
lean_ctor_set(x_86, 0, x_79);
lean_ctor_set(x_86, 1, x_80);
lean_ctor_set(x_86, 2, x_85);
lean_ctor_set_uint8(x_86, sizeof(void*)*3, x_82);
x_87 = l_Lean_Compiler_LCNF_Internalize_internalizeParam(x_86, x_7, x_8, x_9, x_10, x_11);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_array_push(x_26, x_88);
lean_ctor_set(x_6, 1, x_90);
lean_ctor_set(x_6, 0, x_78);
x_91 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_91, 0, x_6);
x_15 = x_91;
x_16 = x_89;
goto block_23;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_92 = lean_ctor_get(x_75, 0);
lean_inc(x_92);
lean_dec(x_75);
x_93 = lean_st_ref_get(x_7, x_11);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_96 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(x_94, x_92);
x_97 = lean_st_ref_get(x_10, x_95);
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
lean_dec(x_97);
x_99 = lean_st_ref_take(x_7, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_ctor_get(x_14, 0);
lean_inc(x_102);
lean_dec(x_14);
x_103 = l_Std_HashMap_insert___at___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___spec__3(x_100, x_102, x_96);
x_104 = lean_st_ref_set(x_7, x_103, x_101);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
lean_dec(x_104);
lean_ctor_set(x_6, 0, x_78);
x_106 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_106, 0, x_6);
x_15 = x_106;
x_16 = x_105;
goto block_23;
}
}
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_107 = lean_ctor_get(x_6, 0);
x_108 = lean_ctor_get(x_6, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_6);
x_109 = lean_ctor_get(x_107, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_107, 1);
lean_inc(x_110);
x_111 = lean_ctor_get(x_107, 2);
lean_inc(x_111);
x_112 = lean_nat_dec_lt(x_110, x_111);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_109);
lean_dec(x_14);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_107);
lean_ctor_set(x_113, 1, x_108);
x_114 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_15 = x_114;
x_16 = x_11;
goto block_23;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 lean_ctor_release(x_107, 2);
 x_115 = x_107;
} else {
 lean_dec_ref(x_107);
 x_115 = lean_box(0);
}
x_116 = lean_array_fget(x_109, x_110);
x_117 = lean_unsigned_to_nat(1u);
x_118 = lean_nat_add(x_110, x_117);
lean_dec(x_110);
if (lean_is_scalar(x_115)) {
 x_119 = lean_alloc_ctor(0, 3, 0);
} else {
 x_119 = x_115;
}
lean_ctor_set(x_119, 0, x_109);
lean_ctor_set(x_119, 1, x_118);
lean_ctor_set(x_119, 2, x_111);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_120 = lean_ctor_get(x_14, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_14, 1);
lean_inc(x_121);
x_122 = lean_ctor_get(x_14, 2);
lean_inc(x_122);
x_123 = lean_ctor_get_uint8(x_14, sizeof(void*)*3);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 x_124 = x_14;
} else {
 lean_dec_ref(x_14);
 x_124 = lean_box(0);
}
x_125 = lean_ctor_get(x_1, 1);
x_126 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(x_125, x_2, x_122);
if (lean_is_scalar(x_124)) {
 x_127 = lean_alloc_ctor(0, 3, 1);
} else {
 x_127 = x_124;
}
lean_ctor_set(x_127, 0, x_120);
lean_ctor_set(x_127, 1, x_121);
lean_ctor_set(x_127, 2, x_126);
lean_ctor_set_uint8(x_127, sizeof(void*)*3, x_123);
x_128 = l_Lean_Compiler_LCNF_Internalize_internalizeParam(x_127, x_7, x_8, x_9, x_10, x_11);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_array_push(x_108, x_129);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_119);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_133, 0, x_132);
x_15 = x_133;
x_16 = x_130;
goto block_23;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_134 = lean_ctor_get(x_116, 0);
lean_inc(x_134);
lean_dec(x_116);
x_135 = lean_st_ref_get(x_7, x_11);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(x_136, x_134);
x_139 = lean_st_ref_get(x_10, x_137);
x_140 = lean_ctor_get(x_139, 1);
lean_inc(x_140);
lean_dec(x_139);
x_141 = lean_st_ref_take(x_7, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_ctor_get(x_14, 0);
lean_inc(x_144);
lean_dec(x_14);
x_145 = l_Std_HashMap_insert___at___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___spec__3(x_142, x_144, x_138);
x_146 = lean_st_ref_set(x_7, x_145, x_143);
x_147 = lean_ctor_get(x_146, 1);
lean_inc(x_147);
lean_dec(x_146);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_119);
lean_ctor_set(x_148, 1, x_108);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_148);
x_15 = x_149;
x_16 = x_147;
goto block_23;
}
}
}
block_23:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; size_t x_20; size_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = 1;
x_21 = lean_usize_add(x_5, x_20);
x_5 = x_21;
x_6 = x_19;
x_11 = x_16;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_5, x_4);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_array_uget(x_14, x_5);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; 
x_17 = lean_ctor_get(x_15, 2);
x_18 = lean_ctor_get(x_1, 1);
x_19 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(x_18, x_2, x_17);
lean_ctor_set(x_15, 2, x_19);
x_20 = l_Lean_Compiler_LCNF_Internalize_internalizeParam(x_15, x_7, x_8, x_9, x_10, x_11);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_array_push(x_6, x_21);
x_24 = 1;
x_25 = lean_usize_add(x_5, x_24);
x_5 = x_25;
x_6 = x_23;
x_11 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; size_t x_39; 
x_27 = lean_ctor_get(x_15, 0);
x_28 = lean_ctor_get(x_15, 1);
x_29 = lean_ctor_get(x_15, 2);
x_30 = lean_ctor_get_uint8(x_15, sizeof(void*)*3);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_15);
x_31 = lean_ctor_get(x_1, 1);
x_32 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(x_31, x_2, x_29);
x_33 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_28);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*3, x_30);
x_34 = l_Lean_Compiler_LCNF_Internalize_internalizeParam(x_33, x_7, x_8, x_9, x_10, x_11);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_array_push(x_6, x_35);
x_38 = 1;
x_39 = lean_usize_add(x_5, x_38);
x_5 = x_39;
x_6 = x_37;
x_11 = x_36;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; size_t x_37; lean_object* x_38; size_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Internalize_internalizeFunDecl___spec__1(x_14, x_15, x_4, x_8, x_9, x_10, x_11, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_get_size(x_5);
x_20 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_21 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__1(x_20, x_15, x_5, x_8, x_9, x_10, x_11, x_18);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_array_get_size(x_3);
x_25 = lean_unsigned_to_nat(0u);
lean_inc(x_24);
x_26 = l_Array_toSubarray___rarg(x_3, x_25, x_24);
x_27 = lean_ctor_get(x_1, 3);
lean_inc(x_27);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_17);
x_29 = lean_array_get_size(x_27);
x_30 = lean_usize_of_nat(x_29);
x_31 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__2(x_1, x_2, x_27, x_30, x_15, x_28, x_8, x_9, x_10, x_11, x_23);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Array_toSubarray___rarg(x_27, x_24, x_29);
x_36 = lean_ctor_get(x_35, 2);
lean_inc(x_36);
x_37 = lean_usize_of_nat(x_36);
lean_dec(x_36);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
x_39 = lean_usize_of_nat(x_38);
lean_dec(x_38);
x_40 = l_Subarray_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__3(x_1, x_2, x_35, x_37, x_39, x_34, x_8, x_9, x_10, x_11, x_33);
lean_dec(x_35);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Compiler_LCNF_Decl_instantiateValueLevelParams(x_1, x_2);
x_44 = l_Lean_Compiler_LCNF_Internalize_internalizeCode(x_43, x_8, x_9, x_10, x_11, x_42);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Compiler_LCNF_attachCodeDecls(x_22, x_45);
lean_dec(x_22);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_47);
x_48 = l_Lean_Compiler_LCNF_Code_inferType(x_47, x_9, x_10, x_11, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_41);
x_51 = l_Lean_Compiler_LCNF_mkForallParams(x_41, x_49, x_9, x_10, x_11, x_50);
if (lean_obj_tag(x_51) == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_54, 0, x_7);
lean_ctor_set(x_54, 1, x_6);
lean_ctor_set(x_54, 2, x_53);
lean_ctor_set(x_54, 3, x_41);
lean_ctor_set(x_54, 4, x_47);
x_55 = l_Lean_Compiler_LCNF_Decl_setLevelParams(x_54);
lean_ctor_set(x_51, 0, x_55);
return x_51;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_51, 0);
x_57 = lean_ctor_get(x_51, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_51);
x_58 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_58, 0, x_7);
lean_ctor_set(x_58, 1, x_6);
lean_ctor_set(x_58, 2, x_56);
lean_ctor_set(x_58, 3, x_41);
lean_ctor_set(x_58, 4, x_47);
x_59 = l_Lean_Compiler_LCNF_Decl_setLevelParams(x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
else
{
uint8_t x_61; 
lean_dec(x_47);
lean_dec(x_41);
lean_dec(x_7);
lean_dec(x_6);
x_61 = !lean_is_exclusive(x_51);
if (x_61 == 0)
{
return x_51;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_51, 0);
x_63 = lean_ctor_get(x_51, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_51);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_47);
lean_dec(x_41);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_65 = !lean_is_exclusive(x_48);
if (x_65 == 0)
{
return x_48;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_48, 0);
x_67 = lean_ctor_get(x_48, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_48);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__1(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__2(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Subarray_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___spec__3(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_8);
return x_13;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_at_", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("spec", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_13 = lean_st_ref_get(x_11, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_8, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__2;
x_20 = l_Lean_Name_append(x_18, x_19);
lean_dec(x_18);
x_21 = lean_ctor_get(x_7, 2);
lean_inc(x_21);
lean_dec(x_7);
x_22 = l_Lean_Name_append(x_20, x_21);
lean_dec(x_20);
x_23 = lean_array_get_size(x_16);
lean_dec(x_16);
x_24 = l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__4;
x_25 = lean_name_append_index_after(x_24, x_23);
x_26 = l_Lean_Name_append(x_22, x_25);
lean_dec(x_22);
x_27 = lean_st_ref_get(x_11, x_17);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__1;
x_30 = lean_st_mk_ref(x_29, x_28);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_11);
x_33 = l_Lean_Compiler_LCNF_Specialize_mkSpecDecl_go(x_1, x_2, x_3, x_4, x_5, x_6, x_26, x_31, x_9, x_10, x_11, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_st_ref_get(x_11, x_35);
lean_dec(x_11);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_st_ref_get(x_31, x_37);
lean_dec(x_31);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
lean_ctor_set(x_38, 0, x_34);
return x_38;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_34);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_31);
lean_dec(x_11);
x_43 = !lean_is_exclusive(x_33);
if (x_43 == 0)
{
return x_33;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_33, 0);
x_45 = lean_ctor_get(x_33, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_33);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Compiler_LCNF_Specialize_mkSpecDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_getRemainingArgs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_1, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 2);
lean_inc(x_13);
x_14 = lean_nat_dec_lt(x_12, x_13);
if (x_14 == 0)
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_4;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_9, 2);
lean_dec(x_16);
x_17 = lean_ctor_get(x_9, 1);
lean_dec(x_17);
x_18 = lean_ctor_get(x_9, 0);
lean_dec(x_18);
x_19 = lean_array_fget(x_11, x_12);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_12, x_20);
lean_dec(x_12);
lean_ctor_set(x_9, 1, x_21);
x_22 = lean_box(x_7);
if (lean_obj_tag(x_22) == 4)
{
lean_object* x_23; size_t x_24; size_t x_25; 
x_23 = lean_array_push(x_10, x_19);
lean_ctor_set(x_4, 1, x_23);
x_24 = 1;
x_25 = lean_usize_add(x_3, x_24);
x_3 = x_25;
goto _start;
}
else
{
size_t x_27; size_t x_28; 
lean_dec(x_22);
lean_dec(x_19);
x_27 = 1;
x_28 = lean_usize_add(x_3, x_27);
x_3 = x_28;
goto _start;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_9);
x_30 = lean_array_fget(x_11, x_12);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_12, x_31);
lean_dec(x_12);
x_33 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_33, 0, x_11);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_33, 2, x_13);
x_34 = lean_box(x_7);
if (lean_obj_tag(x_34) == 4)
{
lean_object* x_35; size_t x_36; size_t x_37; 
x_35 = lean_array_push(x_10, x_30);
lean_ctor_set(x_4, 1, x_35);
lean_ctor_set(x_4, 0, x_33);
x_36 = 1;
x_37 = lean_usize_add(x_3, x_36);
x_3 = x_37;
goto _start;
}
else
{
size_t x_39; size_t x_40; 
lean_dec(x_34);
lean_dec(x_30);
lean_ctor_set(x_4, 0, x_33);
x_39 = 1;
x_40 = lean_usize_add(x_3, x_39);
x_3 = x_40;
goto _start;
}
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_42 = lean_ctor_get(x_4, 0);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_4);
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_42, 2);
lean_inc(x_46);
x_47 = lean_nat_dec_lt(x_45, x_46);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_43);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 lean_ctor_release(x_42, 2);
 x_49 = x_42;
} else {
 lean_dec_ref(x_42);
 x_49 = lean_box(0);
}
x_50 = lean_array_fget(x_44, x_45);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_45, x_51);
lean_dec(x_45);
if (lean_is_scalar(x_49)) {
 x_53 = lean_alloc_ctor(0, 3, 0);
} else {
 x_53 = x_49;
}
lean_ctor_set(x_53, 0, x_44);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_53, 2, x_46);
x_54 = lean_box(x_7);
if (lean_obj_tag(x_54) == 4)
{
lean_object* x_55; lean_object* x_56; size_t x_57; size_t x_58; 
x_55 = lean_array_push(x_43, x_50);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_55);
x_57 = 1;
x_58 = lean_usize_add(x_3, x_57);
x_3 = x_58;
x_4 = x_56;
goto _start;
}
else
{
lean_object* x_60; size_t x_61; size_t x_62; 
lean_dec(x_54);
lean_dec(x_50);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_53);
lean_ctor_set(x_60, 1, x_43);
x_61 = 1;
x_62 = lean_usize_add(x_3, x_61);
x_3 = x_62;
x_4 = x_60;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_getRemainingArgs(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_5 = l_Array_toSubarray___rarg(x_2, x_4, x_3);
x_6 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_array_get_size(x_1);
x_9 = lean_usize_of_nat(x_8);
x_10 = 0;
x_11 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_getRemainingArgs___spec__1(x_1, x_9, x_10, x_7);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_array_get_size(x_2);
x_14 = l_Array_toSubarray___rarg(x_2, x_8, x_13);
x_15 = l_Array_ofSubarray___rarg(x_14);
x_16 = l_Array_append___rarg(x_12, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_getRemainingArgs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_getRemainingArgs___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_getRemainingArgs___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Compiler_LCNF_Specialize_getRemainingArgs(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_specExtension;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Compiler_LCNF_instInhabitedSpecState;
x_13 = l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___closed__1;
x_14 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_12, x_13, x_11);
lean_dec(x_11);
x_15 = l_Lean_SMap_find_x3f___at_Lean_Compiler_LCNF_getSpecParamInfoCore_x3f___spec__1(x_14, x_1);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Compiler_LCNF_instInhabitedSpecState;
x_20 = l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___closed__1;
x_21 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_19, x_20, x_18);
lean_dec(x_18);
x_22 = l_Lean_SMap_find_x3f___at_Lean_Compiler_LCNF_getSpecParamInfoCore_x3f___spec__1(x_21, x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
return x_23;
}
}
}
static lean_object* _init_l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_inheritedTraceOptions;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2___closed__1;
x_11 = lean_st_ref_get(x_10, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_5, 2);
x_15 = l___private_Lean_Util_Trace_0__Lean_checkTraceOption(x_13, x_14, x_1);
lean_dec(x_13);
x_16 = lean_box(x_15);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_ctor_get(x_5, 2);
x_20 = l___private_Lean_Util_Trace_0__Lean_checkTraceOption(x_17, x_19, x_1);
lean_dec(x_17);
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = lean_usize_add(x_2, x_7);
if (lean_obj_tag(x_6) == 0)
{
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_array_push(x_4, x_10);
x_2 = x_8;
x_4 = x_11;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_le(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
return x_8;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__4(x_1, x_9, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_11 = lean_box(0);
x_12 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_5, x_8, x_11);
x_3 = x_10;
x_5 = x_12;
goto _start;
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_10 = lean_box(0);
x_11 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_4, x_7, x_10);
x_2 = x_9;
x_4 = x_11;
goto _start;
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__1;
x_3 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__2;
x_4 = l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__2;
x_5 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_4);
lean_ctor_set(x_5, 5, x_2);
lean_ctor_set(x_5, 6, x_3);
lean_ctor_set(x_5, 7, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_9 = lean_ctor_get(x_6, 5);
x_10 = lean_st_ref_get(x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_5, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Compiler_LCNF_LCtx_toLocalContext(x_17);
x_19 = lean_ctor_get(x_6, 2);
x_20 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__3;
lean_inc(x_19);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_18);
lean_ctor_set(x_21, 3, x_19);
x_22 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_2);
x_23 = lean_st_ref_take(x_7, x_16);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_27 = lean_ctor_get(x_24, 3);
x_28 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_29 = 0;
x_30 = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*3, x_29);
lean_inc(x_9);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_9);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Std_PersistentArray_push___rarg(x_27, x_31);
lean_ctor_set(x_24, 3, x_32);
x_33 = lean_st_ref_set(x_7, x_24, x_25);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
x_36 = lean_box(0);
lean_ctor_set(x_33, 0, x_36);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_40 = lean_ctor_get(x_24, 0);
x_41 = lean_ctor_get(x_24, 1);
x_42 = lean_ctor_get(x_24, 2);
x_43 = lean_ctor_get(x_24, 3);
x_44 = lean_ctor_get(x_24, 4);
x_45 = lean_ctor_get(x_24, 5);
x_46 = lean_ctor_get(x_24, 6);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_24);
x_47 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_48 = 0;
x_49 = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(x_49, 0, x_1);
lean_ctor_set(x_49, 1, x_22);
lean_ctor_set(x_49, 2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*3, x_48);
lean_inc(x_9);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_9);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Std_PersistentArray_push___rarg(x_43, x_50);
x_52 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_52, 0, x_40);
lean_ctor_set(x_52, 1, x_41);
lean_ctor_set(x_52, 2, x_42);
lean_ctor_set(x_52, 3, x_51);
lean_ctor_set(x_52, 4, x_44);
lean_ctor_set(x_52, 5, x_45);
lean_ctor_set(x_52, 6, x_46);
x_53 = lean_st_ref_set(x_7, x_52, x_25);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_55 = x_53;
} else {
 lean_dec_ref(x_53);
 x_55 = lean_box(0);
}
x_56 = lean_box(0);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__2;
x_3 = l_instInhabited___rarg(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__1;
x_2 = lean_alloc_closure((void*)(l_instInhabitedReaderT___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__2;
x_9 = lean_panic_fn(x_8, x_1);
x_10 = lean_apply_6(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 1, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 2, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = 1;
x_3 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 1, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = l_Lean_Compiler_LCNF_Specialize_cacheSpec(x_2, x_14, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_17 = l_Lean_Compiler_LCNF_Decl_etaExpand(x_1, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 2);
lean_inc(x_21);
x_22 = l_Lean_Compiler_LCNF_saveLCNFType(x_20, x_21, x_11, x_12, x_19);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_25 = l_Lean_Compiler_LCNF_Decl_simp(x_18, x_24, x_10, x_11, x_12, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__2;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_29 = l_Lean_Compiler_LCNF_Decl_simp(x_26, x_28, x_10, x_11, x_12, x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 3);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 4);
lean_inc(x_33);
x_58 = lean_ctor_get(x_30, 0);
lean_inc(x_58);
x_59 = lean_array_get_size(x_32);
x_60 = lean_unsigned_to_nat(0u);
x_61 = lean_nat_dec_lt(x_60, x_59);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_59);
lean_inc(x_5);
x_62 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_62, 0, x_5);
lean_ctor_set(x_62, 1, x_5);
lean_ctor_set(x_62, 2, x_58);
lean_inc(x_12);
lean_inc(x_9);
x_63 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_33, x_62, x_9, x_10, x_11, x_12, x_31);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_34 = x_64;
x_35 = x_65;
goto block_57;
}
else
{
uint8_t x_66; 
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_66 = !lean_is_exclusive(x_63);
if (x_66 == 0)
{
return x_63;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_63, 0);
x_68 = lean_ctor_get(x_63, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_63);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
x_70 = lean_nat_dec_le(x_59, x_59);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_59);
lean_inc(x_5);
x_71 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_71, 0, x_5);
lean_ctor_set(x_71, 1, x_5);
lean_ctor_set(x_71, 2, x_58);
lean_inc(x_12);
lean_inc(x_9);
x_72 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_33, x_71, x_9, x_10, x_11, x_12, x_31);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_34 = x_73;
x_35 = x_74;
goto block_57;
}
else
{
uint8_t x_75; 
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
return x_72;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_72, 0);
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_72);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
size_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_usize_of_nat(x_59);
lean_dec(x_59);
lean_inc(x_5);
x_80 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__6(x_32, x_6, x_79, x_5);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_5);
lean_ctor_set(x_81, 2, x_58);
lean_inc(x_12);
lean_inc(x_9);
x_82 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_33, x_81, x_9, x_10, x_11, x_12, x_31);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_34 = x_83;
x_35 = x_84;
goto block_57;
}
else
{
uint8_t x_85; 
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_85 = !lean_is_exclusive(x_82);
if (x_85 == 0)
{
return x_82;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_82, 0);
x_87 = lean_ctor_get(x_82, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_82);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
block_57:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_36 = lean_ctor_get(x_30, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_30, 2);
lean_inc(x_38);
lean_dec(x_30);
lean_inc(x_36);
x_39 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_37);
lean_ctor_set(x_39, 2, x_38);
lean_ctor_set(x_39, 3, x_32);
lean_ctor_set(x_39, 4, x_34);
x_40 = lean_st_ref_get(x_12, x_35);
lean_dec(x_12);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_st_ref_take(x_9, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_array_push(x_43, x_39);
x_46 = lean_st_ref_set(x_9, x_45, x_44);
lean_dec(x_9);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
x_49 = l_Lean_Expr_const___override(x_36, x_3);
x_50 = l_Lean_mkAppN(x_49, x_4);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_46, 0, x_51);
return x_46;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_46, 1);
lean_inc(x_52);
lean_dec(x_46);
x_53 = l_Lean_Expr_const___override(x_36, x_3);
x_54 = l_Lean_mkAppN(x_53, x_4);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_52);
return x_56;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_89 = !lean_is_exclusive(x_29);
if (x_89 == 0)
{
return x_29;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_29, 0);
x_91 = lean_ctor_get(x_29, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_29);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_93 = !lean_is_exclusive(x_25);
if (x_93 == 0)
{
return x_25;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_25, 0);
x_95 = lean_ctor_get(x_25, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_25);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_97 = !lean_is_exclusive(x_17);
if (x_97 == 0)
{
return x_17;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_17, 0);
x_99 = lean_ctor_get(x_17, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_17);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Expr_const___override(x_1, x_2);
x_12 = l_Lean_mkAppN(x_11, x_3);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("step", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("new: ", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("cached: ", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("assertion violation: ", 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("!key.hasFVar\n    ", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__8;
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__9;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.Specialize.specializeApp?", 44);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__1;
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__11;
x_3 = lean_unsigned_to_nat(352u);
x_4 = lean_unsigned_to_nat(4u);
x_5 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__10;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("!key.hasLooseBVars\n    ", 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__8;
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__13;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__1;
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__11;
x_3 = lean_unsigned_to_nat(351u);
x_4 = lean_unsigned_to_nat(4u);
x_5 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__14;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
uint8_t x_19; 
lean_dec(x_12);
x_19 = l_Lean_Expr_hasLooseBVars(x_1);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = l_Lean_Expr_hasFVar(x_1);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_box(0);
lean_inc(x_2);
x_22 = l_List_mapTRAux___at_Lean_mkConstWithLevelParams___spec__1(x_2, x_21);
x_23 = lean_array_get_size(x_3);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = 0;
lean_inc(x_3);
x_26 = l_Array_mapMUnsafe_map___at_Lean_Compiler_LCNF_InferType_mkForallParams___spec__1(x_24, x_25, x_3);
x_27 = l_Lean_Compiler_LCNF_Specialize_getRemainingArgs(x_4, x_5);
lean_dec(x_4);
x_28 = l_Array_append___rarg(x_26, x_27);
lean_inc(x_1);
x_29 = l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f(x_1, x_16, x_17, x_18);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_13);
x_32 = l_Lean_Compiler_LCNF_Specialize_mkSpecDecl(x_6, x_7, x_8, x_3, x_9, x_2, x_13, x_14, x_15, x_16, x_17, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__1;
x_36 = l_Lean_Name_str___override(x_10, x_35);
lean_inc(x_36);
x_37 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2(x_36, x_13, x_14, x_15, x_16, x_17, x_34);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_36);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_box(0);
x_42 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1(x_33, x_1, x_22, x_28, x_11, x_25, x_41, x_13, x_14, x_15, x_16, x_17, x_40);
lean_dec(x_13);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_ctor_get(x_33, 0);
lean_inc(x_44);
x_45 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__3;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7(x_36, x_49, x_13, x_14, x_15, x_16, x_17, x_43);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1(x_33, x_1, x_22, x_28, x_11, x_25, x_51, x_13, x_14, x_15, x_16, x_17, x_52);
lean_dec(x_13);
lean_dec(x_51);
return x_53;
}
}
else
{
uint8_t x_54; 
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_32);
if (x_54 == 0)
{
return x_32;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_32, 0);
x_56 = lean_ctor_get(x_32, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_32);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_58 = lean_ctor_get(x_29, 1);
lean_inc(x_58);
lean_dec(x_29);
x_59 = lean_ctor_get(x_30, 0);
lean_inc(x_59);
lean_dec(x_30);
x_60 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__1;
x_61 = l_Lean_Name_str___override(x_10, x_60);
lean_inc(x_61);
x_62 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2(x_61, x_13, x_14, x_15, x_16, x_17, x_58);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_unbox(x_63);
lean_dec(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_61);
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_dec(x_62);
x_66 = lean_box(0);
x_67 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__2(x_59, x_22, x_28, x_66, x_13, x_14, x_15, x_16, x_17, x_65);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_68 = lean_ctor_get(x_62, 1);
lean_inc(x_68);
lean_dec(x_62);
lean_inc(x_59);
x_69 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_69, 0, x_59);
x_70 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__7;
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5;
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7(x_61, x_73, x_13, x_14, x_15, x_16, x_17, x_68);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__2(x_59, x_22, x_28, x_75, x_13, x_14, x_15, x_16, x_17, x_76);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_75);
return x_77;
}
}
}
else
{
lean_object* x_78; lean_object* x_79; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__12;
x_79 = l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8(x_78, x_13, x_14, x_15, x_16, x_17, x_18);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_80 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__15;
x_81 = l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8(x_80, x_13, x_14, x_15, x_16, x_17, x_18);
return x_81;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("key: ", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_8);
x_15 = lean_box(0);
x_16 = lean_st_ref_get(x_13, x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__1;
x_19 = lean_st_mk_ref(x_18, x_17);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_20);
lean_inc(x_2);
x_22 = l_Lean_Compiler_LCNF_Specialize_Collector_collect(x_1, x_2, x_20, x_9, x_10, x_11, x_12, x_13, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_st_ref_get(x_13, x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_st_ref_get(x_20, x_26);
lean_dec(x_20);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 2);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_array_get_size(x_23);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Array_filterMapM___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__3(x_23, x_33, x_32);
x_35 = l_Lean_mkAppN(x_3, x_34);
lean_inc(x_31);
lean_inc(x_30);
x_36 = l_Lean_Compiler_LCNF_Specialize_mkKey(x_30, x_31, x_35, x_11, x_12, x_13, x_29);
lean_dec(x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
lean_inc(x_4);
x_41 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2(x_4, x_9, x_10, x_11, x_12, x_13, x_38);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_4);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_box(0);
x_46 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3(x_39, x_40, x_30, x_1, x_2, x_5, x_6, x_23, x_31, x_7, x_15, x_45, x_9, x_10, x_11, x_12, x_13, x_44);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_dec(x_41);
lean_inc(x_39);
x_48 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_48, 0, x_39);
x_49 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__3;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7(x_4, x_52, x_9, x_10, x_11, x_12, x_13, x_47);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3(x_39, x_40, x_30, x_1, x_2, x_5, x_6, x_23, x_31, x_7, x_15, x_54, x_9, x_10, x_11, x_12, x_13, x_55);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_22);
if (x_57 == 0)
{
return x_22;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_22, 0);
x_59 = lean_ctor_get(x_22, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_22);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Compiler", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("specialize", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__2;
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("candidate", 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4;
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(", ", 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_dec(x_7);
lean_inc(x_12);
lean_inc(x_11);
x_14 = l_Lean_Compiler_LCNF_getStage1Decl_x3f(x_1, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
lean_dec(x_15);
x_24 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__6;
x_25 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2(x_24, x_8, x_9, x_10, x_11, x_12, x_22);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_6);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4;
x_30 = lean_box(0);
x_31 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4(x_2, x_3, x_4, x_24, x_23, x_5, x_29, x_30, x_8, x_9, x_10, x_11, x_12, x_28);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_dec(x_25);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_6);
x_34 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__8;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
lean_inc(x_2);
x_38 = lean_array_to_list(lean_box(0), x_2);
x_39 = lean_box(0);
x_40 = l_List_mapTRAux___at_Lean_Compiler_LCNF_saveSpecParamInfo___spec__10(x_38, x_39);
x_41 = l_Lean_MessageData_ofList(x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_34);
x_44 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7(x_24, x_43, x_8, x_9, x_10, x_11, x_12, x_32);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4;
x_48 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4(x_2, x_3, x_4, x_24, x_23, x_5, x_47, x_45, x_8, x_9, x_10, x_11, x_12, x_46);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_14);
if (x_49 == 0)
{
return x_14;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_14, 0);
x_51 = lean_ctor_get(x_14, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_14);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_inc(x_1);
x_12 = l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1(x_1, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_2, x_22);
x_24 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6___closed__1;
lean_inc(x_23);
x_25 = lean_mk_array(x_23, x_24);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_23, x_26);
lean_dec(x_23);
lean_inc(x_2);
x_28 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_25, x_27);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_28);
x_29 = l_Lean_Compiler_LCNF_Specialize_shouldSpecialize(x_21, x_28, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
if (x_31 == 0)
{
uint8_t x_32; 
lean_dec(x_28);
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_29, 0);
lean_dec(x_33);
x_34 = lean_box(0);
lean_ctor_set(x_29, 0, x_34);
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_dec(x_29);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_29, 1);
lean_inc(x_38);
lean_dec(x_29);
x_39 = lean_box(0);
x_40 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5(x_1, x_21, x_28, x_3, x_4, x_2, x_39, x_6, x_7, x_8, x_9, x_10, x_38);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_28);
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_29);
if (x_41 == 0)
{
return x_29;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_29, 0);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_29);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_inc(x_10);
x_12 = l_Lean_Meta_isInstance(x_10, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_box(0);
x_17 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6(x_10, x_1, x_9, x_11, x_16, x_3, x_4, x_5, x_6, x_7, x_15);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_12);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_12, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_12, 0, x_20);
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Expr_isApp(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__7(x_1, x_11, x_2, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at_Lean_Compiler_LCNF_Specialize_visitCode___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_nat_dec_lt(x_2, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_fget(x_3, x_2);
lean_inc(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_13);
x_14 = lean_apply_7(x_1, x_13, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ptr_addr(x_13);
lean_dec(x_13);
x_18 = lean_ptr_addr(x_15);
x_19 = lean_usize_dec_eq(x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
x_22 = lean_array_fset(x_3, x_2, x_15);
lean_dec(x_2);
x_2 = x_21;
x_3 = x_22;
x_9 = x_16;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_2, x_24);
lean_dec(x_2);
x_2 = x_25;
x_9 = x_16;
goto _start;
}
}
else
{
uint8_t x_27; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_14);
if (x_27 == 0)
{
return x_14;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_14);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp___at_Lean_Compiler_LCNF_Specialize_visitCode___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at_Lean_Compiler_LCNF_Specialize_visitCode___spec__2(x_2, x_9, x_1, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_4, 3);
lean_inc(x_26);
x_27 = l_Lean_Compiler_LCNF_Specialize_isGround(x_26, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_4, 0);
lean_inc(x_30);
x_31 = !lean_is_exclusive(x_6);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_ctor_get(x_6, 0);
x_33 = lean_ctor_get(x_6, 1);
x_34 = lean_box(0);
lean_inc(x_30);
x_35 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_32, x_30, x_34);
x_36 = lean_unbox(x_28);
lean_dec(x_28);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_30);
lean_ctor_set(x_6, 0, x_35);
lean_inc(x_1);
x_37 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_1, x_6, x_7, x_8, x_9, x_10, x_29);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_12 = x_38;
x_13 = x_39;
goto block_25;
}
else
{
uint8_t x_40; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_37);
if (x_40 == 0)
{
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_37);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_33, x_30, x_34);
lean_ctor_set(x_6, 1, x_44);
lean_ctor_set(x_6, 0, x_35);
lean_inc(x_1);
x_45 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_1, x_6, x_7, x_8, x_9, x_10, x_29);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_12 = x_46;
x_13 = x_47;
goto block_25;
}
else
{
uint8_t x_48; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_52 = lean_ctor_get(x_6, 0);
x_53 = lean_ctor_get(x_6, 1);
x_54 = lean_ctor_get(x_6, 2);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_6);
x_55 = lean_box(0);
lean_inc(x_30);
x_56 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_52, x_30, x_55);
x_57 = lean_unbox(x_28);
lean_dec(x_28);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_30);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_53);
lean_ctor_set(x_58, 2, x_54);
lean_inc(x_1);
x_59 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_1, x_58, x_7, x_8, x_9, x_10, x_29);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_12 = x_60;
x_13 = x_61;
goto block_25;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_64 = x_59;
} else {
 lean_dec_ref(x_59);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_53, x_30, x_55);
x_67 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_67, 0, x_56);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set(x_67, 2, x_54);
lean_inc(x_1);
x_68 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_1, x_67, x_7, x_8, x_9, x_10, x_29);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_12 = x_69;
x_13 = x_70;
goto block_25;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_71 = lean_ctor_get(x_68, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_68, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_73 = x_68;
} else {
 lean_dec_ref(x_68);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
block_25:
{
size_t x_14; size_t x_15; uint8_t x_16; 
x_14 = lean_ptr_addr(x_1);
lean_dec(x_1);
x_15 = lean_ptr_addr(x_12);
x_16 = lean_usize_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_4);
lean_ctor_set(x_17, 1, x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
else
{
size_t x_19; size_t x_20; uint8_t x_21; 
x_19 = lean_ptr_addr(x_2);
x_20 = lean_ptr_addr(x_4);
x_21 = lean_usize_dec_eq(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_3);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_12);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_4);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_13);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_array_get_size(x_8);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_8);
x_15 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_17);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = lean_nat_dec_le(x_12, x_12);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_12);
lean_dec(x_8);
x_28 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_30);
lean_ctor_set(x_28, 0, x_31);
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_28);
if (x_36 == 0)
{
return x_28;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_28, 0);
x_38 = lean_ctor_get(x_28, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_28);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
x_40 = 0;
x_41 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_42 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_8, x_40, x_41, x_11);
lean_dec(x_8);
lean_ctor_set(x_2, 0, x_42);
x_43 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_45);
lean_ctor_set(x_43, 0, x_46);
return x_43;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_43, 0);
x_48 = lean_ctor_get(x_43, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_43);
x_49 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_47);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_43);
if (x_51 == 0)
{
return x_43;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_43, 0);
x_53 = lean_ctor_get(x_43, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_43);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_55 = lean_ctor_get(x_2, 0);
x_56 = lean_ctor_get(x_2, 1);
x_57 = lean_ctor_get(x_2, 2);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_2);
x_58 = lean_array_get_size(x_8);
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_nat_dec_lt(x_59, x_58);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_58);
lean_dec(x_8);
x_61 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_56);
lean_ctor_set(x_61, 2, x_57);
x_62 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_61, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
x_66 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_63);
if (lean_is_scalar(x_65)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_65;
}
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_64);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_1);
x_68 = lean_ctor_get(x_62, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_62, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_70 = x_62;
} else {
 lean_dec_ref(x_62);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(1, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
else
{
uint8_t x_72; 
x_72 = lean_nat_dec_le(x_58, x_58);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_58);
lean_dec(x_8);
x_73 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_73, 0, x_55);
lean_ctor_set(x_73, 1, x_56);
lean_ctor_set(x_73, 2, x_57);
x_74 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_73, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
x_78 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_75);
if (lean_is_scalar(x_77)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_77;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_1);
x_80 = lean_ctor_get(x_74, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_74, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_82 = x_74;
} else {
 lean_dec_ref(x_74);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
else
{
size_t x_84; size_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_84 = 0;
x_85 = lean_usize_of_nat(x_58);
lean_dec(x_58);
x_86 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_8, x_84, x_85, x_55);
lean_dec(x_8);
x_87 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_56);
lean_ctor_set(x_87, 2, x_57);
x_88 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_87, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_89);
if (lean_is_scalar(x_91)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_91;
}
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_90);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_1);
x_94 = lean_ctor_get(x_88, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_88, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_96 = x_88;
} else {
 lean_dec_ref(x_88);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
}
}
else
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_1, 0);
lean_inc(x_98);
x_99 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_98, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_99) == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_99, 0);
x_102 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_101);
lean_ctor_set(x_99, 0, x_102);
return x_99;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_103 = lean_ctor_get(x_99, 0);
x_104 = lean_ctor_get(x_99, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_99);
x_105 = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp(x_1, x_103);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
else
{
uint8_t x_107; 
lean_dec(x_1);
x_107 = !lean_is_exclusive(x_99);
if (x_107 == 0)
{
return x_99;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_99, 0);
x_109 = lean_ctor_get(x_99, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_99);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Specialize_visitCode___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__2), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 3);
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f(x_10, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
lean_inc(x_8);
x_15 = l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__1(x_9, x_8, x_1, x_8, x_14, x_2, x_3, x_4, x_5, x_6, x_13);
lean_dec(x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
lean_inc(x_8);
x_18 = l_Lean_Compiler_LCNF_LetDecl_updateValue(x_8, x_17, x_4, x_5, x_6, x_16);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_box(0);
x_22 = l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__1(x_9, x_8, x_1, x_19, x_21, x_2, x_3, x_4, x_5, x_6, x_20);
lean_dec(x_8);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
return x_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 1:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_27);
x_29 = l_Lean_Compiler_LCNF_Specialize_visitFunDecl(x_27, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
x_33 = !lean_is_exclusive(x_2);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_2, 0);
x_35 = lean_box(0);
x_36 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_34, x_32, x_35);
lean_ctor_set(x_2, 0, x_36);
lean_inc(x_28);
x_37 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_28, x_2, x_3, x_4, x_5, x_6, x_31);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; size_t x_40; size_t x_41; uint8_t x_42; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ptr_addr(x_28);
lean_dec(x_28);
x_41 = lean_ptr_addr(x_39);
x_42 = lean_usize_dec_eq(x_40, x_41);
if (x_42 == 0)
{
uint8_t x_43; 
lean_dec(x_27);
x_43 = !lean_is_exclusive(x_1);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_1, 1);
lean_dec(x_44);
x_45 = lean_ctor_get(x_1, 0);
lean_dec(x_45);
lean_ctor_set(x_1, 1, x_39);
lean_ctor_set(x_1, 0, x_30);
lean_ctor_set(x_37, 0, x_1);
return x_37;
}
else
{
lean_object* x_46; 
lean_dec(x_1);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_30);
lean_ctor_set(x_46, 1, x_39);
lean_ctor_set(x_37, 0, x_46);
return x_37;
}
}
else
{
size_t x_47; size_t x_48; uint8_t x_49; 
x_47 = lean_ptr_addr(x_27);
lean_dec(x_27);
x_48 = lean_ptr_addr(x_30);
x_49 = lean_usize_dec_eq(x_47, x_48);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_1);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_1, 1);
lean_dec(x_51);
x_52 = lean_ctor_get(x_1, 0);
lean_dec(x_52);
lean_ctor_set(x_1, 1, x_39);
lean_ctor_set(x_1, 0, x_30);
lean_ctor_set(x_37, 0, x_1);
return x_37;
}
else
{
lean_object* x_53; 
lean_dec(x_1);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_30);
lean_ctor_set(x_53, 1, x_39);
lean_ctor_set(x_37, 0, x_53);
return x_37;
}
}
else
{
lean_dec(x_39);
lean_dec(x_30);
lean_ctor_set(x_37, 0, x_1);
return x_37;
}
}
}
else
{
lean_object* x_54; lean_object* x_55; size_t x_56; size_t x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_37, 0);
x_55 = lean_ctor_get(x_37, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_37);
x_56 = lean_ptr_addr(x_28);
lean_dec(x_28);
x_57 = lean_ptr_addr(x_54);
x_58 = lean_usize_dec_eq(x_56, x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_59 = x_1;
} else {
 lean_dec_ref(x_1);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_30);
lean_ctor_set(x_60, 1, x_54);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_55);
return x_61;
}
else
{
size_t x_62; size_t x_63; uint8_t x_64; 
x_62 = lean_ptr_addr(x_27);
lean_dec(x_27);
x_63 = lean_ptr_addr(x_30);
x_64 = lean_usize_dec_eq(x_62, x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_65 = x_1;
} else {
 lean_dec_ref(x_1);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_30);
lean_ctor_set(x_66, 1, x_54);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_55);
return x_67;
}
else
{
lean_object* x_68; 
lean_dec(x_54);
lean_dec(x_30);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_1);
lean_ctor_set(x_68, 1, x_55);
return x_68;
}
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_37);
if (x_69 == 0)
{
return x_37;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_37, 0);
x_71 = lean_ctor_get(x_37, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_37);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_73 = lean_ctor_get(x_2, 0);
x_74 = lean_ctor_get(x_2, 1);
x_75 = lean_ctor_get(x_2, 2);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_2);
x_76 = lean_box(0);
x_77 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_73, x_32, x_76);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_74);
lean_ctor_set(x_78, 2, x_75);
lean_inc(x_28);
x_79 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_28, x_78, x_3, x_4, x_5, x_6, x_31);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; size_t x_83; size_t x_84; uint8_t x_85; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_82 = x_79;
} else {
 lean_dec_ref(x_79);
 x_82 = lean_box(0);
}
x_83 = lean_ptr_addr(x_28);
lean_dec(x_28);
x_84 = lean_ptr_addr(x_80);
x_85 = lean_usize_dec_eq(x_83, x_84);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_86 = x_1;
} else {
 lean_dec_ref(x_1);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_30);
lean_ctor_set(x_87, 1, x_80);
if (lean_is_scalar(x_82)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_82;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_81);
return x_88;
}
else
{
size_t x_89; size_t x_90; uint8_t x_91; 
x_89 = lean_ptr_addr(x_27);
lean_dec(x_27);
x_90 = lean_ptr_addr(x_30);
x_91 = lean_usize_dec_eq(x_89, x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_92 = x_1;
} else {
 lean_dec_ref(x_1);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_30);
lean_ctor_set(x_93, 1, x_80);
if (lean_is_scalar(x_82)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_82;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_81);
return x_94;
}
else
{
lean_object* x_95; 
lean_dec(x_80);
lean_dec(x_30);
if (lean_is_scalar(x_82)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_82;
}
lean_ctor_set(x_95, 0, x_1);
lean_ctor_set(x_95, 1, x_81);
return x_95;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_1);
x_96 = lean_ctor_get(x_79, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_79, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_98 = x_79;
} else {
 lean_dec_ref(x_79);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_29);
if (x_100 == 0)
{
return x_29;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_29, 0);
x_102 = lean_ctor_get(x_29, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_29);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
case 2:
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_1, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_1, 1);
lean_inc(x_105);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_104);
x_106 = l_Lean_Compiler_LCNF_Specialize_visitFunDecl(x_104, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = lean_ctor_get(x_107, 0);
lean_inc(x_109);
x_110 = !lean_is_exclusive(x_2);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_2, 0);
x_112 = lean_box(0);
x_113 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_111, x_109, x_112);
lean_ctor_set(x_2, 0, x_113);
lean_inc(x_105);
x_114 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_105, x_2, x_3, x_4, x_5, x_6, x_108);
if (lean_obj_tag(x_114) == 0)
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
lean_object* x_116; size_t x_117; size_t x_118; uint8_t x_119; 
x_116 = lean_ctor_get(x_114, 0);
x_117 = lean_ptr_addr(x_105);
lean_dec(x_105);
x_118 = lean_ptr_addr(x_116);
x_119 = lean_usize_dec_eq(x_117, x_118);
if (x_119 == 0)
{
uint8_t x_120; 
lean_dec(x_104);
x_120 = !lean_is_exclusive(x_1);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
x_121 = lean_ctor_get(x_1, 1);
lean_dec(x_121);
x_122 = lean_ctor_get(x_1, 0);
lean_dec(x_122);
lean_ctor_set(x_1, 1, x_116);
lean_ctor_set(x_1, 0, x_107);
lean_ctor_set(x_114, 0, x_1);
return x_114;
}
else
{
lean_object* x_123; 
lean_dec(x_1);
x_123 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_123, 0, x_107);
lean_ctor_set(x_123, 1, x_116);
lean_ctor_set(x_114, 0, x_123);
return x_114;
}
}
else
{
size_t x_124; size_t x_125; uint8_t x_126; 
x_124 = lean_ptr_addr(x_104);
lean_dec(x_104);
x_125 = lean_ptr_addr(x_107);
x_126 = lean_usize_dec_eq(x_124, x_125);
if (x_126 == 0)
{
uint8_t x_127; 
x_127 = !lean_is_exclusive(x_1);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_1, 1);
lean_dec(x_128);
x_129 = lean_ctor_get(x_1, 0);
lean_dec(x_129);
lean_ctor_set(x_1, 1, x_116);
lean_ctor_set(x_1, 0, x_107);
lean_ctor_set(x_114, 0, x_1);
return x_114;
}
else
{
lean_object* x_130; 
lean_dec(x_1);
x_130 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_130, 0, x_107);
lean_ctor_set(x_130, 1, x_116);
lean_ctor_set(x_114, 0, x_130);
return x_114;
}
}
else
{
lean_dec(x_116);
lean_dec(x_107);
lean_ctor_set(x_114, 0, x_1);
return x_114;
}
}
}
else
{
lean_object* x_131; lean_object* x_132; size_t x_133; size_t x_134; uint8_t x_135; 
x_131 = lean_ctor_get(x_114, 0);
x_132 = lean_ctor_get(x_114, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_114);
x_133 = lean_ptr_addr(x_105);
lean_dec(x_105);
x_134 = lean_ptr_addr(x_131);
x_135 = lean_usize_dec_eq(x_133, x_134);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_104);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_136 = x_1;
} else {
 lean_dec_ref(x_1);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(2, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_107);
lean_ctor_set(x_137, 1, x_131);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_132);
return x_138;
}
else
{
size_t x_139; size_t x_140; uint8_t x_141; 
x_139 = lean_ptr_addr(x_104);
lean_dec(x_104);
x_140 = lean_ptr_addr(x_107);
x_141 = lean_usize_dec_eq(x_139, x_140);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_142 = x_1;
} else {
 lean_dec_ref(x_1);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(2, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_107);
lean_ctor_set(x_143, 1, x_131);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_132);
return x_144;
}
else
{
lean_object* x_145; 
lean_dec(x_131);
lean_dec(x_107);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_1);
lean_ctor_set(x_145, 1, x_132);
return x_145;
}
}
}
}
else
{
uint8_t x_146; 
lean_dec(x_107);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_1);
x_146 = !lean_is_exclusive(x_114);
if (x_146 == 0)
{
return x_114;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_114, 0);
x_148 = lean_ctor_get(x_114, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_114);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_150 = lean_ctor_get(x_2, 0);
x_151 = lean_ctor_get(x_2, 1);
x_152 = lean_ctor_get(x_2, 2);
lean_inc(x_152);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_2);
x_153 = lean_box(0);
x_154 = l_Std_RBNode_insert___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectExpr___spec__1(x_150, x_109, x_153);
x_155 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_151);
lean_ctor_set(x_155, 2, x_152);
lean_inc(x_105);
x_156 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_105, x_155, x_3, x_4, x_5, x_6, x_108);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; size_t x_160; size_t x_161; uint8_t x_162; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_159 = x_156;
} else {
 lean_dec_ref(x_156);
 x_159 = lean_box(0);
}
x_160 = lean_ptr_addr(x_105);
lean_dec(x_105);
x_161 = lean_ptr_addr(x_157);
x_162 = lean_usize_dec_eq(x_160, x_161);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_104);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_163 = x_1;
} else {
 lean_dec_ref(x_1);
 x_163 = lean_box(0);
}
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(2, 2, 0);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_107);
lean_ctor_set(x_164, 1, x_157);
if (lean_is_scalar(x_159)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_159;
}
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_158);
return x_165;
}
else
{
size_t x_166; size_t x_167; uint8_t x_168; 
x_166 = lean_ptr_addr(x_104);
lean_dec(x_104);
x_167 = lean_ptr_addr(x_107);
x_168 = lean_usize_dec_eq(x_166, x_167);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_169 = x_1;
} else {
 lean_dec_ref(x_1);
 x_169 = lean_box(0);
}
if (lean_is_scalar(x_169)) {
 x_170 = lean_alloc_ctor(2, 2, 0);
} else {
 x_170 = x_169;
}
lean_ctor_set(x_170, 0, x_107);
lean_ctor_set(x_170, 1, x_157);
if (lean_is_scalar(x_159)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_159;
}
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_158);
return x_171;
}
else
{
lean_object* x_172; 
lean_dec(x_157);
lean_dec(x_107);
if (lean_is_scalar(x_159)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_159;
}
lean_ctor_set(x_172, 0, x_1);
lean_ctor_set(x_172, 1, x_158);
return x_172;
}
}
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_107);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_1);
x_173 = lean_ctor_get(x_156, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_156, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_175 = x_156;
} else {
 lean_dec_ref(x_156);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 2, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_173);
lean_ctor_set(x_176, 1, x_174);
return x_176;
}
}
}
else
{
uint8_t x_177; 
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_177 = !lean_is_exclusive(x_106);
if (x_177 == 0)
{
return x_106;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_106, 0);
x_179 = lean_ctor_get(x_106, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_106);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
case 4:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_181 = lean_ctor_get(x_1, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_181, 3);
lean_inc(x_182);
x_183 = l_Lean_Compiler_LCNF_Specialize_visitCode___closed__1;
x_184 = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp___at_Lean_Compiler_LCNF_Specialize_visitCode___spec__1(x_182, x_183, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_184) == 0)
{
uint8_t x_185; 
x_185 = !lean_is_exclusive(x_184);
if (x_185 == 0)
{
uint8_t x_186; 
x_186 = !lean_is_exclusive(x_181);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; size_t x_192; size_t x_193; uint8_t x_194; 
x_187 = lean_ctor_get(x_184, 0);
x_188 = lean_ctor_get(x_181, 0);
x_189 = lean_ctor_get(x_181, 1);
x_190 = lean_ctor_get(x_181, 2);
x_191 = lean_ctor_get(x_181, 3);
x_192 = lean_ptr_addr(x_191);
lean_dec(x_191);
x_193 = lean_ptr_addr(x_187);
x_194 = lean_usize_dec_eq(x_192, x_193);
if (x_194 == 0)
{
uint8_t x_195; 
x_195 = !lean_is_exclusive(x_1);
if (x_195 == 0)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_1, 0);
lean_dec(x_196);
lean_ctor_set(x_181, 3, x_187);
lean_ctor_set(x_184, 0, x_1);
return x_184;
}
else
{
lean_object* x_197; 
lean_dec(x_1);
lean_ctor_set(x_181, 3, x_187);
x_197 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_197, 0, x_181);
lean_ctor_set(x_184, 0, x_197);
return x_184;
}
}
else
{
lean_free_object(x_181);
lean_dec(x_190);
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_187);
lean_ctor_set(x_184, 0, x_1);
return x_184;
}
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; size_t x_203; size_t x_204; uint8_t x_205; 
x_198 = lean_ctor_get(x_184, 0);
x_199 = lean_ctor_get(x_181, 0);
x_200 = lean_ctor_get(x_181, 1);
x_201 = lean_ctor_get(x_181, 2);
x_202 = lean_ctor_get(x_181, 3);
lean_inc(x_202);
lean_inc(x_201);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_181);
x_203 = lean_ptr_addr(x_202);
lean_dec(x_202);
x_204 = lean_ptr_addr(x_198);
x_205 = lean_usize_dec_eq(x_203, x_204);
if (x_205 == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_206 = x_1;
} else {
 lean_dec_ref(x_1);
 x_206 = lean_box(0);
}
x_207 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_207, 0, x_199);
lean_ctor_set(x_207, 1, x_200);
lean_ctor_set(x_207, 2, x_201);
lean_ctor_set(x_207, 3, x_198);
if (lean_is_scalar(x_206)) {
 x_208 = lean_alloc_ctor(4, 1, 0);
} else {
 x_208 = x_206;
}
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_184, 0, x_208);
return x_184;
}
else
{
lean_dec(x_201);
lean_dec(x_200);
lean_dec(x_199);
lean_dec(x_198);
lean_ctor_set(x_184, 0, x_1);
return x_184;
}
}
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; size_t x_216; size_t x_217; uint8_t x_218; 
x_209 = lean_ctor_get(x_184, 0);
x_210 = lean_ctor_get(x_184, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_184);
x_211 = lean_ctor_get(x_181, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_181, 1);
lean_inc(x_212);
x_213 = lean_ctor_get(x_181, 2);
lean_inc(x_213);
x_214 = lean_ctor_get(x_181, 3);
lean_inc(x_214);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 lean_ctor_release(x_181, 2);
 lean_ctor_release(x_181, 3);
 x_215 = x_181;
} else {
 lean_dec_ref(x_181);
 x_215 = lean_box(0);
}
x_216 = lean_ptr_addr(x_214);
lean_dec(x_214);
x_217 = lean_ptr_addr(x_209);
x_218 = lean_usize_dec_eq(x_216, x_217);
if (x_218 == 0)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_219 = x_1;
} else {
 lean_dec_ref(x_1);
 x_219 = lean_box(0);
}
if (lean_is_scalar(x_215)) {
 x_220 = lean_alloc_ctor(0, 4, 0);
} else {
 x_220 = x_215;
}
lean_ctor_set(x_220, 0, x_211);
lean_ctor_set(x_220, 1, x_212);
lean_ctor_set(x_220, 2, x_213);
lean_ctor_set(x_220, 3, x_209);
if (lean_is_scalar(x_219)) {
 x_221 = lean_alloc_ctor(4, 1, 0);
} else {
 x_221 = x_219;
}
lean_ctor_set(x_221, 0, x_220);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_210);
return x_222;
}
else
{
lean_object* x_223; 
lean_dec(x_215);
lean_dec(x_213);
lean_dec(x_212);
lean_dec(x_211);
lean_dec(x_209);
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_1);
lean_ctor_set(x_223, 1, x_210);
return x_223;
}
}
}
else
{
uint8_t x_224; 
lean_dec(x_181);
lean_dec(x_1);
x_224 = !lean_is_exclusive(x_184);
if (x_224 == 0)
{
return x_184;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_184, 0);
x_226 = lean_ctor_get(x_184, 1);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_184);
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
}
default: 
{
lean_object* x_228; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_228 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_228, 0, x_1);
lean_ctor_set(x_228, 1, x_7);
return x_228;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitFunDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 4);
lean_inc(x_9);
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_array_get_size(x_8);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
x_19 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_18, x_8, x_16, x_4, x_5, x_6, x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
x_24 = lean_nat_dec_le(x_12, x_12);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_25 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_1, 3);
lean_inc(x_28);
x_29 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_28, x_8, x_26, x_4, x_5, x_6, x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_25, 0);
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_25);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
size_t x_34; size_t x_35; lean_object* x_36; lean_object* x_37; 
x_34 = 0;
x_35 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_36 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_8, x_34, x_35, x_11);
lean_ctor_set(x_2, 0, x_36);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_37 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_1, 3);
lean_inc(x_40);
x_41 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_40, x_8, x_38, x_4, x_5, x_6, x_39);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_41;
}
else
{
uint8_t x_42; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_37);
if (x_42 == 0)
{
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 0);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_37);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_46 = lean_ctor_get(x_2, 0);
x_47 = lean_ctor_get(x_2, 1);
x_48 = lean_ctor_get(x_2, 2);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_2);
x_49 = lean_array_get_size(x_8);
x_50 = lean_unsigned_to_nat(0u);
x_51 = lean_nat_dec_lt(x_50, x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_49);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_46);
lean_ctor_set(x_52, 1, x_47);
lean_ctor_set(x_52, 2, x_48);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_53 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_52, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_1, 3);
lean_inc(x_56);
x_57 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_56, x_8, x_54, x_4, x_5, x_6, x_55);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_58 = lean_ctor_get(x_53, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_60 = x_53;
} else {
 lean_dec_ref(x_53);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(1, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
else
{
uint8_t x_62; 
x_62 = lean_nat_dec_le(x_49, x_49);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_49);
x_63 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_63, 0, x_46);
lean_ctor_set(x_63, 1, x_47);
lean_ctor_set(x_63, 2, x_48);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_64 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_63, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_ctor_get(x_1, 3);
lean_inc(x_67);
x_68 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_67, x_8, x_65, x_4, x_5, x_6, x_66);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_69 = lean_ctor_get(x_64, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_64, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_71 = x_64;
} else {
 lean_dec_ref(x_64);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = 0;
x_74 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_75 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_8, x_73, x_74, x_46);
x_76 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_47);
lean_ctor_set(x_76, 2, x_48);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_77 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_9, x_76, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_ctor_get(x_1, 3);
lean_inc(x_80);
x_81 = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(x_1, x_80, x_8, x_78, x_4, x_5, x_6, x_79);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_82 = lean_ctor_get(x_77, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_84 = x_77;
} else {
 lean_dec_ref(x_77);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_filterMapM___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__3(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__5___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__6(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; lean_object* x_15; 
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_14, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Compiler_LCNF_Specialize_visitCode___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Specialize_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_1);
x_8 = l_Lean_Compiler_LCNF_isTemplateLike(x_1, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_ctor_get(x_1, 3);
x_18 = lean_ctor_get(x_1, 4);
x_19 = lean_ctor_get(x_2, 0);
x_20 = lean_array_get_size(x_17);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_20);
x_23 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_18, x_2, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_ctor_set(x_1, 4, x_25);
lean_ctor_set(x_23, 0, x_1);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_23, 0);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_23);
lean_ctor_set(x_1, 4, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_free_object(x_1);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
return x_23;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_23, 0);
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_23);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_20, x_20);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_20);
x_34 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_18, x_2, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_ctor_set(x_1, 4, x_36);
lean_ctor_set(x_34, 0, x_1);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_34, 0);
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_34);
lean_ctor_set(x_1, 4, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_free_object(x_1);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_40 = !lean_is_exclusive(x_34);
if (x_40 == 0)
{
return x_34;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_34, 0);
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_34);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
size_t x_44; size_t x_45; lean_object* x_46; lean_object* x_47; 
x_44 = 0;
x_45 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_46 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_17, x_44, x_45, x_19);
lean_ctor_set(x_2, 0, x_46);
x_47 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_18, x_2, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_ctor_set(x_1, 4, x_49);
lean_ctor_set(x_47, 0, x_1);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_47, 0);
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_47);
lean_ctor_set(x_1, 4, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_1);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_free_object(x_1);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_53 = !lean_is_exclusive(x_47);
if (x_53 == 0)
{
return x_47;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_47, 0);
x_55 = lean_ctor_get(x_47, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_47);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_57 = lean_ctor_get(x_1, 0);
x_58 = lean_ctor_get(x_1, 1);
x_59 = lean_ctor_get(x_1, 2);
x_60 = lean_ctor_get(x_1, 3);
x_61 = lean_ctor_get(x_1, 4);
x_62 = lean_ctor_get(x_2, 0);
x_63 = lean_ctor_get(x_2, 1);
x_64 = lean_ctor_get(x_2, 2);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_2);
x_65 = lean_array_get_size(x_60);
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_nat_dec_lt(x_66, x_65);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_65);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_63);
lean_ctor_set(x_68, 2, x_64);
x_69 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_61, x_68, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_72 = x_69;
} else {
 lean_dec_ref(x_69);
 x_72 = lean_box(0);
}
lean_ctor_set(x_1, 4, x_70);
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_1);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_free_object(x_1);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_74 = lean_ctor_get(x_69, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_76 = x_69;
} else {
 lean_dec_ref(x_69);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
else
{
uint8_t x_78; 
x_78 = lean_nat_dec_le(x_65, x_65);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_65);
x_79 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_79, 0, x_62);
lean_ctor_set(x_79, 1, x_63);
lean_ctor_set(x_79, 2, x_64);
x_80 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_61, x_79, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_83 = x_80;
} else {
 lean_dec_ref(x_80);
 x_83 = lean_box(0);
}
lean_ctor_set(x_1, 4, x_81);
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_1);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_free_object(x_1);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_85 = lean_ctor_get(x_80, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_80, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_87 = x_80;
} else {
 lean_dec_ref(x_80);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
else
{
size_t x_89; size_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_89 = 0;
x_90 = lean_usize_of_nat(x_65);
lean_dec(x_65);
x_91 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_60, x_89, x_90, x_62);
x_92 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_63);
lean_ctor_set(x_92, 2, x_64);
x_93 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_61, x_92, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
lean_ctor_set(x_1, 4, x_94);
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_1);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_free_object(x_1);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_98 = lean_ctor_get(x_93, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_93, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_100 = x_93;
} else {
 lean_dec_ref(x_93);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_102 = lean_ctor_get(x_1, 0);
x_103 = lean_ctor_get(x_1, 1);
x_104 = lean_ctor_get(x_1, 2);
x_105 = lean_ctor_get(x_1, 3);
x_106 = lean_ctor_get(x_1, 4);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_1);
x_107 = lean_ctor_get(x_2, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_2, 1);
lean_inc(x_108);
x_109 = lean_ctor_get(x_2, 2);
lean_inc(x_109);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 x_110 = x_2;
} else {
 lean_dec_ref(x_2);
 x_110 = lean_box(0);
}
x_111 = lean_array_get_size(x_105);
x_112 = lean_unsigned_to_nat(0u);
x_113 = lean_nat_dec_lt(x_112, x_111);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; 
lean_dec(x_111);
if (lean_is_scalar(x_110)) {
 x_114 = lean_alloc_ctor(0, 3, 0);
} else {
 x_114 = x_110;
}
lean_ctor_set(x_114, 0, x_107);
lean_ctor_set(x_114, 1, x_108);
lean_ctor_set(x_114, 2, x_109);
x_115 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_106, x_114, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_115)) {
 lean_ctor_release(x_115, 0);
 lean_ctor_release(x_115, 1);
 x_118 = x_115;
} else {
 lean_dec_ref(x_115);
 x_118 = lean_box(0);
}
x_119 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_119, 0, x_102);
lean_ctor_set(x_119, 1, x_103);
lean_ctor_set(x_119, 2, x_104);
lean_ctor_set(x_119, 3, x_105);
lean_ctor_set(x_119, 4, x_116);
if (lean_is_scalar(x_118)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_118;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_117);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
x_121 = lean_ctor_get(x_115, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_115, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_115)) {
 lean_ctor_release(x_115, 0);
 lean_ctor_release(x_115, 1);
 x_123 = x_115;
} else {
 lean_dec_ref(x_115);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
else
{
uint8_t x_125; 
x_125 = lean_nat_dec_le(x_111, x_111);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
lean_dec(x_111);
if (lean_is_scalar(x_110)) {
 x_126 = lean_alloc_ctor(0, 3, 0);
} else {
 x_126 = x_110;
}
lean_ctor_set(x_126, 0, x_107);
lean_ctor_set(x_126, 1, x_108);
lean_ctor_set(x_126, 2, x_109);
x_127 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_106, x_126, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
x_131 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_131, 0, x_102);
lean_ctor_set(x_131, 1, x_103);
lean_ctor_set(x_131, 2, x_104);
lean_ctor_set(x_131, 3, x_105);
lean_ctor_set(x_131, 4, x_128);
if (lean_is_scalar(x_130)) {
 x_132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_132 = x_130;
}
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_129);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
x_133 = lean_ctor_get(x_127, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_127, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_135 = x_127;
} else {
 lean_dec_ref(x_127);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
else
{
size_t x_137; size_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_137 = 0;
x_138 = lean_usize_of_nat(x_111);
lean_dec(x_111);
x_139 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_Specialize_withParams___spec__1(x_105, x_137, x_138, x_107);
if (lean_is_scalar(x_110)) {
 x_140 = lean_alloc_ctor(0, 3, 0);
} else {
 x_140 = x_110;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_108);
lean_ctor_set(x_140, 2, x_109);
x_141 = l_Lean_Compiler_LCNF_Specialize_visitCode(x_106, x_140, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_144 = x_141;
} else {
 lean_dec_ref(x_141);
 x_144 = lean_box(0);
}
x_145 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_145, 0, x_102);
lean_ctor_set(x_145, 1, x_103);
lean_ctor_set(x_145, 2, x_104);
lean_ctor_set(x_145, 3, x_105);
lean_ctor_set(x_145, 4, x_142);
if (lean_is_scalar(x_144)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_144;
}
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_143);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
x_147 = lean_ctor_get(x_141, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_141, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_149 = x_141;
} else {
 lean_dec_ref(x_141);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(1, 2, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
}
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_151 = !lean_is_exclusive(x_8);
if (x_151 == 0)
{
lean_object* x_152; 
x_152 = lean_ctor_get(x_8, 0);
lean_dec(x_152);
lean_ctor_set(x_8, 0, x_1);
return x_8;
}
else
{
lean_object* x_153; lean_object* x_154; 
x_153 = lean_ctor_get(x_8, 1);
lean_inc(x_153);
lean_dec(x_8);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_1);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_specialize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_box(0);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
x_9 = lean_st_ref_get(x_4, x_5);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_12 = lean_st_mk_ref(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_4);
lean_inc(x_13);
x_15 = l_Lean_Compiler_LCNF_Specialize_main(x_1, x_8, x_13, x_2, x_3, x_4, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_4, x_17);
lean_dec(x_4);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_get(x_13, x_19);
lean_dec(x_13);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_array_push(x_22, x_16);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_array_push(x_24, x_16);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_13);
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_specialize___elambda__1___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_eq(x_2, x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_1, x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_11 = l_Lean_Compiler_LCNF_Decl_specialize(x_10, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Array_append___rarg(x_4, x_12);
x_15 = 1;
x_16 = lean_usize_add(x_2, x_15);
x_2 = x_16;
x_4 = x_14;
x_8 = x_13;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_8);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_specialize___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Lean_Compiler_LCNF_saveSpecParamInfo(x_1, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_6, 1);
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
lean_ctor_set(x_6, 0, x_13);
return x_6;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_10, x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
lean_ctor_set(x_6, 0, x_15);
return x_6;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
lean_free_object(x_6);
x_16 = 0;
x_17 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_18 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_19 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_specialize___elambda__1___spec__1(x_1, x_16, x_17, x_18, x_2, x_3, x_4, x_8);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
lean_dec(x_6);
x_21 = lean_array_get_size(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_lt(x_22, x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_21);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_21, x_21);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_21);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_20);
return x_28;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = 0;
x_30 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_31 = l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1;
x_32 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_specialize___elambda__1___spec__1(x_1, x_29, x_30, x_31, x_2, x_3, x_4, x_20);
return x_32;
}
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_6);
if (x_33 == 0)
{
return x_6;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_6, 0);
x_35 = lean_ctor_get(x_6, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_6);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_specialize___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_specialize___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_specialize___elambda__1___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_specialize___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = l_Lean_Compiler_LCNF_specialize___closed__1;
x_4 = l_Lean_Compiler_LCNF_specialize___closed__2;
x_5 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_specialize() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Compiler_LCNF_specialize___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_specialize___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_10 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Compiler_LCNF_specialize___elambda__1___spec__1(x_1, x_9, x_10, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_specialize___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Compiler_LCNF_specialize___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4;
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4;
x_3 = 1;
x_4 = l_Lean_registerTraceClass(x_2, x_3, x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__6;
x_7 = 0;
x_8 = l_Lean_registerTraceClass(x_6, x_7, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791____closed__1;
x_11 = l_Lean_registerTraceClass(x_10, x_7, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
return x_4;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_4);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_Specialize(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_Simp(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_SpecInfo(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_Level(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Specialize(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Specialize(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_SpecInfo(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ToExpr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Level(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__1);
l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__2);
l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__3 = _init_l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__3);
l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__4 = _init_l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10____closed__4);
if (builtin) {res = l_Lean_Compiler_LCNF_Specialize_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_10_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_Specialize_specCacheExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specCacheExt);
lean_dec_ref(res);
}l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__1);
l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__2);
l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__3 = _init_l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_cacheSpec___closed__3);
l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_findSpecCache_x3f___closed__1);
l_Lean_Compiler_LCNF_Specialize_Context_scope___default = _init_l_Lean_Compiler_LCNF_Specialize_Context_scope___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Context_scope___default);
l_Lean_Compiler_LCNF_Specialize_Context_ground___default = _init_l_Lean_Compiler_LCNF_Specialize_Context_ground___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Context_ground___default);
l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_State_decls___default___closed__1);
l_Lean_Compiler_LCNF_Specialize_State_decls___default = _init_l_Lean_Compiler_LCNF_Specialize_State_decls___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_State_decls___default);
l_Lean_Compiler_LCNF_Specialize_Collector_State_visited___default = _init_l_Lean_Compiler_LCNF_Specialize_Collector_State_visited___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_State_visited___default);
l_Lean_Compiler_LCNF_Specialize_Collector_State_params___default = _init_l_Lean_Compiler_LCNF_Specialize_Collector_State_params___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_State_params___default);
l_Lean_Compiler_LCNF_Specialize_Collector_State_decls___default = _init_l_Lean_Compiler_LCNF_Specialize_Collector_State_decls___default();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_State_decls___default);
l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__1);
l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_collectExpr___closed__2);
l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__1 = _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__1();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__1);
l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__2 = _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__2();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__2);
l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__3 = _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__3();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__3);
l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__4 = _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__4();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__4);
l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__5 = _init_l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__5();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___spec__1___closed__5);
l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__1);
l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__2);
l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__3 = _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__3);
l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__4 = _init_l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_Collector_collectFVar___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Specialize_shouldSpecialize___spec__1___closed__1);
l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_shouldSpecialize___closed__1);
l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__1);
l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__2);
l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__3 = _init_l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__3);
l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__4 = _init_l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_mkSpecDecl___closed__4);
l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___closed__1 = _init_l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_getSpecParamInfo_x3f___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__1___closed__1);
l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2___closed__1 = _init_l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2___closed__1();
lean_mark_persistent(l_Lean_isTracingEnabledFor___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__2___closed__1);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__1 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__1();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__1);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__2 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__2();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__2);
l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__3 = _init_l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__3();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__7___closed__3);
l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__1 = _init_l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__1();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__1);
l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__2 = _init_l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__2();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___spec__8___closed__2);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__1);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__1___closed__2);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__1);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__2);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__3 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__3);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__4 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__4);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__5);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__6 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__6();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__6);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__7 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__7();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__7);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__8 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__8();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__8);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__9 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__9();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__9);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__10 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__10();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__10);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__11 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__11();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__11);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__12 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__12();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__12);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__13 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__13();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__13);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__14 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__14();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__14);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__15 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__15();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__3___closed__15);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__1);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__2);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__3 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__4___closed__3);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__1);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__2 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__2);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__3 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__3);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__4);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__5 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__5();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__5);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__6 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__6();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__6);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__7 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__7();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__7);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__8 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__8();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__5___closed__8);
l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_specializeApp_x3f___lambda__6___closed__1);
l_Lean_Compiler_LCNF_Specialize_visitCode___closed__1 = _init_l_Lean_Compiler_LCNF_Specialize_visitCode___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Specialize_visitCode___closed__1);
l_Lean_Compiler_LCNF_specialize___closed__1 = _init_l_Lean_Compiler_LCNF_specialize___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_specialize___closed__1);
l_Lean_Compiler_LCNF_specialize___closed__2 = _init_l_Lean_Compiler_LCNF_specialize___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_specialize___closed__2);
l_Lean_Compiler_LCNF_specialize___closed__3 = _init_l_Lean_Compiler_LCNF_specialize___closed__3();
lean_mark_persistent(l_Lean_Compiler_LCNF_specialize___closed__3);
l_Lean_Compiler_LCNF_specialize = _init_l_Lean_Compiler_LCNF_specialize();
lean_mark_persistent(l_Lean_Compiler_LCNF_specialize);
l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791____closed__1 = _init_l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791____closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791____closed__1);
res = l_Lean_Compiler_LCNF_initFn____x40_Lean_Compiler_LCNF_Specialize___hyg_4791_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif