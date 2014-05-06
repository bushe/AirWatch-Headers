/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWProfilePayload.h"

@class NSArray;

@interface AWIntegratedAuthPayload : AWProfilePayload {
	BOOL _enableIntegratedAuthentication;
	NSArray* _allowedSites;
}
@property(readonly, assign, nonatomic) NSArray* allowedSites;
@property(readonly, assign, nonatomic) BOOL enableIntegratedAuthentication;
+(id)payloadTypeV2;
+(id)payloadType;
-(id)initWithDictionary:(id)dictionary;
@end
