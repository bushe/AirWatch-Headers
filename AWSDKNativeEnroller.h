/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class AWEnrollmentAccount, NSString;

__attribute__((visibility("hidden")))
@interface AWSDKNativeEnroller : NSObject {
	BOOL _addSessionId;
	BOOL _addMoreDeviceDetials;
	BOOL _addSchema;
	BOOL _pullTempToken;
	BOOL _registeringApp;
	BOOL _groupIdSource;
	BOOL _ssoEnabled;
	NSString* _sessionId;
	NSString* _tempToken;
	NSString* _postEnrollmentUrl;
	NSString* _uuidToken;
	NSString* _registrationToken;
	AWEnrollmentAccount* _account;
}
@property(assign, nonatomic) BOOL ssoEnabled;
@property(retain, nonatomic) AWEnrollmentAccount* account;
@property(retain, nonatomic) NSString* registrationToken;
@property(retain, nonatomic) NSString* uuidToken;
@property(retain, nonatomic) NSString* postEnrollmentUrl;
@property(assign, nonatomic) BOOL groupIdSource;
@property(retain, nonatomic) NSString* tempToken;
@property(retain, nonatomic) NSString* sessionId;
+(id)sharedInstance;
-(void)clearAccount;
-(void)dealloc;
-(id)getUniqueDeviceIdentifier;
-(void)getUniqueIdentifier;
-(id)makeGeneralPayload;
-(id)makePayloadForEnrollmentType:(int)enrollmentType withinfo:(id)withinfo;
-(void)startRequestWithType:(int)type info:(id)info WithCompletionHandler:(id)completionHandler;
-(void)registerApp:(id)app;
@end

