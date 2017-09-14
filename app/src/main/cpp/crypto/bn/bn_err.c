/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/bn.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_BN,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_BN,0,reason)

static ERR_STRING_DATA BN_str_functs[] = {
    {ERR_FUNC(BN_F_BNRAND), "bnrand"},
    {ERR_FUNC(BN_F_BN_BLINDING_CONVERT_EX), "BN_BLINDING_convert_ex"},
    {ERR_FUNC(BN_F_BN_BLINDING_CREATE_PARAM), "BN_BLINDING_create_param"},
    {ERR_FUNC(BN_F_BN_BLINDING_INVERT_EX), "BN_BLINDING_invert_ex"},
    {ERR_FUNC(BN_F_BN_BLINDING_NEW), "BN_BLINDING_new"},
    {ERR_FUNC(BN_F_BN_BLINDING_UPDATE), "BN_BLINDING_update"},
    {ERR_FUNC(BN_F_BN_BN2DEC), "BN_bn2dec"},
    {ERR_FUNC(BN_F_BN_BN2HEX), "BN_bn2hex"},
    {ERR_FUNC(BN_F_BN_BN2SOLINAS), "BN_bn2solinas"},
    {ERR_FUNC(BN_F_BN_COMPUTE_WNAF), "bn_compute_wNAF"},
    {ERR_FUNC(BN_F_BN_CTX_GET), "BN_CTX_get"},
    {ERR_FUNC(BN_F_BN_CTX_NEW), "BN_CTX_new"},
    {ERR_FUNC(BN_F_BN_CTX_START), "BN_CTX_start"},
    {ERR_FUNC(BN_F_BN_DIV), "BN_div"},
    {ERR_FUNC(BN_F_BN_DIV_RECP), "BN_div_recp"},
    {ERR_FUNC(BN_F_BN_EXP), "BN_exp"},
    {ERR_FUNC(BN_F_BN_EXPAND_INTERNAL), "bn_expand_internal"},
    {ERR_FUNC(BN_F_BN_GENCB_NEW), "BN_GENCB_new"},
    {ERR_FUNC(BN_F_BN_GENERATE_DSA_NONCE), "BN_generate_dsa_nonce"},
    {ERR_FUNC(BN_F_BN_GENERATE_PRIME_EX), "BN_generate_prime_ex"},
    {ERR_FUNC(BN_F_BN_GF2M_MOD), "BN_GF2m_mod"},
    {ERR_FUNC(BN_F_BN_GF2M_MOD_EXP), "BN_GF2m_mod_exp"},
    {ERR_FUNC(BN_F_BN_GF2M_MOD_MUL), "BN_GF2m_mod_mul"},
    {ERR_FUNC(BN_F_BN_GF2M_MOD_SOLVE_QUAD), "BN_GF2m_mod_solve_quad"},
    {ERR_FUNC(BN_F_BN_GF2M_MOD_SOLVE_QUAD_ARR), "BN_GF2m_mod_solve_quad_arr"},
    {ERR_FUNC(BN_F_BN_GF2M_MOD_SQR), "BN_GF2m_mod_sqr"},
    {ERR_FUNC(BN_F_BN_GF2M_MOD_SQRT), "BN_GF2m_mod_sqrt"},
    {ERR_FUNC(BN_F_BN_GFP2_ADD), "BN_GFP2_add"},
    {ERR_FUNC(BN_F_BN_GFP2_CANONICAL), "BN_GFP2_canonical"},
    {ERR_FUNC(BN_F_BN_GFP2_CMP), "BN_GFP2_cmp"},
    {ERR_FUNC(BN_F_BN_GFP2_COPY), "BN_GFP2_copy"},
    {ERR_FUNC(BN_F_BN_GFP2_DIV_BN), "BN_GFP2_div_bn"},
    {ERR_FUNC(BN_F_BN_GFP2_EQU), "BN_GFP2_equ"},
    {ERR_FUNC(BN_F_BN_GFP2_INV), "BN_GFP2_inv"},
    {ERR_FUNC(BN_F_BN_GFP2_IS_ZERO), "BN_GFP2_is_zero"},
    {ERR_FUNC(BN_F_BN_GFP2_MUL), "BN_GFP2_mul"},
    {ERR_FUNC(BN_F_BN_GFP2_NEW), "BN_GFP2_new"},
    {ERR_FUNC(BN_F_BN_GFP2_ONE), "BN_GFP2_one"},
    {ERR_FUNC(BN_F_BN_GFP2_SET_BN), "BN_GFP2_set_bn"},
    {ERR_FUNC(BN_F_BN_GFP2_SUB), "BN_GFP2_sub"},
    {ERR_FUNC(BN_F_BN_GFP2_ZERO), "BN_GFP2_zero"},
    {ERR_FUNC(BN_F_BN_HASH_TO_RANGE), "BN_hash_to_range"},
    {ERR_FUNC(BN_F_BN_LSHIFT), "BN_lshift"},
    {ERR_FUNC(BN_F_BN_MOD_EXP2_MONT), "BN_mod_exp2_mont"},
    {ERR_FUNC(BN_F_BN_MOD_EXP_MONT), "BN_mod_exp_mont"},
    {ERR_FUNC(BN_F_BN_MOD_EXP_MONT_CONSTTIME), "BN_mod_exp_mont_consttime"},
    {ERR_FUNC(BN_F_BN_MOD_EXP_MONT_WORD), "BN_mod_exp_mont_word"},
    {ERR_FUNC(BN_F_BN_MOD_EXP_RECP), "BN_mod_exp_recp"},
    {ERR_FUNC(BN_F_BN_MOD_EXP_SIMPLE), "BN_mod_exp_simple"},
    {ERR_FUNC(BN_F_BN_MOD_INVERSE), "BN_mod_inverse"},
    {ERR_FUNC(BN_F_BN_MOD_INVERSE_NO_BRANCH), "BN_mod_inverse_no_branch"},
    {ERR_FUNC(BN_F_BN_MOD_LSHIFT_QUICK), "BN_mod_lshift_quick"},
    {ERR_FUNC(BN_F_BN_MOD_SQRT), "BN_mod_sqrt"},
    {ERR_FUNC(BN_F_BN_MPI2BN), "BN_mpi2bn"},
    {ERR_FUNC(BN_F_BN_NEW), "BN_new"},
    {ERR_FUNC(BN_F_BN_RAND), "BN_rand"},
    {ERR_FUNC(BN_F_BN_RAND_RANGE), "BN_rand_range"},
    {ERR_FUNC(BN_F_BN_RSHIFT), "BN_rshift"},
    {ERR_FUNC(BN_F_BN_SET_WORDS), "bn_set_words"},
    {ERR_FUNC(BN_F_BN_SOLINAS2BN), "BN_solinas2bn"},
    {ERR_FUNC(BN_F_BN_USUB), "BN_usub"},
    {0, NULL}
};

static ERR_STRING_DATA BN_str_reasons[] = {
    {ERR_REASON(BN_R_ARG2_LT_ARG3), "arg2 lt arg3"},
    {ERR_REASON(BN_R_BAD_RECIPROCAL), "bad reciprocal"},
    {ERR_REASON(BN_R_BIGNUM_TOO_LONG), "bignum too long"},
    {ERR_REASON(BN_R_BITS_TOO_SMALL), "bits too small"},
    {ERR_REASON(BN_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_REASON(BN_R_CALLED_WITH_EVEN_MODULUS), "called with even modulus"},
    {ERR_REASON(BN_R_DIV_BY_ZERO), "div by zero"},
    {ERR_REASON(BN_R_ENCODING_ERROR), "encoding error"},
    {ERR_REASON(BN_R_EXPAND_ON_STATIC_BIGNUM_DATA),
     "expand on static bignum data"},
    {ERR_REASON(BN_R_INPUT_NOT_REDUCED), "input not reduced"},
    {ERR_REASON(BN_R_INVALID_LENGTH), "invalid length"},
    {ERR_REASON(BN_R_INVALID_RANGE), "invalid range"},
    {ERR_REASON(BN_R_INVALID_SHIFT), "invalid shift"},
    {ERR_REASON(BN_R_INVALID_SOLINAS), "invalid solinas"},
    {ERR_REASON(BN_R_INVALID_SOLINAS_PARAMETERS),
     "invalid solinas parameters"},
    {ERR_REASON(BN_R_NOT_A_SQUARE), "not a square"},
    {ERR_REASON(BN_R_NOT_INITIALIZED), "not initialized"},
    {ERR_REASON(BN_R_NO_INVERSE), "no inverse"},
    {ERR_REASON(BN_R_NO_SOLUTION), "no solution"},
    {ERR_REASON(BN_R_PRIVATE_KEY_TOO_LARGE), "private key too large"},
    {ERR_REASON(BN_R_P_IS_NOT_PRIME), "p is not prime"},
    {ERR_REASON(BN_R_TOO_MANY_ITERATIONS), "too many iterations"},
    {ERR_REASON(BN_R_TOO_MANY_TEMPORARY_VARIABLES),
     "too many temporary variables"},
    {0, NULL}
};

#endif

int ERR_load_BN_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(BN_str_functs[0].error) == NULL) {
        ERR_load_strings(0, BN_str_functs);
        ERR_load_strings(0, BN_str_reasons);
    }
#endif
    return 1;
}
