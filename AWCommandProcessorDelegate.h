/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AWCommandProcessorDelegate <NSObject>
-(void)commandProccessor:(id)proccessor failedWithError:(id)error;
@optional
-(id)commandProcessor:(id)processor responseForCommand:(id)command;
-(void)commandProcessorFinishedReceivingCommands:(id)commands;
-(void)commandProcessorStartedReceivingCommands:(id)commands;
-(int)commandProcessor:(id)processor receivedCommand:(id)command;
@end

