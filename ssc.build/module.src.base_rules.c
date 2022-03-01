/* Generated code for Python module 'src.base_rules'
 * created by Nuitka version 0.7
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_src$base_rules" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_src$base_rules;
PyDictObject *moduledict_src$base_rules;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[58];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[58];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("src.base_rules"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 58; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_src$base_rules(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 58; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ce5284dc36c2538b8fad1dbc1de01467;
static PyCodeObject *codeobj_304526a623bbc479ae8df4b8814dc52e;
static PyCodeObject *codeobj_d39e39911d3c2012cc09a14c402cc28c;
static PyCodeObject *codeobj_06f6ee271f1f32223a796ea2f60ae9cd;
static PyCodeObject *codeobj_59b68b9c97b4400e29f193bf7313878c;
static PyCodeObject *codeobj_a77c3908185c2077ec59fba9ad141e41;
static PyCodeObject *codeobj_dc262910c6c26bcb21381dbe838dd093;
static PyCodeObject *codeobj_ee7139516d58bc5761d08076666964bb;
static PyCodeObject *codeobj_af68f6aaf03a28943d53f3ba909728bb;
static PyCodeObject *codeobj_49b2f4d128349e8139eb2c43361637d2;
static PyCodeObject *codeobj_c55d12fd717b97a75e5beafd0cd5d602;
static PyCodeObject *codeobj_fc60bbe620f62587e709a1732511fb8d;
static PyCodeObject *codeobj_91b8da6f5f269bdbf72e900441feda2b;
static PyCodeObject *codeobj_868431120294219ef11d9fe12be17b3c;
static PyCodeObject *codeobj_dcedf8861ccd6dfc62dca729cac77bce;
static PyCodeObject *codeobj_b2f859e71ebb32a2cfaf05d0a72c2717;
static PyCodeObject *codeobj_dc3f89b8de4b7e011218095579ef2a9b;
static PyCodeObject *codeobj_d733eff3d69b4be3c7165a7aca232302;
static PyCodeObject *codeobj_b07754d07f2a70ccabdf322118b25e92;
static PyCodeObject *codeobj_652f238a576d412204025b6caf15074f;
static PyCodeObject *codeobj_c435a0621ca1705820108f77b236d98e;
static PyCodeObject *codeobj_eeaa341f07891183504cb639cc95e7b7;
static PyCodeObject *codeobj_802ccc640cd275fbd228b986ed9955c1;
static PyCodeObject *codeobj_7ea75329e846c6dbb272ec58f31d9297;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[38]); CHECK_OBJECT(module_filename_obj);
    codeobj_ce5284dc36c2538b8fad1dbc1de01467 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[40], NULL, 1, 0, 0);
    codeobj_304526a623bbc479ae8df4b8814dc52e = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[41], NULL, 1, 0, 0);
    codeobj_d39e39911d3c2012cc09a14c402cc28c = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[42], NULL, 1, 0, 0);
    codeobj_06f6ee271f1f32223a796ea2f60ae9cd = MAKE_CODEOBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[42], NULL, 1, 0, 0);
    codeobj_59b68b9c97b4400e29f193bf7313878c = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[43], NULL, 1, 0, 0);
    codeobj_a77c3908185c2077ec59fba9ad141e41 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[44], NULL, 1, 0, 0);
    codeobj_dc262910c6c26bcb21381dbe838dd093 = MAKE_CODEOBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[45], NULL, 1, 0, 0);
    codeobj_ee7139516d58bc5761d08076666964bb = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[46], NULL, 1, 0, 0);
    codeobj_af68f6aaf03a28943d53f3ba909728bb = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[47], NULL, 1, 0, 0);
    codeobj_49b2f4d128349e8139eb2c43361637d2 = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[48], NULL, 1, 0, 0);
    codeobj_c55d12fd717b97a75e5beafd0cd5d602 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[49], NULL, 1, 0, 0);
    codeobj_fc60bbe620f62587e709a1732511fb8d = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[50], NULL, 1, 0, 0);
    codeobj_91b8da6f5f269bdbf72e900441feda2b = MAKE_CODEOBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[51], NULL, 1, 0, 0);
    codeobj_868431120294219ef11d9fe12be17b3c = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[52], NULL, 1, 0, 0);
    codeobj_dcedf8861ccd6dfc62dca729cac77bce = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[53], NULL, NULL, 0, 0, 0);
    codeobj_b2f859e71ebb32a2cfaf05d0a72c2717 = MAKE_CODEOBJECT(module_filename_obj, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[54], NULL, 1, 0, 0);
    codeobj_dc3f89b8de4b7e011218095579ef2a9b = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[55], NULL, 1, 0, 0);
    codeobj_d733eff3d69b4be3c7165a7aca232302 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[45], NULL, 1, 0, 0);
    codeobj_b07754d07f2a70ccabdf322118b25e92 = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[56], NULL, 0, 0, 0);
    codeobj_652f238a576d412204025b6caf15074f = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[57], NULL, 1, 0, 0);
    codeobj_c435a0621ca1705820108f77b236d98e = MAKE_CODEOBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], NULL, NULL, 0, 0, 0);
    codeobj_eeaa341f07891183504cb639cc95e7b7 = MAKE_CODEOBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], NULL, NULL, 0, 0, 0);
    codeobj_802ccc640cd275fbd228b986ed9955c1 = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[54], NULL, 1, 0, 0);
    codeobj_7ea75329e846c6dbb272ec58f31d9297 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[41], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_src$base_rules$$$function__1_and_clause();


static PyObject *MAKE_FUNCTION_src$base_rules$$$function__2_or_clause();


static PyObject *MAKE_FUNCTION_src$base_rules$$$function__3_grouped();


static PyObject *MAKE_FUNCTION_src$base_rules$$$function__4_get_base_rules();


static PyObject *MAKE_FUNCTION_src$base_rules$$$function__5_number_everywhere();


static PyObject *MAKE_FUNCTION_src$base_rules$$$function__6_no_double_entries();


static PyObject *MAKE_FUNCTION_src$base_rules$$$function__7_row();


static PyObject *MAKE_FUNCTION_src$base_rules$$$function__8_column();


static PyObject *MAKE_FUNCTION_src$base_rules$$$function__9_area();


// The module function definitions.
static PyObject *impl_src$base_rules$$$function__1_and_clause(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ks = python_pars[0];
    struct Nuitka_FrameObject *frame_b2f859e71ebb32a2cfaf05d0a72c2717;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717)) {
        Py_XDECREF(cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717 = MAKE_FUNCTION_FRAME(codeobj_b2f859e71ebb32a2cfaf05d0a72c2717, module_src$base_rules, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717->m_type_description == NULL);
    frame_b2f859e71ebb32a2cfaf05d0a72c2717 = cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b2f859e71ebb32a2cfaf05d0a72c2717);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b2f859e71ebb32a2cfaf05d0a72c2717) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[0];
        CHECK_OBJECT(par_ks);
        tmp_iterable_value_1 = par_ks;
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2f859e71ebb32a2cfaf05d0a72c2717);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2f859e71ebb32a2cfaf05d0a72c2717);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2f859e71ebb32a2cfaf05d0a72c2717);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2f859e71ebb32a2cfaf05d0a72c2717, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2f859e71ebb32a2cfaf05d0a72c2717->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2f859e71ebb32a2cfaf05d0a72c2717, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2f859e71ebb32a2cfaf05d0a72c2717,
        type_description_1,
        par_ks
    );


    // Release cached frame if used for exception.
    if (frame_b2f859e71ebb32a2cfaf05d0a72c2717 == cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717);
        cache_frame_b2f859e71ebb32a2cfaf05d0a72c2717 = NULL;
    }

    assertFrameObject(frame_b2f859e71ebb32a2cfaf05d0a72c2717);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ks);
    Py_DECREF(par_ks);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ks);
    Py_DECREF(par_ks);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$base_rules$$$function__2_or_clause(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ks = python_pars[0];
    struct Nuitka_FrameObject *frame_802ccc640cd275fbd228b986ed9955c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_802ccc640cd275fbd228b986ed9955c1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_802ccc640cd275fbd228b986ed9955c1)) {
        Py_XDECREF(cache_frame_802ccc640cd275fbd228b986ed9955c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_802ccc640cd275fbd228b986ed9955c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_802ccc640cd275fbd228b986ed9955c1 = MAKE_FUNCTION_FRAME(codeobj_802ccc640cd275fbd228b986ed9955c1, module_src$base_rules, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_802ccc640cd275fbd228b986ed9955c1->m_type_description == NULL);
    frame_802ccc640cd275fbd228b986ed9955c1 = cache_frame_802ccc640cd275fbd228b986ed9955c1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_802ccc640cd275fbd228b986ed9955c1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_802ccc640cd275fbd228b986ed9955c1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[1];
        CHECK_OBJECT(par_ks);
        tmp_iterable_value_1 = par_ks;
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_802ccc640cd275fbd228b986ed9955c1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_802ccc640cd275fbd228b986ed9955c1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_802ccc640cd275fbd228b986ed9955c1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_802ccc640cd275fbd228b986ed9955c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_802ccc640cd275fbd228b986ed9955c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_802ccc640cd275fbd228b986ed9955c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_802ccc640cd275fbd228b986ed9955c1,
        type_description_1,
        par_ks
    );


    // Release cached frame if used for exception.
    if (frame_802ccc640cd275fbd228b986ed9955c1 == cache_frame_802ccc640cd275fbd228b986ed9955c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_802ccc640cd275fbd228b986ed9955c1);
        cache_frame_802ccc640cd275fbd228b986ed9955c1 = NULL;
    }

    assertFrameObject(frame_802ccc640cd275fbd228b986ed9955c1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ks);
    Py_DECREF(par_ks);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ks);
    Py_DECREF(par_ks);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$base_rules$$$function__3_grouped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_clause = python_pars[0];
    struct Nuitka_FrameObject *frame_652f238a576d412204025b6caf15074f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_652f238a576d412204025b6caf15074f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_652f238a576d412204025b6caf15074f)) {
        Py_XDECREF(cache_frame_652f238a576d412204025b6caf15074f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_652f238a576d412204025b6caf15074f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_652f238a576d412204025b6caf15074f = MAKE_FUNCTION_FRAME(codeobj_652f238a576d412204025b6caf15074f, module_src$base_rules, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_652f238a576d412204025b6caf15074f->m_type_description == NULL);
    frame_652f238a576d412204025b6caf15074f = cache_frame_652f238a576d412204025b6caf15074f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_652f238a576d412204025b6caf15074f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_652f238a576d412204025b6caf15074f) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_capi_result_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_clause);
        tmp_len_arg_1 = par_clause;
        tmp_capi_result_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_tuple_element_1 = mod_consts[2];
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_clause);
            tmp_format_value_1 = par_clause;
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[4];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_652f238a576d412204025b6caf15074f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_652f238a576d412204025b6caf15074f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_652f238a576d412204025b6caf15074f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_652f238a576d412204025b6caf15074f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_652f238a576d412204025b6caf15074f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_652f238a576d412204025b6caf15074f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_652f238a576d412204025b6caf15074f,
        type_description_1,
        par_clause
    );


    // Release cached frame if used for exception.
    if (frame_652f238a576d412204025b6caf15074f == cache_frame_652f238a576d412204025b6caf15074f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_652f238a576d412204025b6caf15074f);
        cache_frame_652f238a576d412204025b6caf15074f = NULL;
    }

    assertFrameObject(frame_652f238a576d412204025b6caf15074f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clause);
    Py_DECREF(par_clause);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clause);
    Py_DECREF(par_clause);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$base_rules$$$function__4_get_base_rules(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_rs = NULL;
    PyObject *var_columns = NULL;
    PyObject *var_areas = NULL;
    PyObject *var_base_rules = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_1_var_j = NULL;
    PyObject *outline_2_var_a = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_b07754d07f2a70ccabdf322118b25e92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_304526a623bbc479ae8df4b8814dc52e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_304526a623bbc479ae8df4b8814dc52e_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_dc262910c6c26bcb21381dbe838dd093_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_dc262910c6c26bcb21381dbe838dd093_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_ce5284dc36c2538b8fad1dbc1de01467_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_b07754d07f2a70ccabdf322118b25e92 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b07754d07f2a70ccabdf322118b25e92)) {
        Py_XDECREF(cache_frame_b07754d07f2a70ccabdf322118b25e92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b07754d07f2a70ccabdf322118b25e92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b07754d07f2a70ccabdf322118b25e92 = MAKE_FUNCTION_FRAME(codeobj_b07754d07f2a70ccabdf322118b25e92, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b07754d07f2a70ccabdf322118b25e92->m_type_description == NULL);
    frame_b07754d07f2a70ccabdf322118b25e92 = cache_frame_b07754d07f2a70ccabdf322118b25e92;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b07754d07f2a70ccabdf322118b25e92);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b07754d07f2a70ccabdf322118b25e92) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_right_value_1;
        tmp_xrange_low_1 = mod_consts[5];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[5];
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_right_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = mod_consts[11];
        tmp_int_arg_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_left_value_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_304526a623bbc479ae8df4b8814dc52e_2)) {
            Py_XDECREF(cache_frame_304526a623bbc479ae8df4b8814dc52e_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_304526a623bbc479ae8df4b8814dc52e_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_304526a623bbc479ae8df4b8814dc52e_2 = MAKE_FUNCTION_FRAME(codeobj_304526a623bbc479ae8df4b8814dc52e, module_src$base_rules, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_304526a623bbc479ae8df4b8814dc52e_2->m_type_description == NULL);
        frame_304526a623bbc479ae8df4b8814dc52e_2 = cache_frame_304526a623bbc479ae8df4b8814dc52e_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_304526a623bbc479ae8df4b8814dc52e_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_304526a623bbc479ae8df4b8814dc52e_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 26;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_9;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_i);
            tmp_args_element_value_2 = outline_0_var_i;
            frame_304526a623bbc479ae8df4b8814dc52e_2->m_frame.f_lineno = 26;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_304526a623bbc479ae8df4b8814dc52e_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_304526a623bbc479ae8df4b8814dc52e_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_304526a623bbc479ae8df4b8814dc52e_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_304526a623bbc479ae8df4b8814dc52e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_304526a623bbc479ae8df4b8814dc52e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_304526a623bbc479ae8df4b8814dc52e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_304526a623bbc479ae8df4b8814dc52e_2,
            type_description_2,
            outline_0_var_i
        );


        // Release cached frame if used for exception.
        if (frame_304526a623bbc479ae8df4b8814dc52e_2 == cache_frame_304526a623bbc479ae8df4b8814dc52e_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_304526a623bbc479ae8df4b8814dc52e_2);
            cache_frame_304526a623bbc479ae8df4b8814dc52e_2 = NULL;
        }

        assertFrameObject(frame_304526a623bbc479ae8df4b8814dc52e_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 26;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_b07754d07f2a70ccabdf322118b25e92->m_frame.f_lineno = 26;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_rs == NULL);
        var_rs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_iter_arg_2 == NULL)) {
                tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_12;
        }
        if (isFrameUnusable(cache_frame_dc262910c6c26bcb21381dbe838dd093_3)) {
            Py_XDECREF(cache_frame_dc262910c6c26bcb21381dbe838dd093_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_dc262910c6c26bcb21381dbe838dd093_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_dc262910c6c26bcb21381dbe838dd093_3 = MAKE_FUNCTION_FRAME(codeobj_dc262910c6c26bcb21381dbe838dd093, module_src$base_rules, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_dc262910c6c26bcb21381dbe838dd093_3->m_type_description == NULL);
        frame_dc262910c6c26bcb21381dbe838dd093_3 = cache_frame_dc262910c6c26bcb21381dbe838dd093_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_dc262910c6c26bcb21381dbe838dd093_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_dc262910c6c26bcb21381dbe838dd093_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 27;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_j;
                outline_1_var_j = tmp_assign_source_14;
                Py_INCREF(outline_1_var_j);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(outline_1_var_j);
            tmp_args_element_value_4 = outline_1_var_j;
            frame_dc262910c6c26bcb21381dbe838dd093_3->m_frame.f_lineno = 27;
            tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_args_element_value_3 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dc262910c6c26bcb21381dbe838dd093_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_dc262910c6c26bcb21381dbe838dd093_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dc262910c6c26bcb21381dbe838dd093_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dc262910c6c26bcb21381dbe838dd093_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dc262910c6c26bcb21381dbe838dd093_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dc262910c6c26bcb21381dbe838dd093_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dc262910c6c26bcb21381dbe838dd093_3,
            type_description_2,
            outline_1_var_j
        );


        // Release cached frame if used for exception.
        if (frame_dc262910c6c26bcb21381dbe838dd093_3 == cache_frame_dc262910c6c26bcb21381dbe838dd093_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_dc262910c6c26bcb21381dbe838dd093_3);
            cache_frame_dc262910c6c26bcb21381dbe838dd093_3 = NULL;
        }

        assertFrameObject(frame_dc262910c6c26bcb21381dbe838dd093_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_j);
        outline_1_var_j = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_j);
        outline_1_var_j = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 27;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_b07754d07f2a70ccabdf322118b25e92->m_frame.f_lineno = 27;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_columns == NULL);
        var_columns = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_3;
            tmp_iter_arg_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_iter_arg_3 == NULL)) {
                tmp_iter_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyList_New(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_17;
        }
        if (isFrameUnusable(cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4)) {
            Py_XDECREF(cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4 = MAKE_FUNCTION_FRAME(codeobj_ce5284dc36c2538b8fad1dbc1de01467, module_src$base_rules, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4->m_type_description == NULL);
        frame_ce5284dc36c2538b8fad1dbc1de01467_4 = cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ce5284dc36c2538b8fad1dbc1de01467_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ce5284dc36c2538b8fad1dbc1de01467_4) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_18 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 28;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_19 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_a;
                outline_2_var_a = tmp_assign_source_19;
                Py_INCREF(outline_2_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_6;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(outline_2_var_a);
            tmp_args_element_value_6 = outline_2_var_a;
            frame_ce5284dc36c2538b8fad1dbc1de01467_4->m_frame.f_lineno = 28;
            tmp_append_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(PyList_Check(tmp_append_list_3));
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_args_element_value_5 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_4;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ce5284dc36c2538b8fad1dbc1de01467_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_ce5284dc36c2538b8fad1dbc1de01467_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ce5284dc36c2538b8fad1dbc1de01467_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ce5284dc36c2538b8fad1dbc1de01467_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ce5284dc36c2538b8fad1dbc1de01467_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ce5284dc36c2538b8fad1dbc1de01467_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ce5284dc36c2538b8fad1dbc1de01467_4,
            type_description_2,
            outline_2_var_a
        );


        // Release cached frame if used for exception.
        if (frame_ce5284dc36c2538b8fad1dbc1de01467_4 == cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4);
            cache_frame_ce5284dc36c2538b8fad1dbc1de01467_4 = NULL;
        }

        assertFrameObject(frame_ce5284dc36c2538b8fad1dbc1de01467_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooo";
        goto try_except_handler_6;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_2_var_a);
        outline_2_var_a = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_a);
        outline_2_var_a = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 28;
        goto frame_exception_exit_1;
        outline_result_3:;
        frame_b07754d07f2a70ccabdf322118b25e92->m_frame.f_lineno = 28;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_areas == NULL);
        var_areas = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_8;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b07754d07f2a70ccabdf322118b25e92->m_frame.f_lineno = 29;
        tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = PyList_New(5);
        {
            PyObject *tmp_called_value_9;
            PyList_SET_ITEM(tmp_args_element_value_7, 0, tmp_list_element_1);
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            frame_b07754d07f2a70ccabdf322118b25e92->m_frame.f_lineno = 29;
            tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_7, 1, tmp_list_element_1);
            CHECK_OBJECT(var_rs);
            tmp_list_element_1 = var_rs;
            PyList_SET_ITEM0(tmp_args_element_value_7, 2, tmp_list_element_1);
            CHECK_OBJECT(var_columns);
            tmp_list_element_1 = var_columns;
            PyList_SET_ITEM0(tmp_args_element_value_7, 3, tmp_list_element_1);
            CHECK_OBJECT(var_areas);
            tmp_list_element_1 = var_areas;
            PyList_SET_ITEM0(tmp_args_element_value_7, 4, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_b07754d07f2a70ccabdf322118b25e92->m_frame.f_lineno = 29;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_base_rules == NULL);
        var_base_rules = tmp_assign_source_20;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b07754d07f2a70ccabdf322118b25e92);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b07754d07f2a70ccabdf322118b25e92);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b07754d07f2a70ccabdf322118b25e92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b07754d07f2a70ccabdf322118b25e92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b07754d07f2a70ccabdf322118b25e92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b07754d07f2a70ccabdf322118b25e92,
        type_description_1,
        var_rs,
        var_columns,
        var_areas,
        var_base_rules
    );


    // Release cached frame if used for exception.
    if (frame_b07754d07f2a70ccabdf322118b25e92 == cache_frame_b07754d07f2a70ccabdf322118b25e92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b07754d07f2a70ccabdf322118b25e92);
        cache_frame_b07754d07f2a70ccabdf322118b25e92 = NULL;
    }

    assertFrameObject(frame_b07754d07f2a70ccabdf322118b25e92);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_4:;
    CHECK_OBJECT(var_base_rules);
    tmp_return_value = var_base_rules;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rs);
    Py_DECREF(var_rs);
    var_rs = NULL;
    CHECK_OBJECT(var_columns);
    Py_DECREF(var_columns);
    var_columns = NULL;
    CHECK_OBJECT(var_areas);
    Py_DECREF(var_areas);
    var_areas = NULL;
    CHECK_OBJECT(var_base_rules);
    Py_DECREF(var_base_rules);
    var_base_rules = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_rs);
    var_rs = NULL;
    Py_XDECREF(var_columns);
    var_columns = NULL;
    Py_XDECREF(var_areas);
    var_areas = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$base_rules$$$function__5_number_everywhere(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_0_var_j = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_eeaa341f07891183504cb639cc95e7b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_d39e39911d3c2012cc09a14c402cc28c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_FrameObject *frame_af68f6aaf03a28943d53f3ba909728bb_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_af68f6aaf03a28943d53f3ba909728bb_3 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_d39e39911d3c2012cc09a14c402cc28c_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_eeaa341f07891183504cb639cc95e7b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eeaa341f07891183504cb639cc95e7b7)) {
        Py_XDECREF(cache_frame_eeaa341f07891183504cb639cc95e7b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eeaa341f07891183504cb639cc95e7b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eeaa341f07891183504cb639cc95e7b7 = MAKE_FUNCTION_FRAME(codeobj_eeaa341f07891183504cb639cc95e7b7, module_src$base_rules, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_eeaa341f07891183504cb639cc95e7b7->m_type_description == NULL);
    frame_eeaa341f07891183504cb639cc95e7b7 = cache_frame_eeaa341f07891183504cb639cc95e7b7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_eeaa341f07891183504cb639cc95e7b7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_eeaa341f07891183504cb639cc95e7b7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_d39e39911d3c2012cc09a14c402cc28c_2)) {
            Py_XDECREF(cache_frame_d39e39911d3c2012cc09a14c402cc28c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d39e39911d3c2012cc09a14c402cc28c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d39e39911d3c2012cc09a14c402cc28c_2 = MAKE_FUNCTION_FRAME(codeobj_d39e39911d3c2012cc09a14c402cc28c, module_src$base_rules, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d39e39911d3c2012cc09a14c402cc28c_2->m_type_description == NULL);
        frame_d39e39911d3c2012cc09a14c402cc28c_2 = cache_frame_d39e39911d3c2012cc09a14c402cc28c_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d39e39911d3c2012cc09a14c402cc28c_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d39e39911d3c2012cc09a14c402cc28c_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 34;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_4;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_iter_arg_2 == NULL)) {
                tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 34;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_j;
                outline_0_var_j = tmp_assign_source_7;
                Py_INCREF(outline_0_var_j);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_3;
                tmp_iter_arg_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_iter_arg_3 == NULL)) {
                    tmp_iter_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                }

                if (tmp_iter_arg_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
                if (tmp_assign_source_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__$0;
                    tmp_listcomp$listcomp_1__$0 = tmp_assign_source_8;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = PyList_New(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction;
                    tmp_listcomp$listcomp_1__contraction = tmp_assign_source_9;
                    Py_XDECREF(old);
                }

            }
            if (isFrameUnusable(cache_frame_af68f6aaf03a28943d53f3ba909728bb_3)) {
                Py_XDECREF(cache_frame_af68f6aaf03a28943d53f3ba909728bb_3);

#if _DEBUG_REFCOUNTS
                if (cache_frame_af68f6aaf03a28943d53f3ba909728bb_3 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_af68f6aaf03a28943d53f3ba909728bb_3 = MAKE_FUNCTION_FRAME(codeobj_af68f6aaf03a28943d53f3ba909728bb, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }
            assert(cache_frame_af68f6aaf03a28943d53f3ba909728bb_3->m_type_description == NULL);
            frame_af68f6aaf03a28943d53f3ba909728bb_3 = cache_frame_af68f6aaf03a28943d53f3ba909728bb_3;

            // Push the new frame as the currently active one.
            pushFrameStack(frame_af68f6aaf03a28943d53f3ba909728bb_3);

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert(Py_REFCNT(frame_af68f6aaf03a28943d53f3ba909728bb_3) == 2); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
                tmp_next_source_3 = tmp_listcomp$listcomp_1__$0;
                tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
                if (tmp_assign_source_10 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_3;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "ooo";
                        exception_lineno = 34;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_10;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_0);
                tmp_assign_source_11 = tmp_listcomp$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_1_var_k;
                    outline_1_var_k = tmp_assign_source_11;
                    Py_INCREF(outline_1_var_k);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_string_concat_values_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_format_value_1;
                PyObject *tmp_format_spec_1;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
                tmp_append_list_2 = tmp_listcomp$listcomp_1__contraction;
                CHECK_OBJECT(outline_0_var_i);
                tmp_format_value_1 = outline_0_var_i;
                tmp_format_spec_1 = mod_consts[3];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_3 = "ooo";
                    goto try_except_handler_4;
                }
                tmp_string_concat_values_1 = PyTuple_New(4);
                {
                    PyObject *tmp_format_value_2;
                    PyObject *tmp_format_spec_2;
                    PyObject *tmp_format_value_3;
                    PyObject *tmp_format_spec_3;
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_j);
                    tmp_format_value_2 = outline_0_var_j;
                    tmp_format_spec_2 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_3 = "ooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_1_var_k);
                    tmp_format_value_3 = outline_1_var_k;
                    tmp_format_spec_3 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_3 = "ooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
                }
                goto tuple_build_noexception_1;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_1:;
                Py_DECREF(tmp_string_concat_values_1);
                goto try_except_handler_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_1:;
                tmp_append_value_2 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
                Py_DECREF(tmp_string_concat_values_1);
                if (tmp_append_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_3 = "ooo";
                    goto try_except_handler_4;
                }
                assert(PyList_Check(tmp_append_list_2));
                tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_3 = "ooo";
                    goto try_except_handler_4;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_3 = "ooo";
                goto try_except_handler_4;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            tmp_args_element_value_3 = tmp_listcomp$listcomp_1__contraction;
            Py_INCREF(tmp_args_element_value_3);
            goto try_return_handler_4;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            goto frame_return_exit_3;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_3;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION(frame_af68f6aaf03a28943d53f3ba909728bb_3);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_3:;
#if 0
            RESTORE_FRAME_EXCEPTION(frame_af68f6aaf03a28943d53f3ba909728bb_3);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_3;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION(frame_af68f6aaf03a28943d53f3ba909728bb_3);
#endif

            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_af68f6aaf03a28943d53f3ba909728bb_3, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_af68f6aaf03a28943d53f3ba909728bb_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_af68f6aaf03a28943d53f3ba909728bb_3, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_af68f6aaf03a28943d53f3ba909728bb_3,
                type_description_3,
                outline_1_var_k,
                outline_0_var_i,
                outline_0_var_j
            );


            // Release cached frame if used for exception.
            if (frame_af68f6aaf03a28943d53f3ba909728bb_3 == cache_frame_af68f6aaf03a28943d53f3ba909728bb_3) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif

                Py_DECREF(cache_frame_af68f6aaf03a28943d53f3ba909728bb_3);
                cache_frame_af68f6aaf03a28943d53f3ba909728bb_3 = NULL;
            }

            assertFrameObject(frame_af68f6aaf03a28943d53f3ba909728bb_3);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_2:;
            type_description_2 = "oo";
            goto try_except_handler_3;
            skip_nested_handling_1:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            Py_XDECREF(outline_1_var_k);
            outline_1_var_k = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_1_var_k);
            outline_1_var_k = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_2:;
            exception_lineno = 34;
            goto try_except_handler_2;
            outline_result_2:;
            frame_d39e39911d3c2012cc09a14c402cc28c_2->m_frame.f_lineno = 34;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            frame_d39e39911d3c2012cc09a14c402cc28c_2->m_frame.f_lineno = 34;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d39e39911d3c2012cc09a14c402cc28c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_d39e39911d3c2012cc09a14c402cc28c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d39e39911d3c2012cc09a14c402cc28c_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d39e39911d3c2012cc09a14c402cc28c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d39e39911d3c2012cc09a14c402cc28c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d39e39911d3c2012cc09a14c402cc28c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d39e39911d3c2012cc09a14c402cc28c_2,
            type_description_2,
            outline_0_var_i,
            outline_0_var_j
        );


        // Release cached frame if used for exception.
        if (frame_d39e39911d3c2012cc09a14c402cc28c_2 == cache_frame_d39e39911d3c2012cc09a14c402cc28c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d39e39911d3c2012cc09a14c402cc28c_2);
            cache_frame_d39e39911d3c2012cc09a14c402cc28c_2 = NULL;
        }

        assertFrameObject(frame_d39e39911d3c2012cc09a14c402cc28c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_1:;

        goto try_except_handler_1;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_j);
        outline_0_var_j = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_j);
        outline_0_var_j = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 34;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_eeaa341f07891183504cb639cc95e7b7->m_frame.f_lineno = 34;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eeaa341f07891183504cb639cc95e7b7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_eeaa341f07891183504cb639cc95e7b7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eeaa341f07891183504cb639cc95e7b7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eeaa341f07891183504cb639cc95e7b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eeaa341f07891183504cb639cc95e7b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eeaa341f07891183504cb639cc95e7b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eeaa341f07891183504cb639cc95e7b7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_eeaa341f07891183504cb639cc95e7b7 == cache_frame_eeaa341f07891183504cb639cc95e7b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_eeaa341f07891183504cb639cc95e7b7);
        cache_frame_eeaa341f07891183504cb639cc95e7b7 = NULL;
    }

    assertFrameObject(frame_eeaa341f07891183504cb639cc95e7b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_3:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$base_rules$$$function__6_no_double_entries(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_0_var_j = NULL;
    PyObject *outline_1_var_k1 = NULL;
    PyObject *outline_1_var_k2 = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_1 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_c435a0621ca1705820108f77b236d98e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_06f6ee271f1f32223a796ea2f60ae9cd_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_FrameObject *frame_91b8da6f5f269bdbf72e900441feda2b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_91b8da6f5f269bdbf72e900441feda2b_3 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_c435a0621ca1705820108f77b236d98e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c435a0621ca1705820108f77b236d98e)) {
        Py_XDECREF(cache_frame_c435a0621ca1705820108f77b236d98e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c435a0621ca1705820108f77b236d98e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c435a0621ca1705820108f77b236d98e = MAKE_FUNCTION_FRAME(codeobj_c435a0621ca1705820108f77b236d98e, module_src$base_rules, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c435a0621ca1705820108f77b236d98e->m_type_description == NULL);
    frame_c435a0621ca1705820108f77b236d98e = cache_frame_c435a0621ca1705820108f77b236d98e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c435a0621ca1705820108f77b236d98e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c435a0621ca1705820108f77b236d98e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2)) {
            Py_XDECREF(cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2 = MAKE_FUNCTION_FRAME(codeobj_06f6ee271f1f32223a796ea2f60ae9cd, module_src$base_rules, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2->m_type_description == NULL);
        frame_06f6ee271f1f32223a796ea2f60ae9cd_2 = cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_06f6ee271f1f32223a796ea2f60ae9cd_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_06f6ee271f1f32223a796ea2f60ae9cd_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 38;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_4;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_iter_arg_2 == NULL)) {
                tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 38;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_j;
                outline_0_var_j = tmp_assign_source_7;
                Py_INCREF(outline_0_var_j);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_3;
                tmp_iter_arg_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_iter_arg_3 == NULL)) {
                    tmp_iter_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                }

                if (tmp_iter_arg_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
                if (tmp_assign_source_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "oo";
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__$0;
                    tmp_listcomp$listcomp_1__$0 = tmp_assign_source_8;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = PyList_New(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction;
                    tmp_listcomp$listcomp_1__contraction = tmp_assign_source_9;
                    Py_XDECREF(old);
                }

            }
            if (isFrameUnusable(cache_frame_91b8da6f5f269bdbf72e900441feda2b_3)) {
                Py_XDECREF(cache_frame_91b8da6f5f269bdbf72e900441feda2b_3);

#if _DEBUG_REFCOUNTS
                if (cache_frame_91b8da6f5f269bdbf72e900441feda2b_3 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_91b8da6f5f269bdbf72e900441feda2b_3 = MAKE_FUNCTION_FRAME(codeobj_91b8da6f5f269bdbf72e900441feda2b, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }
            assert(cache_frame_91b8da6f5f269bdbf72e900441feda2b_3->m_type_description == NULL);
            frame_91b8da6f5f269bdbf72e900441feda2b_3 = cache_frame_91b8da6f5f269bdbf72e900441feda2b_3;

            // Push the new frame as the currently active one.
            pushFrameStack(frame_91b8da6f5f269bdbf72e900441feda2b_3);

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert(Py_REFCNT(frame_91b8da6f5f269bdbf72e900441feda2b_3) == 2); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
                tmp_next_source_3 = tmp_listcomp$listcomp_1__$0;
                tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
                if (tmp_assign_source_10 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_3;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "oooo";
                        exception_lineno = 38;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_1;
                    tmp_listcomp$listcomp_1__iter_value_1 = tmp_assign_source_10;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_1);
                tmp_assign_source_11 = tmp_listcomp$listcomp_1__iter_value_1;
                {
                    PyObject *old = outline_1_var_k1;
                    outline_1_var_k1 = tmp_assign_source_11;
                    Py_INCREF(outline_1_var_k1);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_iter_arg_4;
                tmp_iter_arg_4 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_iter_arg_4 == NULL)) {
                    tmp_iter_arg_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                }

                if (tmp_iter_arg_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_4);
                if (tmp_assign_source_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction_iter_0;
                    tmp_listcomp$listcomp_1__contraction_iter_0 = tmp_assign_source_12;
                    Py_XDECREF(old);
                }

            }
            loop_start_4:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction_iter_0);
                tmp_next_source_4 = tmp_listcomp$listcomp_1__contraction_iter_0;
                tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_4);
                if (tmp_assign_source_13 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_4;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "oooo";
                        exception_lineno = 38;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_13;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_0);
                tmp_assign_source_14 = tmp_listcomp$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_1_var_k2;
                    outline_1_var_k2 = tmp_assign_source_14;
                    Py_INCREF(outline_1_var_k2);
                    Py_XDECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_1;
                PyObject *tmp_cmp_expr_left_1;
                PyObject *tmp_cmp_expr_right_1;
                CHECK_OBJECT(outline_1_var_k1);
                tmp_cmp_expr_left_1 = outline_1_var_k1;
                CHECK_OBJECT(outline_1_var_k2);
                tmp_cmp_expr_right_1 = outline_1_var_k2;
                tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
                if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
                if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_1;
                } else {
                    goto branch_no_1;
                }
                assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
            }
            branch_yes_1:;
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_string_concat_values_1;
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
                tmp_append_list_2 = tmp_listcomp$listcomp_1__contraction;
                tmp_tuple_element_1 = mod_consts[22];
                tmp_string_concat_values_1 = PyTuple_New(11);
                {
                    PyObject *tmp_format_value_1;
                    PyObject *tmp_format_spec_1;
                    PyObject *tmp_format_value_2;
                    PyObject *tmp_format_spec_2;
                    PyObject *tmp_format_value_3;
                    PyObject *tmp_format_spec_3;
                    PyObject *tmp_format_value_4;
                    PyObject *tmp_format_spec_4;
                    PyObject *tmp_format_value_5;
                    PyObject *tmp_format_spec_5;
                    PyObject *tmp_format_value_6;
                    PyObject *tmp_format_spec_6;
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_i);
                    tmp_format_value_1 = outline_0_var_i;
                    tmp_format_spec_1 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_j);
                    tmp_format_value_2 = outline_0_var_j;
                    tmp_format_spec_2 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_1_var_k1);
                    tmp_format_value_3 = outline_1_var_k1;
                    tmp_format_spec_3 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[23];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_i);
                    tmp_format_value_4 = outline_0_var_i;
                    tmp_format_spec_4 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_j);
                    tmp_format_value_5 = outline_0_var_j;
                    tmp_format_spec_5 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_1_var_k2);
                    tmp_format_value_6 = outline_1_var_k2;
                    tmp_format_spec_6 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[4];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
                }
                goto tuple_build_noexception_1;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_1:;
                Py_DECREF(tmp_string_concat_values_1);
                goto try_except_handler_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_1:;
                tmp_append_value_2 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
                Py_DECREF(tmp_string_concat_values_1);
                if (tmp_append_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
                assert(PyList_Check(tmp_append_list_2));
                tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
            }
            branch_no_1:;
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_3 = "oooo";
                goto try_except_handler_4;
            }
            goto loop_start_4;
            loop_end_4:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction_iter_0);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction_iter_0);
            tmp_listcomp$listcomp_1__contraction_iter_0 = NULL;
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_3 = "oooo";
                goto try_except_handler_4;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            tmp_args_element_value_3 = tmp_listcomp$listcomp_1__contraction;
            Py_INCREF(tmp_args_element_value_3);
            goto try_return_handler_4;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__contraction_iter_0);
            tmp_listcomp$listcomp_1__contraction_iter_0 = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_1);
            tmp_listcomp$listcomp_1__iter_value_1 = NULL;
            goto frame_return_exit_3;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__contraction_iter_0);
            tmp_listcomp$listcomp_1__contraction_iter_0 = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_1);
            tmp_listcomp$listcomp_1__iter_value_1 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_3;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION(frame_91b8da6f5f269bdbf72e900441feda2b_3);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_3:;
#if 0
            RESTORE_FRAME_EXCEPTION(frame_91b8da6f5f269bdbf72e900441feda2b_3);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_3;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION(frame_91b8da6f5f269bdbf72e900441feda2b_3);
#endif

            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_91b8da6f5f269bdbf72e900441feda2b_3, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_91b8da6f5f269bdbf72e900441feda2b_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_91b8da6f5f269bdbf72e900441feda2b_3, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_91b8da6f5f269bdbf72e900441feda2b_3,
                type_description_3,
                outline_1_var_k1,
                outline_1_var_k2,
                outline_0_var_i,
                outline_0_var_j
            );


            // Release cached frame if used for exception.
            if (frame_91b8da6f5f269bdbf72e900441feda2b_3 == cache_frame_91b8da6f5f269bdbf72e900441feda2b_3) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif

                Py_DECREF(cache_frame_91b8da6f5f269bdbf72e900441feda2b_3);
                cache_frame_91b8da6f5f269bdbf72e900441feda2b_3 = NULL;
            }

            assertFrameObject(frame_91b8da6f5f269bdbf72e900441feda2b_3);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_2:;
            type_description_2 = "oo";
            goto try_except_handler_3;
            skip_nested_handling_1:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            Py_XDECREF(outline_1_var_k1);
            outline_1_var_k1 = NULL;
            Py_XDECREF(outline_1_var_k2);
            outline_1_var_k2 = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_1_var_k1);
            outline_1_var_k1 = NULL;
            Py_XDECREF(outline_1_var_k2);
            outline_1_var_k2 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_2:;
            exception_lineno = 38;
            goto try_except_handler_2;
            outline_result_2:;
            frame_06f6ee271f1f32223a796ea2f60ae9cd_2->m_frame.f_lineno = 38;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            frame_06f6ee271f1f32223a796ea2f60ae9cd_2->m_frame.f_lineno = 38;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_06f6ee271f1f32223a796ea2f60ae9cd_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_06f6ee271f1f32223a796ea2f60ae9cd_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_06f6ee271f1f32223a796ea2f60ae9cd_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_06f6ee271f1f32223a796ea2f60ae9cd_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_06f6ee271f1f32223a796ea2f60ae9cd_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_06f6ee271f1f32223a796ea2f60ae9cd_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_06f6ee271f1f32223a796ea2f60ae9cd_2,
            type_description_2,
            outline_0_var_i,
            outline_0_var_j
        );


        // Release cached frame if used for exception.
        if (frame_06f6ee271f1f32223a796ea2f60ae9cd_2 == cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2);
            cache_frame_06f6ee271f1f32223a796ea2f60ae9cd_2 = NULL;
        }

        assertFrameObject(frame_06f6ee271f1f32223a796ea2f60ae9cd_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_1:;

        goto try_except_handler_1;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_j);
        outline_0_var_j = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_j);
        outline_0_var_j = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 38;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_c435a0621ca1705820108f77b236d98e->m_frame.f_lineno = 38;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c435a0621ca1705820108f77b236d98e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c435a0621ca1705820108f77b236d98e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c435a0621ca1705820108f77b236d98e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c435a0621ca1705820108f77b236d98e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c435a0621ca1705820108f77b236d98e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c435a0621ca1705820108f77b236d98e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c435a0621ca1705820108f77b236d98e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_c435a0621ca1705820108f77b236d98e == cache_frame_c435a0621ca1705820108f77b236d98e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c435a0621ca1705820108f77b236d98e);
        cache_frame_c435a0621ca1705820108f77b236d98e = NULL;
    }

    assertFrameObject(frame_c435a0621ca1705820108f77b236d98e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_3:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$base_rules$$$function__7_row(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    PyObject *outline_0_var_j1 = NULL;
    PyObject *outline_0_var_j2 = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_7ea75329e846c6dbb272ec58f31d9297;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_ee7139516d58bc5761d08076666964bb_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_FrameObject *frame_49b2f4d128349e8139eb2c43361637d2_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_49b2f4d128349e8139eb2c43361637d2_3 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_ee7139516d58bc5761d08076666964bb_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_7ea75329e846c6dbb272ec58f31d9297 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ea75329e846c6dbb272ec58f31d9297)) {
        Py_XDECREF(cache_frame_7ea75329e846c6dbb272ec58f31d9297);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ea75329e846c6dbb272ec58f31d9297 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ea75329e846c6dbb272ec58f31d9297 = MAKE_FUNCTION_FRAME(codeobj_7ea75329e846c6dbb272ec58f31d9297, module_src$base_rules, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7ea75329e846c6dbb272ec58f31d9297->m_type_description == NULL);
    frame_7ea75329e846c6dbb272ec58f31d9297 = cache_frame_7ea75329e846c6dbb272ec58f31d9297;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7ea75329e846c6dbb272ec58f31d9297);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7ea75329e846c6dbb272ec58f31d9297) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_ee7139516d58bc5761d08076666964bb_2)) {
            Py_XDECREF(cache_frame_ee7139516d58bc5761d08076666964bb_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ee7139516d58bc5761d08076666964bb_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ee7139516d58bc5761d08076666964bb_2 = MAKE_FUNCTION_FRAME(codeobj_ee7139516d58bc5761d08076666964bb, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ee7139516d58bc5761d08076666964bb_2->m_type_description == NULL);
        frame_ee7139516d58bc5761d08076666964bb_2 = cache_frame_ee7139516d58bc5761d08076666964bb_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ee7139516d58bc5761d08076666964bb_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ee7139516d58bc5761d08076666964bb_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 42;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_j1;
                outline_0_var_j1 = tmp_assign_source_4;
                Py_INCREF(outline_0_var_j1);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_iter_arg_2 == NULL)) {
                tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 42;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_j2;
                outline_0_var_j2 = tmp_assign_source_7;
                Py_INCREF(outline_0_var_j2);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(outline_0_var_j1);
            tmp_cmp_expr_left_1 = outline_0_var_j1;
            CHECK_OBJECT(outline_0_var_j2);
            tmp_cmp_expr_right_1 = outline_0_var_j2;
            tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
            assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_3;
                tmp_iter_arg_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_iter_arg_3 == NULL)) {
                    tmp_iter_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                }

                if (tmp_iter_arg_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
                if (tmp_assign_source_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__$0;
                    tmp_listcomp$listcomp_1__$0 = tmp_assign_source_8;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = PyList_New(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction;
                    tmp_listcomp$listcomp_1__contraction = tmp_assign_source_9;
                    Py_XDECREF(old);
                }

            }
            if (isFrameUnusable(cache_frame_49b2f4d128349e8139eb2c43361637d2_3)) {
                Py_XDECREF(cache_frame_49b2f4d128349e8139eb2c43361637d2_3);

#if _DEBUG_REFCOUNTS
                if (cache_frame_49b2f4d128349e8139eb2c43361637d2_3 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_49b2f4d128349e8139eb2c43361637d2_3 = MAKE_FUNCTION_FRAME(codeobj_49b2f4d128349e8139eb2c43361637d2, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }
            assert(cache_frame_49b2f4d128349e8139eb2c43361637d2_3->m_type_description == NULL);
            frame_49b2f4d128349e8139eb2c43361637d2_3 = cache_frame_49b2f4d128349e8139eb2c43361637d2_3;

            // Push the new frame as the currently active one.
            pushFrameStack(frame_49b2f4d128349e8139eb2c43361637d2_3);

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert(Py_REFCNT(frame_49b2f4d128349e8139eb2c43361637d2_3) == 2); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
                tmp_next_source_3 = tmp_listcomp$listcomp_1__$0;
                tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
                if (tmp_assign_source_10 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_3;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "oooo";
                        exception_lineno = 42;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_10;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_0);
                tmp_assign_source_11 = tmp_listcomp$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_1_var_k;
                    outline_1_var_k = tmp_assign_source_11;
                    Py_INCREF(outline_1_var_k);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_string_concat_values_1;
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
                tmp_append_list_2 = tmp_listcomp$listcomp_1__contraction;
                tmp_tuple_element_1 = mod_consts[22];
                tmp_string_concat_values_1 = PyTuple_New(11);
                {
                    PyObject *tmp_format_value_1;
                    PyObject *tmp_format_spec_1;
                    PyObject *tmp_format_value_2;
                    PyObject *tmp_format_spec_2;
                    PyObject *tmp_format_value_3;
                    PyObject *tmp_format_spec_3;
                    PyObject *tmp_format_value_4;
                    PyObject *tmp_format_spec_4;
                    PyObject *tmp_format_value_5;
                    PyObject *tmp_format_spec_5;
                    PyObject *tmp_format_value_6;
                    PyObject *tmp_format_spec_6;
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                    CHECK_OBJECT(par_i);
                    tmp_format_value_1 = par_i;
                    tmp_format_spec_1 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_j1);
                    tmp_format_value_2 = outline_0_var_j1;
                    tmp_format_spec_2 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_1_var_k);
                    tmp_format_value_3 = outline_1_var_k;
                    tmp_format_spec_3 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[23];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
                    CHECK_OBJECT(par_i);
                    tmp_format_value_4 = par_i;
                    tmp_format_spec_4 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_j2);
                    tmp_format_value_5 = outline_0_var_j2;
                    tmp_format_spec_5 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_1_var_k);
                    tmp_format_value_6 = outline_1_var_k;
                    tmp_format_spec_6 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[4];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
                }
                goto tuple_build_noexception_1;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_1:;
                Py_DECREF(tmp_string_concat_values_1);
                goto try_except_handler_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_1:;
                tmp_append_value_2 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
                Py_DECREF(tmp_string_concat_values_1);
                if (tmp_append_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
                assert(PyList_Check(tmp_append_list_2));
                tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_3 = "oooo";
                goto try_except_handler_4;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            tmp_args_element_value_3 = tmp_listcomp$listcomp_1__contraction;
            Py_INCREF(tmp_args_element_value_3);
            goto try_return_handler_4;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            goto frame_return_exit_3;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_3;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION(frame_49b2f4d128349e8139eb2c43361637d2_3);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_3:;
#if 0
            RESTORE_FRAME_EXCEPTION(frame_49b2f4d128349e8139eb2c43361637d2_3);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_3;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION(frame_49b2f4d128349e8139eb2c43361637d2_3);
#endif

            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_49b2f4d128349e8139eb2c43361637d2_3, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_49b2f4d128349e8139eb2c43361637d2_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_49b2f4d128349e8139eb2c43361637d2_3, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_49b2f4d128349e8139eb2c43361637d2_3,
                type_description_3,
                outline_1_var_k,
                par_i,
                outline_0_var_j1,
                outline_0_var_j2
            );


            // Release cached frame if used for exception.
            if (frame_49b2f4d128349e8139eb2c43361637d2_3 == cache_frame_49b2f4d128349e8139eb2c43361637d2_3) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif

                Py_DECREF(cache_frame_49b2f4d128349e8139eb2c43361637d2_3);
                cache_frame_49b2f4d128349e8139eb2c43361637d2_3 = NULL;
            }

            assertFrameObject(frame_49b2f4d128349e8139eb2c43361637d2_3);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_2:;
            type_description_2 = "ooo";
            goto try_except_handler_3;
            skip_nested_handling_1:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            Py_XDECREF(outline_1_var_k);
            outline_1_var_k = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_1_var_k);
            outline_1_var_k = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_2:;
            exception_lineno = 42;
            goto try_except_handler_2;
            outline_result_2:;
            frame_ee7139516d58bc5761d08076666964bb_2->m_frame.f_lineno = 42;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            frame_ee7139516d58bc5761d08076666964bb_2->m_frame.f_lineno = 42;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_2 = "ooo";
            goto try_except_handler_2;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_2 = "ooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ee7139516d58bc5761d08076666964bb_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_ee7139516d58bc5761d08076666964bb_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ee7139516d58bc5761d08076666964bb_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ee7139516d58bc5761d08076666964bb_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ee7139516d58bc5761d08076666964bb_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ee7139516d58bc5761d08076666964bb_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ee7139516d58bc5761d08076666964bb_2,
            type_description_2,
            outline_0_var_j1,
            outline_0_var_j2,
            par_i
        );


        // Release cached frame if used for exception.
        if (frame_ee7139516d58bc5761d08076666964bb_2 == cache_frame_ee7139516d58bc5761d08076666964bb_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ee7139516d58bc5761d08076666964bb_2);
            cache_frame_ee7139516d58bc5761d08076666964bb_2 = NULL;
        }

        assertFrameObject(frame_ee7139516d58bc5761d08076666964bb_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_1;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_j1);
        outline_0_var_j1 = NULL;
        Py_XDECREF(outline_0_var_j2);
        outline_0_var_j2 = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_j1);
        outline_0_var_j1 = NULL;
        Py_XDECREF(outline_0_var_j2);
        outline_0_var_j2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 42;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_7ea75329e846c6dbb272ec58f31d9297->m_frame.f_lineno = 42;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ea75329e846c6dbb272ec58f31d9297);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ea75329e846c6dbb272ec58f31d9297);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ea75329e846c6dbb272ec58f31d9297);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ea75329e846c6dbb272ec58f31d9297, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ea75329e846c6dbb272ec58f31d9297->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ea75329e846c6dbb272ec58f31d9297, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ea75329e846c6dbb272ec58f31d9297,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_7ea75329e846c6dbb272ec58f31d9297 == cache_frame_7ea75329e846c6dbb272ec58f31d9297) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7ea75329e846c6dbb272ec58f31d9297);
        cache_frame_7ea75329e846c6dbb272ec58f31d9297 = NULL;
    }

    assertFrameObject(frame_7ea75329e846c6dbb272ec58f31d9297);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_3:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$base_rules$$$function__8_column(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_j = python_pars[0];
    PyObject *outline_0_var_i1 = NULL;
    PyObject *outline_0_var_i2 = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_d733eff3d69b4be3c7165a7aca232302;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_a77c3908185c2077ec59fba9ad141e41_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_FrameObject *frame_c55d12fd717b97a75e5beafd0cd5d602_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_a77c3908185c2077ec59fba9ad141e41_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_d733eff3d69b4be3c7165a7aca232302 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d733eff3d69b4be3c7165a7aca232302)) {
        Py_XDECREF(cache_frame_d733eff3d69b4be3c7165a7aca232302);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d733eff3d69b4be3c7165a7aca232302 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d733eff3d69b4be3c7165a7aca232302 = MAKE_FUNCTION_FRAME(codeobj_d733eff3d69b4be3c7165a7aca232302, module_src$base_rules, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d733eff3d69b4be3c7165a7aca232302->m_type_description == NULL);
    frame_d733eff3d69b4be3c7165a7aca232302 = cache_frame_d733eff3d69b4be3c7165a7aca232302;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d733eff3d69b4be3c7165a7aca232302);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d733eff3d69b4be3c7165a7aca232302) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_a77c3908185c2077ec59fba9ad141e41_2)) {
            Py_XDECREF(cache_frame_a77c3908185c2077ec59fba9ad141e41_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a77c3908185c2077ec59fba9ad141e41_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a77c3908185c2077ec59fba9ad141e41_2 = MAKE_FUNCTION_FRAME(codeobj_a77c3908185c2077ec59fba9ad141e41, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a77c3908185c2077ec59fba9ad141e41_2->m_type_description == NULL);
        frame_a77c3908185c2077ec59fba9ad141e41_2 = cache_frame_a77c3908185c2077ec59fba9ad141e41_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a77c3908185c2077ec59fba9ad141e41_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a77c3908185c2077ec59fba9ad141e41_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 46;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_i1;
                outline_0_var_i1 = tmp_assign_source_4;
                Py_INCREF(outline_0_var_i1);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_iter_arg_2 == NULL)) {
                tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 46;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i2;
                outline_0_var_i2 = tmp_assign_source_7;
                Py_INCREF(outline_0_var_i2);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(outline_0_var_i1);
            tmp_cmp_expr_left_1 = outline_0_var_i1;
            CHECK_OBJECT(outline_0_var_i2);
            tmp_cmp_expr_right_1 = outline_0_var_i2;
            tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
            assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_3;
                tmp_iter_arg_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_iter_arg_3 == NULL)) {
                    tmp_iter_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                }

                if (tmp_iter_arg_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
                if (tmp_assign_source_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__$0;
                    tmp_listcomp$listcomp_1__$0 = tmp_assign_source_8;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = PyList_New(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction;
                    tmp_listcomp$listcomp_1__contraction = tmp_assign_source_9;
                    Py_XDECREF(old);
                }

            }
            if (isFrameUnusable(cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3)) {
                Py_XDECREF(cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3);

#if _DEBUG_REFCOUNTS
                if (cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3 = MAKE_FUNCTION_FRAME(codeobj_c55d12fd717b97a75e5beafd0cd5d602, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }
            assert(cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3->m_type_description == NULL);
            frame_c55d12fd717b97a75e5beafd0cd5d602_3 = cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3;

            // Push the new frame as the currently active one.
            pushFrameStack(frame_c55d12fd717b97a75e5beafd0cd5d602_3);

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert(Py_REFCNT(frame_c55d12fd717b97a75e5beafd0cd5d602_3) == 2); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
                tmp_next_source_3 = tmp_listcomp$listcomp_1__$0;
                tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
                if (tmp_assign_source_10 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_3;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "oooo";
                        exception_lineno = 46;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_10;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_0);
                tmp_assign_source_11 = tmp_listcomp$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_1_var_k;
                    outline_1_var_k = tmp_assign_source_11;
                    Py_INCREF(outline_1_var_k);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_string_concat_values_1;
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
                tmp_append_list_2 = tmp_listcomp$listcomp_1__contraction;
                tmp_tuple_element_1 = mod_consts[22];
                tmp_string_concat_values_1 = PyTuple_New(11);
                {
                    PyObject *tmp_format_value_1;
                    PyObject *tmp_format_spec_1;
                    PyObject *tmp_format_value_2;
                    PyObject *tmp_format_spec_2;
                    PyObject *tmp_format_value_3;
                    PyObject *tmp_format_spec_3;
                    PyObject *tmp_format_value_4;
                    PyObject *tmp_format_spec_4;
                    PyObject *tmp_format_value_5;
                    PyObject *tmp_format_spec_5;
                    PyObject *tmp_format_value_6;
                    PyObject *tmp_format_spec_6;
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_i1);
                    tmp_format_value_1 = outline_0_var_i1;
                    tmp_format_spec_1 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                    CHECK_OBJECT(par_j);
                    tmp_format_value_2 = par_j;
                    tmp_format_spec_2 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_1_var_k);
                    tmp_format_value_3 = outline_1_var_k;
                    tmp_format_spec_3 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[23];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_0_var_i2);
                    tmp_format_value_4 = outline_0_var_i2;
                    tmp_format_spec_4 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
                    CHECK_OBJECT(par_j);
                    tmp_format_value_5 = par_j;
                    tmp_format_spec_5 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
                    CHECK_OBJECT(outline_1_var_k);
                    tmp_format_value_6 = outline_1_var_k;
                    tmp_format_spec_6 = mod_consts[3];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_3 = "oooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
                    tmp_tuple_element_1 = mod_consts[4];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
                }
                goto tuple_build_noexception_1;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_1:;
                Py_DECREF(tmp_string_concat_values_1);
                goto try_except_handler_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_1:;
                tmp_append_value_2 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
                Py_DECREF(tmp_string_concat_values_1);
                if (tmp_append_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
                assert(PyList_Check(tmp_append_list_2));
                tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_3 = "oooo";
                    goto try_except_handler_4;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_3 = "oooo";
                goto try_except_handler_4;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            tmp_args_element_value_3 = tmp_listcomp$listcomp_1__contraction;
            Py_INCREF(tmp_args_element_value_3);
            goto try_return_handler_4;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            goto frame_return_exit_3;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_3;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION(frame_c55d12fd717b97a75e5beafd0cd5d602_3);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_3:;
#if 0
            RESTORE_FRAME_EXCEPTION(frame_c55d12fd717b97a75e5beafd0cd5d602_3);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_3;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION(frame_c55d12fd717b97a75e5beafd0cd5d602_3);
#endif

            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_c55d12fd717b97a75e5beafd0cd5d602_3, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_c55d12fd717b97a75e5beafd0cd5d602_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_c55d12fd717b97a75e5beafd0cd5d602_3, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_c55d12fd717b97a75e5beafd0cd5d602_3,
                type_description_3,
                outline_1_var_k,
                outline_0_var_i1,
                par_j,
                outline_0_var_i2
            );


            // Release cached frame if used for exception.
            if (frame_c55d12fd717b97a75e5beafd0cd5d602_3 == cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif

                Py_DECREF(cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3);
                cache_frame_c55d12fd717b97a75e5beafd0cd5d602_3 = NULL;
            }

            assertFrameObject(frame_c55d12fd717b97a75e5beafd0cd5d602_3);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_2:;
            type_description_2 = "ooo";
            goto try_except_handler_3;
            skip_nested_handling_1:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            Py_XDECREF(outline_1_var_k);
            outline_1_var_k = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_1_var_k);
            outline_1_var_k = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_2:;
            exception_lineno = 46;
            goto try_except_handler_2;
            outline_result_2:;
            frame_a77c3908185c2077ec59fba9ad141e41_2->m_frame.f_lineno = 46;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            frame_a77c3908185c2077ec59fba9ad141e41_2->m_frame.f_lineno = 46;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "ooo";
            goto try_except_handler_2;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "ooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a77c3908185c2077ec59fba9ad141e41_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_a77c3908185c2077ec59fba9ad141e41_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a77c3908185c2077ec59fba9ad141e41_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a77c3908185c2077ec59fba9ad141e41_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a77c3908185c2077ec59fba9ad141e41_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a77c3908185c2077ec59fba9ad141e41_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a77c3908185c2077ec59fba9ad141e41_2,
            type_description_2,
            outline_0_var_i1,
            outline_0_var_i2,
            par_j
        );


        // Release cached frame if used for exception.
        if (frame_a77c3908185c2077ec59fba9ad141e41_2 == cache_frame_a77c3908185c2077ec59fba9ad141e41_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a77c3908185c2077ec59fba9ad141e41_2);
            cache_frame_a77c3908185c2077ec59fba9ad141e41_2 = NULL;
        }

        assertFrameObject(frame_a77c3908185c2077ec59fba9ad141e41_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_1;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_i1);
        outline_0_var_i1 = NULL;
        Py_XDECREF(outline_0_var_i2);
        outline_0_var_i2 = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i1);
        outline_0_var_i1 = NULL;
        Py_XDECREF(outline_0_var_i2);
        outline_0_var_i2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 46;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_d733eff3d69b4be3c7165a7aca232302->m_frame.f_lineno = 46;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d733eff3d69b4be3c7165a7aca232302);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d733eff3d69b4be3c7165a7aca232302);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d733eff3d69b4be3c7165a7aca232302);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d733eff3d69b4be3c7165a7aca232302, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d733eff3d69b4be3c7165a7aca232302->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d733eff3d69b4be3c7165a7aca232302, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d733eff3d69b4be3c7165a7aca232302,
        type_description_1,
        par_j
    );


    // Release cached frame if used for exception.
    if (frame_d733eff3d69b4be3c7165a7aca232302 == cache_frame_d733eff3d69b4be3c7165a7aca232302) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d733eff3d69b4be3c7165a7aca232302);
        cache_frame_d733eff3d69b4be3c7165a7aca232302 = NULL;
    }

    assertFrameObject(frame_d733eff3d69b4be3c7165a7aca232302);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_3:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_j);
    Py_DECREF(par_j);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_j);
    Py_DECREF(par_j);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$base_rules$$$function__9_area(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *var_i_start = NULL;
    PyObject *var_j_start = NULL;
    PyObject *var_iv = NULL;
    PyObject *var_jv = NULL;
    PyObject *var_positions = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_0_var_j = NULL;
    PyObject *outline_1_var_p1 = NULL;
    PyObject *outline_1_var_p2 = NULL;
    PyObject *outline_2_var_k = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_dc3f89b8de4b7e011218095579ef2a9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_59b68b9c97b4400e29f193bf7313878c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_59b68b9c97b4400e29f193bf7313878c_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_868431120294219ef11d9fe12be17b3c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    struct Nuitka_FrameObject *frame_fc60bbe620f62587e709a1732511fb8d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_fc60bbe620f62587e709a1732511fb8d_4 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_868431120294219ef11d9fe12be17b3c_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_dc3f89b8de4b7e011218095579ef2a9b = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dc3f89b8de4b7e011218095579ef2a9b)) {
        Py_XDECREF(cache_frame_dc3f89b8de4b7e011218095579ef2a9b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc3f89b8de4b7e011218095579ef2a9b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc3f89b8de4b7e011218095579ef2a9b = MAKE_FUNCTION_FRAME(codeobj_dc3f89b8de4b7e011218095579ef2a9b, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dc3f89b8de4b7e011218095579ef2a9b->m_type_description == NULL);
    frame_dc3f89b8de4b7e011218095579ef2a9b = cache_frame_dc3f89b8de4b7e011218095579ef2a9b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dc3f89b8de4b7e011218095579ef2a9b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dc3f89b8de4b7e011218095579ef2a9b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(par_a);
        tmp_left_value_4 = par_a;
        tmp_right_value_1 = mod_consts[5];
        tmp_left_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_4, tmp_right_value_1);
        if (tmp_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_right_value_2 == NULL)) {
            tmp_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_3);

            exception_lineno = 67;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_2);
        Py_DECREF(tmp_left_value_3);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_right_value_3 == NULL)) {
            tmp_right_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 67;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_3);
        Py_DECREF(tmp_left_value_2);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_4 = mod_consts[5];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_4);
        Py_DECREF(tmp_left_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_i_start == NULL);
        var_i_start = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_5;
        PyObject *tmp_right_value_6;
        PyObject *tmp_right_value_7;
        PyObject *tmp_right_value_8;
        CHECK_OBJECT(par_a);
        tmp_left_value_8 = par_a;
        tmp_right_value_5 = mod_consts[5];
        tmp_left_value_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_5);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_6 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_right_value_6 == NULL)) {
            tmp_right_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_right_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_6 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_6);
        Py_DECREF(tmp_left_value_7);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_7 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_right_value_7 == NULL)) {
            tmp_right_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_right_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_6);

            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_6, tmp_right_value_7);
        Py_DECREF(tmp_left_value_6);
        if (tmp_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_8 = mod_consts[5];
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_5, tmp_right_value_8);
        Py_DECREF(tmp_left_value_5);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_j_start == NULL);
        var_j_start = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        CHECK_OBJECT(var_i_start);
        tmp_xrange_low_1 = var_i_start;
        CHECK_OBJECT(var_i_start);
        tmp_left_value_9 = var_i_start;
        tmp_right_value_9 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_right_value_9 == NULL)) {
            tmp_right_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_9);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_iv == NULL);
        var_iv = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        CHECK_OBJECT(var_j_start);
        tmp_xrange_low_2 = var_j_start;
        CHECK_OBJECT(var_j_start);
        tmp_left_value_10 = var_j_start;
        tmp_right_value_10 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_right_value_10 == NULL)) {
            tmp_right_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_10);
        if (tmp_xrange_high_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BUILTIN_XRANGE2(tmp_xrange_low_2, tmp_xrange_high_2);
        Py_DECREF(tmp_xrange_high_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_jv == NULL);
        var_jv = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_iv);
            tmp_iter_arg_1 = var_iv;
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_59b68b9c97b4400e29f193bf7313878c_2)) {
            Py_XDECREF(cache_frame_59b68b9c97b4400e29f193bf7313878c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_59b68b9c97b4400e29f193bf7313878c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_59b68b9c97b4400e29f193bf7313878c_2 = MAKE_FUNCTION_FRAME(codeobj_59b68b9c97b4400e29f193bf7313878c, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_59b68b9c97b4400e29f193bf7313878c_2->m_type_description == NULL);
        frame_59b68b9c97b4400e29f193bf7313878c_2 = cache_frame_59b68b9c97b4400e29f193bf7313878c_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_59b68b9c97b4400e29f193bf7313878c_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_59b68b9c97b4400e29f193bf7313878c_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 72;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_9;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            if (var_jv == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_iter_arg_2 = var_jv;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 72;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_j;
                outline_0_var_j = tmp_assign_source_12;
                Py_INCREF(outline_0_var_j);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_left_value_11;
            PyObject *tmp_right_value_11;
            PyObject *tmp_format_spec_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (outline_0_var_i == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_left_value_11 = outline_0_var_i;
            tmp_right_value_11 = mod_consts[5];
            tmp_subscript_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_11, tmp_right_value_11);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_format_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_string_concat_values_1 = PyTuple_New(2);
            {
                PyObject *tmp_format_value_2;
                PyObject *tmp_format_spec_2;
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(outline_0_var_j);
                tmp_format_value_2 = outline_0_var_j;
                tmp_format_spec_2 = mod_consts[3];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_string_concat_values_1);
            goto try_except_handler_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_append_value_1 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_5);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_59b68b9c97b4400e29f193bf7313878c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_59b68b9c97b4400e29f193bf7313878c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_59b68b9c97b4400e29f193bf7313878c_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_59b68b9c97b4400e29f193bf7313878c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_59b68b9c97b4400e29f193bf7313878c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_59b68b9c97b4400e29f193bf7313878c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_59b68b9c97b4400e29f193bf7313878c_2,
            type_description_2,
            outline_0_var_i,
            outline_0_var_j,
            var_jv
        );


        // Release cached frame if used for exception.
        if (frame_59b68b9c97b4400e29f193bf7313878c_2 == cache_frame_59b68b9c97b4400e29f193bf7313878c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_59b68b9c97b4400e29f193bf7313878c_2);
            cache_frame_59b68b9c97b4400e29f193bf7313878c_2 = NULL;
        }

        assertFrameObject(frame_59b68b9c97b4400e29f193bf7313878c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_j);
        outline_0_var_j = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_j);
        outline_0_var_j = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 72;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_positions == NULL);
        var_positions = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_positions);
            tmp_iter_arg_3 = var_positions;
            tmp_assign_source_13 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_14;
        }
        if (isFrameUnusable(cache_frame_868431120294219ef11d9fe12be17b3c_3)) {
            Py_XDECREF(cache_frame_868431120294219ef11d9fe12be17b3c_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_868431120294219ef11d9fe12be17b3c_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_868431120294219ef11d9fe12be17b3c_3 = MAKE_FUNCTION_FRAME(codeobj_868431120294219ef11d9fe12be17b3c, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_868431120294219ef11d9fe12be17b3c_3->m_type_description == NULL);
        frame_868431120294219ef11d9fe12be17b3c_3 = cache_frame_868431120294219ef11d9fe12be17b3c_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_868431120294219ef11d9fe12be17b3c_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_868431120294219ef11d9fe12be17b3c_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_15 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 74;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_1;
                tmp_listcomp_2__iter_value_1 = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_1);
            tmp_assign_source_16 = tmp_listcomp_2__iter_value_1;
            {
                PyObject *old = outline_1_var_p1;
                outline_1_var_p1 = tmp_assign_source_16;
                Py_INCREF(outline_1_var_p1);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_4;
            if (var_positions == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 74;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }

            tmp_iter_arg_4 = var_positions;
            tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp_2__contraction_iter_0;
                tmp_listcomp_2__contraction_iter_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_2__contraction_iter_0);
            tmp_next_source_4 = tmp_listcomp_2__contraction_iter_0;
            tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_18 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 74;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_19 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_p2;
                outline_1_var_p2 = tmp_assign_source_19;
                Py_INCREF(outline_1_var_p2);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(outline_1_var_p1);
            tmp_cmp_expr_left_1 = outline_1_var_p1;
            CHECK_OBJECT(outline_1_var_p2);
            tmp_cmp_expr_right_1 = outline_1_var_p2;
            tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
            assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_iter_arg_5;
                tmp_iter_arg_5 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_iter_arg_5 == NULL)) {
                    tmp_iter_arg_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                }

                if (tmp_iter_arg_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "ooo";
                    goto try_except_handler_6;
                }
                tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_5);
                if (tmp_assign_source_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "ooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__$0;
                    tmp_listcomp$listcomp_1__$0 = tmp_assign_source_20;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = PyList_New(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction;
                    tmp_listcomp$listcomp_1__contraction = tmp_assign_source_21;
                    Py_XDECREF(old);
                }

            }
            if (isFrameUnusable(cache_frame_fc60bbe620f62587e709a1732511fb8d_4)) {
                Py_XDECREF(cache_frame_fc60bbe620f62587e709a1732511fb8d_4);

#if _DEBUG_REFCOUNTS
                if (cache_frame_fc60bbe620f62587e709a1732511fb8d_4 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_fc60bbe620f62587e709a1732511fb8d_4 = MAKE_FUNCTION_FRAME(codeobj_fc60bbe620f62587e709a1732511fb8d, module_src$base_rules, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }
            assert(cache_frame_fc60bbe620f62587e709a1732511fb8d_4->m_type_description == NULL);
            frame_fc60bbe620f62587e709a1732511fb8d_4 = cache_frame_fc60bbe620f62587e709a1732511fb8d_4;

            // Push the new frame as the currently active one.
            pushFrameStack(frame_fc60bbe620f62587e709a1732511fb8d_4);

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert(Py_REFCNT(frame_fc60bbe620f62587e709a1732511fb8d_4) == 2); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_5:;
            {
                PyObject *tmp_next_source_5;
                PyObject *tmp_assign_source_22;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
                tmp_next_source_5 = tmp_listcomp$listcomp_1__$0;
                tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_5);
                if (tmp_assign_source_22 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_5;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "ooo";
                        exception_lineno = 74;
                        goto try_except_handler_7;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_22;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_23;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_0);
                tmp_assign_source_23 = tmp_listcomp$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_2_var_k;
                    outline_2_var_k = tmp_assign_source_23;
                    Py_INCREF(outline_2_var_k);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_3;
                PyObject *tmp_append_value_3;
                PyObject *tmp_string_concat_values_2;
                PyObject *tmp_tuple_element_2;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
                tmp_append_list_3 = tmp_listcomp$listcomp_1__contraction;
                tmp_tuple_element_2 = mod_consts[22];
                tmp_string_concat_values_2 = PyTuple_New(9);
                {
                    PyObject *tmp_format_value_3;
                    PyObject *tmp_format_spec_3;
                    PyObject *tmp_format_value_4;
                    PyObject *tmp_format_spec_4;
                    PyObject *tmp_format_value_5;
                    PyObject *tmp_format_spec_5;
                    PyObject *tmp_format_value_6;
                    PyObject *tmp_format_spec_6;
                    PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                    CHECK_OBJECT(outline_1_var_p1);
                    tmp_format_value_3 = outline_1_var_p1;
                    tmp_format_spec_3 = mod_consts[3];
                    tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                    if (tmp_tuple_element_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_3 = "ooo";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
                    CHECK_OBJECT(outline_2_var_k);
                    tmp_format_value_4 = outline_2_var_k;
                    tmp_format_spec_4 = mod_consts[3];
                    tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
                    if (tmp_tuple_element_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_3 = "ooo";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[23];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
                    CHECK_OBJECT(outline_1_var_p2);
                    tmp_format_value_5 = outline_1_var_p2;
                    tmp_format_spec_5 = mod_consts[3];
                    tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
                    if (tmp_tuple_element_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_3 = "ooo";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[21];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_2, 6, tmp_tuple_element_2);
                    CHECK_OBJECT(outline_2_var_k);
                    tmp_format_value_6 = outline_2_var_k;
                    tmp_format_spec_6 = mod_consts[3];
                    tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
                    if (tmp_tuple_element_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_3 = "ooo";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_2, 7, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[4];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_2, 8, tmp_tuple_element_2);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_string_concat_values_2);
                goto try_except_handler_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_append_value_3 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_2);
                Py_DECREF(tmp_string_concat_values_2);
                if (tmp_append_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_3 = "ooo";
                    goto try_except_handler_7;
                }
                assert(PyList_Check(tmp_append_list_3));
                tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_3 = "ooo";
                    goto try_except_handler_7;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_3 = "ooo";
                goto try_except_handler_7;
            }
            goto loop_start_5;
            loop_end_5:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            tmp_args_element_value_3 = tmp_listcomp$listcomp_1__contraction;
            Py_INCREF(tmp_args_element_value_3);
            goto try_return_handler_7;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_7:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            goto frame_return_exit_4;
            // Exception handler code:
            try_except_handler_7:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_4;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION(frame_fc60bbe620f62587e709a1732511fb8d_4);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;

            frame_return_exit_4:;
#if 0
            RESTORE_FRAME_EXCEPTION(frame_fc60bbe620f62587e709a1732511fb8d_4);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_6;

            frame_exception_exit_4:;

#if 0
            RESTORE_FRAME_EXCEPTION(frame_fc60bbe620f62587e709a1732511fb8d_4);
#endif

            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_fc60bbe620f62587e709a1732511fb8d_4, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_fc60bbe620f62587e709a1732511fb8d_4->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_fc60bbe620f62587e709a1732511fb8d_4, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_fc60bbe620f62587e709a1732511fb8d_4,
                type_description_3,
                outline_2_var_k,
                outline_1_var_p1,
                outline_1_var_p2
            );


            // Release cached frame if used for exception.
            if (frame_fc60bbe620f62587e709a1732511fb8d_4 == cache_frame_fc60bbe620f62587e709a1732511fb8d_4) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif

                Py_DECREF(cache_frame_fc60bbe620f62587e709a1732511fb8d_4);
                cache_frame_fc60bbe620f62587e709a1732511fb8d_4 = NULL;
            }

            assertFrameObject(frame_fc60bbe620f62587e709a1732511fb8d_4);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_3;

            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_3:;
            type_description_2 = "ooo";
            goto try_except_handler_6;
            skip_nested_handling_2:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_6:;
            Py_XDECREF(outline_2_var_k);
            outline_2_var_k = NULL;
            goto outline_result_3;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_2_var_k);
            outline_2_var_k = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_3;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_3:;
            exception_lineno = 74;
            goto try_except_handler_5;
            outline_result_3:;
            frame_868431120294219ef11d9fe12be17b3c_3->m_frame.f_lineno = 74;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            frame_868431120294219ef11d9fe12be17b3c_3->m_frame.f_lineno = 74;
            tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_2__contraction_iter_0);
        Py_DECREF(tmp_listcomp_2__contraction_iter_0);
        tmp_listcomp_2__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_args_element_value_1 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_2__contraction_iter_0);
        tmp_listcomp_2__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_1);
        tmp_listcomp_2__iter_value_1 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_2__contraction_iter_0);
        tmp_listcomp_2__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_1);
        tmp_listcomp_2__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_868431120294219ef11d9fe12be17b3c_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_868431120294219ef11d9fe12be17b3c_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_868431120294219ef11d9fe12be17b3c_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_868431120294219ef11d9fe12be17b3c_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_868431120294219ef11d9fe12be17b3c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_868431120294219ef11d9fe12be17b3c_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_868431120294219ef11d9fe12be17b3c_3,
            type_description_2,
            outline_1_var_p1,
            outline_1_var_p2,
            var_positions
        );


        // Release cached frame if used for exception.
        if (frame_868431120294219ef11d9fe12be17b3c_3 == cache_frame_868431120294219ef11d9fe12be17b3c_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_868431120294219ef11d9fe12be17b3c_3);
            cache_frame_868431120294219ef11d9fe12be17b3c_3 = NULL;
        }

        assertFrameObject(frame_868431120294219ef11d9fe12be17b3c_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_2:;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_p1);
        outline_1_var_p1 = NULL;
        Py_XDECREF(outline_1_var_p2);
        outline_1_var_p2 = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_p1);
        outline_1_var_p1 = NULL;
        Py_XDECREF(outline_1_var_p2);
        outline_1_var_p2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 74;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_dc3f89b8de4b7e011218095579ef2a9b->m_frame.f_lineno = 74;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dc3f89b8de4b7e011218095579ef2a9b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dc3f89b8de4b7e011218095579ef2a9b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dc3f89b8de4b7e011218095579ef2a9b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc3f89b8de4b7e011218095579ef2a9b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc3f89b8de4b7e011218095579ef2a9b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc3f89b8de4b7e011218095579ef2a9b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc3f89b8de4b7e011218095579ef2a9b,
        type_description_1,
        par_a,
        var_i_start,
        var_j_start,
        var_iv,
        var_jv,
        var_positions
    );


    // Release cached frame if used for exception.
    if (frame_dc3f89b8de4b7e011218095579ef2a9b == cache_frame_dc3f89b8de4b7e011218095579ef2a9b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dc3f89b8de4b7e011218095579ef2a9b);
        cache_frame_dc3f89b8de4b7e011218095579ef2a9b = NULL;
    }

    assertFrameObject(frame_dc3f89b8de4b7e011218095579ef2a9b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_i_start);
    Py_DECREF(var_i_start);
    var_i_start = NULL;
    CHECK_OBJECT(var_j_start);
    Py_DECREF(var_j_start);
    var_j_start = NULL;
    CHECK_OBJECT(var_iv);
    Py_DECREF(var_iv);
    var_iv = NULL;
    Py_XDECREF(var_jv);
    var_jv = NULL;
    Py_XDECREF(var_positions);
    var_positions = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_i_start);
    var_i_start = NULL;
    Py_XDECREF(var_j_start);
    var_j_start = NULL;
    Py_XDECREF(var_iv);
    var_iv = NULL;
    Py_XDECREF(var_jv);
    var_jv = NULL;
    Py_XDECREF(var_positions);
    var_positions = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__1_and_clause() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__1_and_clause,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b2f859e71ebb32a2cfaf05d0a72c2717,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__2_or_clause() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__2_or_clause,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_802ccc640cd275fbd228b986ed9955c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__3_grouped() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__3_grouped,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_652f238a576d412204025b6caf15074f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__4_get_base_rules() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__4_get_base_rules,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b07754d07f2a70ccabdf322118b25e92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__5_number_everywhere() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__5_number_everywhere,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eeaa341f07891183504cb639cc95e7b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__6_no_double_entries() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__6_no_double_entries,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c435a0621ca1705820108f77b236d98e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__7_row() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__7_row,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ea75329e846c6dbb272ec58f31d9297,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__8_column() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__8_column,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d733eff3d69b4be3c7165a7aca232302,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$base_rules$$$function__9_area() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$base_rules$$$function__9_area,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc3f89b8de4b7e011218095579ef2a9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$base_rules,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_src$base_rules[] = {
    impl_src$base_rules$$$function__1_and_clause,
    impl_src$base_rules$$$function__2_or_clause,
    impl_src$base_rules$$$function__3_grouped,
    impl_src$base_rules$$$function__4_get_base_rules,
    impl_src$base_rules$$$function__5_number_everywhere,
    impl_src$base_rules$$$function__6_no_double_entries,
    impl_src$base_rules$$$function__7_row,
    impl_src$base_rules$$$function__8_column,
    impl_src$base_rules$$$function__9_area,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_src$base_rules;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_src$base_rules) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_src$base_rules[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_src$base_rules,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_src$base_rules(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("src.base_rules");

    // Store the module for future use.
    module_src$base_rules = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("src.base_rules: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("src.base_rules: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("src.base_rules: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsrc$base_rules\n");

    moduledict_src$base_rules = MODULE_DICT(module_src$base_rules);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_src$base_rules,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_src$base_rules,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[3]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_src$base_rules,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_src$base_rules,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_src$base_rules,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_src$base_rules);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_src$base_rules);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_dcedf8861ccd6dfc62dca729cac77bce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_dcedf8861ccd6dfc62dca729cac77bce = MAKE_MODULE_FRAME(codeobj_dcedf8861ccd6dfc62dca729cac77bce, module_src$base_rules);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_dcedf8861ccd6dfc62dca729cac77bce);
    assert(Py_REFCNT(frame_dcedf8861ccd6dfc62dca729cac77bce) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[32], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[34];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_src$base_rules;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[35];
        tmp_level_value_1 = mod_consts[36];
        frame_dcedf8861ccd6dfc62dca729cac77bce->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_src$base_rules,
                mod_consts[6],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dcedf8861ccd6dfc62dca729cac77bce);
#endif
    popFrameStack();

    assertFrameObject(frame_dcedf8861ccd6dfc62dca729cac77bce);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dcedf8861ccd6dfc62dca729cac77bce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dcedf8861ccd6dfc62dca729cac77bce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcedf8861ccd6dfc62dca729cac77bce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcedf8861ccd6dfc62dca729cac77bce, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_src$base_rules$$$function__1_and_clause();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_src$base_rules$$$function__2_or_clause();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_src$base_rules$$$function__3_grouped();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_src$base_rules$$$function__4_get_base_rules();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_src$base_rules$$$function__5_number_everywhere();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_src$base_rules$$$function__6_no_double_entries();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_src$base_rules$$$function__7_row();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_src$base_rules$$$function__8_column();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_src$base_rules$$$function__9_area();

        UPDATE_STRING_DICT1(moduledict_src$base_rules, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_13);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("src.base_rules", false);

    return module_src$base_rules;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$base_rules, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("src$base_rules", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
