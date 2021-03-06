/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSOperation.h>
#import "AWAuthenticationChallengeControllerDelegate.h"
#import "AWURLConnectionDelegate.h"

@class NSURLCredential, AWURLConnection, AWAuthenticationChallengeController, NSData, NSMutableData, NSError, AWEnrollmentAccount, AWMutableURLRequest;
@protocol AWNetworkOperationDelegate;

@interface AWNetworkOperation : NSOperation <AWURLConnectionDelegate, AWAuthenticationChallengeControllerDelegate> {
	AWURLConnection* _urlConnection;
	AWMutableURLRequest* _request;
	NSMutableData* _dataBuffer;
	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _isCancelled;
	BOOL _isPaused;
	BOOL _shouldPresentAuthentication;
	BOOL _shouldRetry;
	id _context;
	id<AWNetworkOperationDelegate> _delegate;
	NSURLCredential* _credential;
	int _downloadType;
	AWEnrollmentAccount* _authenticatedEnrollmentAccount;
	NSData* _encryptionKey;
	NSError* _httpError;
	AWAuthenticationChallengeController* _challengeController;
}
@property(assign, nonatomic) BOOL shouldRetry;
@property(retain, nonatomic) AWAuthenticationChallengeController* challengeController;
@property(retain, nonatomic) NSError* httpError;
@property(retain, nonatomic) NSData* encryptionKey;
@property(retain, nonatomic) AWEnrollmentAccount* authenticatedEnrollmentAccount;
@property(assign, nonatomic) int downloadType;
@property(retain, nonatomic) NSURLCredential* credential;
@property(assign, nonatomic) BOOL shouldPresentAuthentication;
@property(retain, nonatomic) AWMutableURLRequest* request;
@property(assign, nonatomic) id<AWNetworkOperationDelegate> delegate;
@property(retain, nonatomic) id context;
-(void)cancelDownloadOperation;
-(void)authenticationChallengeController:(id)controller failedToAuthenticateChallenge:(id)authenticateChallenge;
-(id)bearerAuthenticationFromCurrentCredential;
-(id)basicAuthenticationFromCurrentCredential;
-(id)authorizationHeader;
-(void)URLConnectionDidFinishLoading:(id)urlconnection;
-(void)URLConnection:(id)connection didFailWithError:(id)error;
-(id)URLConnection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(void)URLConnection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(BOOL)URLConnection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;
-(void)URLConnection:(id)connection didReceiveData:(id)data;
-(void)URLConnection:(id)connection didReceiveResponse:(id)response;
-(id)currentError;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(BOOL)isCancelled;
-(void)pause;
-(void)cancel;
-(void)retryDownloadWithRange:(long long)range;
-(void)cancelOperation;
-(void)start;
-(void)dealloc;
-(id)initWithRequest:(id)request;
@end

