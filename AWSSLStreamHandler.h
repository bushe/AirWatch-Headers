/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AirWatch-Structs.h"
#import "NSStreamDelegate.h"

@class NSURL, AWSSLOutputStream, NSInputStream, NSOutputStream, AWSSLInputStream;

@interface AWSSLStreamHandler : NSObject <NSStreamDelegate> {
	AWSSLInputStream* _inStream;
	AWSSLOutputStream* _outStream;
	NSInputStream* _inMiddleStream;
	NSOutputStream* _outMiddleStream;
	int _sendConnect;
	ssl_connection* _ssl;
	int _connectionNumber;
	NSURL* _URL;
}
@property(retain, nonatomic) NSURL* URL;
-(void)closePorts;
-(void)setupTunnel;
-(void)nextState:(int)state;
-(void)runState;
-(void)stream:(id)stream handleEvent:(unsigned)event;
-(void)setIgnoreInvalidCertificate:(BOOL)certificate;
-(id)init:(id*)init outputStream:(id*)stream sslInputStream:(id)stream3 sslOutputStream:(id)stream4 connectionNumber:(int)number sendConnect:(int)connect;
-(void)dealloc;
@end
