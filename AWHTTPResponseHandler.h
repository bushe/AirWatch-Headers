/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <Foundation/NSObject.h>


@interface AWHTTPResponseHandler : NSObject {
}
+(id)decodeMIMEType:(id)type;
+(id)encodeMIME:(id)mime;
-(id)responseDataForRequest:(CFHTTPMessageRef)request;
@end
