/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWCommand.h"

@class NSDate;

@interface AWClearPasscodeCommand : AWCommand {
	NSDate* _commandTimeStamp;
}
@property(retain, nonatomic) NSDate* commandTimeStamp;
-(void)parseTimeStamp:(id)stamp;
-(id)initWithDictionary:(id)dictionary;
-(void)dealloc;
@end

