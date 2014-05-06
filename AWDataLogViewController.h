/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWTableViewController.h"

@class UISegmentedControl, NSArray, UIToolbar;

__attribute__((visibility("hidden")))
@interface AWDataLogViewController : AWTableViewController {
	UIToolbar* _toolBar;
	NSArray* _filterToolBarButtons;
	UISegmentedControl* _dataFilterControl;
	BOOL _isConfigured;
	NSArray* _recentDataLogs;
}
@property(retain, nonatomic) NSArray* recentDataLogs;
-(void)setupBranding;
-(id)startTime:(id)time;
-(id)dataTransferedForLog:(id)log;
-(void)dataFilterValueChanged:(id)changed;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end
