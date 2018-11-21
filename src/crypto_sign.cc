/**
 * Node Native Module for Lib Sodium
 *
 * @Author Pedro Paixao
 * @email paixaop at gmail dot com
 * @License MIT
 */
#include "node_sodium.h"
#include "crypto_sign_ed25519.h"


/**
 * Register function calls in node binding
 */
void register_crypto_sign(Napi::Env env, Napi::Object exports) {

     // Sign
    EXPORT_ALIAS(crypto_sign, crypto_sign_ed25519);
    EXPORT_ALIAS(crypto_sign_open, crypto_sign_ed25519_open);
    EXPORT_ALIAS(crypto_sign_detached, crypto_sign_ed25519_detached);
    EXPORT_ALIAS(crypto_sign_verify_detached, crypto_sign_ed25519_verify_detached);
    EXPORT_ALIAS(crypto_sign_keypair, crypto_sign_ed25519_keypair);
    EXPORT_ALIAS(crypto_sign_seed_keypair, crypto_sign_ed25519_seed_keypair);
    
    NEW_INT_PROP(crypto_sign_SEEDBYTES);
    NEW_INT_PROP(crypto_sign_BYTES);
    NEW_INT_PROP(crypto_sign_PUBLICKEYBYTES);
    NEW_INT_PROP(crypto_sign_SECRETKEYBYTES);
    NEW_STRING_PROP(crypto_sign_PRIMITIVE);
}
