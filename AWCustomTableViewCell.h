/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface AWCustomTableViewCell : UITableViewCell {
	UIImageView* _checkView;
	BOOL _checked;
}
@property(assign, nonatomic) BOOL checked;
+(void)setEditMode:(BOOL)mode;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
