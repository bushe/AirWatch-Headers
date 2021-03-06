/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWBottomViewDelegate.h"
#import <UIKit/UIViewController.h>
#import "UIAlertViewDelegate.h"

@class AWBottomView, NSString, AWLinearGradientView, AWWebView, UIScrollView;

__attribute__((visibility("hidden")))
@interface EulaAcceptanceViewController : UIViewController <AWBottomViewDelegate, UIAlertViewDelegate> {
	AWLinearGradientView* _linearGradientView;
	AWWebView* eulaView;
	NSString* checkoutAuthenToken;
	UIScrollView* _eulaText;
	AWBottomView* _buttonView;
	NSString* _eulaContent;
	int _eulaContentID;
}
@property(assign, nonatomic) int eulaContentID;
@property(retain, nonatomic) NSString* checkoutAuthenToken;
@property(retain, nonatomic) NSString* eulaContent;
@property(retain, nonatomic) AWBottomView* buttonView;
@property(retain, nonatomic) UIScrollView* eulaText;
-(void)dealloc;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)changeFrameBasedOnOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)cancelPressed;
-(void)didReceiveMemoryWarning;
-(void)bottomView:(id)view didSelectBotton:(int)botton;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

