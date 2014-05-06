/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface AWSecurityWrapper : NSObject {
	NSString* _name;
	SecKey* _publicKey;
	SecKey* _privateKey;
	BOOL _isPersistent;
}
+(id)summaryFromCertificate:(id)certificate error:(id*)error;
+(id)certificateInformationFromCertificate:(id)certificate password:(id)password error:(id*)error;
-(id)decrypt:(id)decrypt error:(id*)error;
-(id)encrypt:(id)encrypt withKey:(id)key error:(id*)error;
-(SecKey*)publicKeyRef;
-(SecKey*)privateKeyRef;
-(BOOL)generateKeyPair:(unsigned)pair error:(id*)error;
-(id)publicKeyData:(id*)data;
-(void)clear;
-(id)tempKeyAttributes;
-(id)publicKeyAttributes;
-(id)privatKeyAttributes;
-(id)publicIdentifier;
-(id)privateIdentifier;
-(id)tempIdentifier;
-(id)initWithName:(id)name error:(id*)error;
@end
