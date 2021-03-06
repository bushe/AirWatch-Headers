/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "NSURLConnectionDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "AWSessionDelegate.h"

@class NSMutableData, NSString, NSURLConnection;

@interface AWAssetTracker : NSObject <AWSessionDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
	id currentHandler;
	id statusHandler;
	NSString* currentOperation;
	BOOL isConnecting;
	NSURLConnection* _connection;
	NSMutableData* dataBuffer;
}
-(id)errorInfoForStatusCode:(int)statusCode;
-(id)dateFromResponseDict:(id)responseDict;
-(id)bodyDataUsingSession:(id)session;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)AWSession:(id)session failedToInvalidateTokenWithError:(id)error;
-(void)AWSessionDidInvalidate:(id)awsession;
-(void)AWSession:(id)session didFailWithError:(id)error;
-(void)AWSession:(id)session didRecieveToken:(id)token;
-(void)statusWithCompletionHandler:(id)completionHandler;
-(void)checkinWithSession:(id)session withCompletionHandler:(id)completionHandler;
-(void)checkoutWithSession:(id)session withCompletionHandler:(id)completionHandler;
-(id)init;
-(void)dealloc;
@end

