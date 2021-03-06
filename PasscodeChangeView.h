/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"
#import "UITextFieldDelegate.h"

@class LoginTextField, UIButton, UIToolbar;

@interface PasscodeChangeView : UIView <UITextFieldDelegate> {
	UIButton* loginButton;
	UIButton* cancelButton;
	UIToolbar* dismissBar;
	id loginTarget;
	SEL loginAction;
	int passcodeMode;
	LoginTextField* _currentPassword;
	LoginTextField* _updatedPassword;
	LoginTextField* _verifyNewPassword;
	UIView* _loginButtonView;
	id _textFieldBeganEditingBlock;
	id _keyboardDismissed;
	id _cancelPressed;
}
@property(copy, nonatomic) id cancelPressed;
@property(copy, nonatomic) id keyboardDismissed;
@property(copy, nonatomic) id textFieldBeganEditingBlock;
@property(retain, nonatomic) UIView* loginButtonView;
@property(retain, nonatomic) LoginTextField* verifyNewPassword;
@property(retain, nonatomic) LoginTextField* updatedPassword;
@property(assign, nonatomic) LoginTextField* currentPassword;
-(void)dismissPressed;
-(id)getNewPass;
-(id)getCurrentPass;
-(id)textFieldBeingEdited;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)cancelPressed:(id)pressed;
-(void)loginPressed:(id)pressed;
-(void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame andPasscodeType:(int)type;
@end

