//
//  SelfSignedCertificate.h
//  SecurityKey
//
//  Created by Benjamin P Toews on 8/19/16.
//  Copyright © 2016 mastahyeti. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <openssl/ec.h>
#import <openssl/ecdsa.h>
#include <openssl/evp.h>
#include <openssl/objects.h>
#include <openssl/x509.h>
#include <openssl/asn1.h>
#include <openssl/pem.h>

@interface SelfSignedCertificate : NSObject;
@property EVP_PKEY* pkey;
@property X509* x509;

- (id)init;
- (void)print;
- (NSData*)toDer;

@end