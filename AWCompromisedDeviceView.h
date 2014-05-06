/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"

@class UIImage, NSString, UILabel, UIButton, UIImageView;

@interface AWCompromisedDeviceView : UIView {
	UILabel* message;
	UIImageView* icon;
	BOOL _shouldDisplayDismissButton;
	UIImage* _warningIcon;
	NSString* _warningMessage;
	UIButton* _dismissButton;
}
@property(retain, nonatomic) UIButton* dismissButton;
@property(assign, nonatomic) BOOL shouldDisplayDismissButton;
@property(copy, nonatomic) NSString* warningMessage;
@property(retain, nonatomic) UIImage* warningIcon;
-(void)setTargetForDismissButtonWithTarget:(id)target andAction:(SEL)action;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
