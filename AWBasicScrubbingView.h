/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"

@class UIButton, AWDocumentHUDView, NSMutableArray;
@protocol AWBasicScrubbingViewDelegate, AWBasicScrubViewDataSource;

@interface AWBasicScrubbingView : UIView {
	NSMutableArray* _dots;
	UIView* _dotContentView;
	CGRect _cachedDotRect;
	CGRect _markerRect;
	int _previousOrientation;
	unsigned _correctedPageCount;
	CGSize normalSize;
	AWDocumentHUDView* hudView;
	BOOL _isRightBarButtonItemVisible;
	BOOL _isLeftBarButtonItemVisible;
	id<AWBasicScrubbingViewDelegate> _delegate;
	id<AWBasicScrubViewDataSource> _dataSource;
	unsigned _pageCount;
	unsigned _currentPage;
	UIButton* _leftBarButtonItem;
	UIButton* _rightBarButtonItem;
}
@property(assign, nonatomic) unsigned correctedPageCount;
@property(assign, nonatomic) int previousOrientation;
@property(assign, nonatomic) BOOL isRightBarButtonItemVisible;
@property(assign, nonatomic) BOOL isLeftBarButtonItemVisible;
@property(retain, nonatomic) UIButton* rightBarButtonItem;
@property(retain, nonatomic) UIButton* leftBarButtonItem;
@property(assign, nonatomic) unsigned currentPage;
@property(readonly, assign, nonatomic) unsigned pageCount;
@property(assign, nonatomic) id<AWBasicScrubViewDataSource> dataSource;
@property(assign, nonatomic) id<AWBasicScrubbingViewDelegate> delegate;
-(void)addRightBarButton;
-(void)addLeftBarButton;
-(void)scrollToPage:(unsigned)page;
-(void)positionDotContentView;
-(unsigned)maximumPageCountForWidth:(float)width;
-(void)handleTouch:(id)touch isDragging:(BOOL)dragging;
-(void)reloadData;
-(void)sizeView:(id)view factor:(float)factor;
-(void)drawCursor:(CGPoint)cursor;
-(CGPoint)findPointForCurrentPage;
-(void)sizeIcons:(CGPoint)icons;
-(void)deviceOrientationDidChangeNotification:(id)deviceOrientation;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(BOOL)canBecomeFirstResponder;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

