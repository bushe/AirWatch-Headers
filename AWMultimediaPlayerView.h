/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"

@class NSURL, NSString, MPMoviePlayerController;
@protocol AWMultimediaPlayerViewDelegate;

@interface AWMultimediaPlayerView : UIView {
	NSURL* movieFilePath;
	NSString* mimeType;
	id<AWMultimediaPlayerViewDelegate> delegate;
	MPMoviePlayerController* moviePlayerController;
	BOOL _isFullscreen;
	MPMoviePlayerController* _moviePlayerController;
	NSURL* _movieFilePath;
	NSString* _mimeType;
	id<AWMultimediaPlayerViewDelegate> _delegate;
}
@property(retain, nonatomic) MPMoviePlayerController* moviePlayerController;
@property(assign, nonatomic) BOOL isFullscreen;
@property(assign, nonatomic) id<AWMultimediaPlayerViewDelegate> delegate;
@property(retain, nonatomic) NSString* mimeType;
@property(retain, nonatomic) NSURL* movieFilePath;
-(void)displayFullScreen:(BOOL)screen;
-(void)didRotate;
-(void)willAnimateRotationToOrientation:(int)orientation;
-(void)adjustToRect:(CGRect)rect;
-(void)setMediaPlayStartTime:(double)time;
-(double)currentPlaybackTime;
-(void)playAudioWithPath:(id)path;
-(void)playMovieWithPath:(id)path;
-(void)playMediaFile:(id)file;
-(void)controlMultimedia:(int)multimedia;
-(void)stopPlayingMedia;
-(void)willEnterFullScreen:(id)screen;
-(void)didExistFullScreen:(id)screen;
-(void)loadStateDidChange:(id)loadState;
-(void)moviePlayBackDidFinish:(id)moviePlayBack;
-(void)displayError:(id)error;
-(void)removeMovieNotifications;
-(void)registerMovieNotifications;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
