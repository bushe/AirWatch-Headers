/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"
#import "UITextFieldDelegate.h"

@class UITextField;

@interface AWUsernamePasswordView : UIView <UITextFieldDelegate> {
	UITextField* _usernameTextField;
	UITextField* _passwordTextField;
	id _returnKeyTappedBlock;
}
@property(copy, nonatomic) id returnKeyTappedBlock;
@property(retain, nonatomic) UITextField* passwordTextField;
@property(retain, nonatomic) UITextField* usernameTextField;
-(BOOL)allFieldsFilledOut;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)resignFromActive;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
