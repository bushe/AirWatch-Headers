/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"

@class AWMyDeviceInfoCell;

__attribute__((visibility("hidden")))
@interface MyDeviceInfocellContentViewiPad : UIView {
	AWMyDeviceInfoCell* _cell;
	BOOL _highlighted;
}
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)drawRect:(CGRect)rect;
-(id)initWithFrame:(CGRect)frame cell:(id)cell;
@end
