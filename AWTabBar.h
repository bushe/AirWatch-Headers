/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIFont, UIButton, UIScrollView, AWTabBarItem, AWTabView;
@protocol AWTabBarDelegate;

@interface AWTabBar : UIView {
	BOOL _newTabButtonEnabled;
	BOOL _useBrandingColors;
	BOOL _useNewAddButton;
	BOOL _useNewTabs;
	BOOL _enableScrolling;
	NSArray* _items;
	AWTabBarItem* _selectedItem;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _tabLabelColor;
	UIFont* _tabLabelFont;
	unsigned _tabDirection;
	NSMutableArray* _tabViews;
	id<AWTabBarDelegate> _delegate;
	AWTabView* _selectedTabView;
	UIButton* _addTabButton;
	unsigned _tabCloseSide;
	float _tabOverlap;
	float _maximumTabSize;
	UIScrollView* _tabContainer;
}
@property(retain, nonatomic) UIScrollView* tabContainer;
@property(readonly, assign, nonatomic) UIButton* addTabButton;
@property(retain, nonatomic) AWTabView* selectedTabView;
@property(retain, nonatomic) NSMutableArray* tabViews;
@property(assign, nonatomic) float maximumTabSize;
@property(assign, nonatomic) float tabOverlap;
@property(assign, nonatomic) unsigned tabCloseSide;
@property(assign, nonatomic) BOOL useNewAddButton;
@property(assign, nonatomic) BOOL useNewTabs;
@property(assign, nonatomic) BOOL useBrandingColors;
@property(assign, nonatomic) unsigned tabDirection;
@property(assign, nonatomic) BOOL enableScrolling;
@property(assign, nonatomic) BOOL newTabButtonEnabled;
@property(retain, nonatomic) UIFont* tabLabelFont;
@property(retain, nonatomic) UIColor* tabLabelColor;
@property(retain, nonatomic) UIColor* secondaryColor;
@property(retain, nonatomic) UIColor* primaryColor;
@property(assign, nonatomic) AWTabBarItem* selectedItem;
@property(readonly, assign, nonatomic) NSArray* items;
@property(assign, nonatomic) id<AWTabBarDelegate> delegate;
-(void)setTitleForSelectedTab:(id)selectedTab withIndex:(unsigned)index;
-(void)addTabButtonTapped:(id)tapped;
-(void)layoutSubviewsAnimated:(BOOL)animated;
-(CGRect)documentTabViewRectForIndex:(unsigned)index;
-(BOOL)canAddTab;
-(void)addTabViewWithItem:(id)item withActiveColor:(id)activeColor withInActiveColor:(id)activeColor3;
-(void)selectDocumentTabView:(id)view;
-(void)reloadTabsBranding;
-(void)removeAllTabs;
-(void)removeTabItemAtIndex:(unsigned)index;
-(void)deSelectThePreviousSelectedTab;
-(void)removeTabItem:(id)item;
-(void)addTabItem:(id)item withActiveColor:(id)activeColor withInActiveColor:(id)activeColor3;
-(void)addTabItem:(id)item;
-(void)documentTabViewCloseButtonTapped:(id)tapped;
-(void)documentTabViewTapped:(id)tapped;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame withPrimaryColor:(id)primaryColor withSecondaryColor:(id)secondaryColor;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
