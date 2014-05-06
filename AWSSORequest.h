/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSData;

@interface AWSSORequest : NSObject {
	NSData* _encryptionKey;
	NSString* _name;
	NSString* _containerIdentifier;
	NSString* _callBackscheme;
	NSString* _targetscheme;
	NSString* _bundleVersion;
	NSString* _bundleVersionShort;
	NSString* _version;
	NSDate* _lockCommandTimeStamp;
	NSDate* _commandTimeStamp;
}
@property(retain, nonatomic) NSDate* commandTimeStamp;
@property(retain, nonatomic) NSDate* lockCommandTimeStamp;
@property(retain, nonatomic) NSString* version;
@property(retain, nonatomic) NSString* bundleVersionShort;
@property(retain, nonatomic) NSString* bundleVersion;
@property(retain, nonatomic) NSString* targetscheme;
@property(retain, nonatomic) NSString* callBackscheme;
@property(retain, nonatomic) NSString* containerIdentifier;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSData* encryptionKey;
-(void)dealloc;
@end
