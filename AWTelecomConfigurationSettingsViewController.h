/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import "UITextFieldDelegate.h"
#import <UIKit/UITableViewController.h>

@class UIGestureRecognizer, UIButton, UITextField;

__attribute__((visibility("hidden")))
@interface AWTelecomConfigurationSettingsViewController : UITableViewController <UITextFieldDelegate> {
	UITextField* _monthlyLimitTextField;
	UITextField* _billingCycleResetTextField;
	UITextField* _dailyAlertTextField;
	UITextField* _monthlyAlertTextField;
	UIGestureRecognizer* tapGesture;
	BOOL _backButtonWasPressed;
	BOOL _isKeyboardAppear;
	UIButton* _doneButton;
	int _currentTextFieldTag;
}
@property(assign, nonatomic) BOOL isKeyboardAppear;
@property(assign, nonatomic) int currentTextFieldTag;
@property(assign, nonatomic) BOOL backButtonWasPressed;
@property(retain, nonatomic) UIButton* doneButton;
-(void)tappedOutside:(id)outside;
-(void)doneButton:(id)button;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)done:(id)done;
-(void)setMonthlyCycleResettingInterval:(double)interval;
-(BOOL)isAllDigitsOfString:(id)string;
-(void)SendAlertsChange:(id)change;
-(void)trackTelecomUsageChange:(id)change;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithStyle:(int)style;
@end

